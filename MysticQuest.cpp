#include "MysticQuest.h"
#include <iostream>
#include <thread>
#include <chrono>

int main() {
    efc::Window window(1200, 800, 254, 254, 254);
    efc::Message message;

    efc::Screen startScreen(window, message);
    efc::Button startGame(message, L"src\\startScreen\\startGame.png", 400, 100, 400, 150);
    efc::Button settings(message, L"src\\startScreen\\settings.png", 400, 300, 400, 150);
    efc::Button exit(message, L"src\\startScreen\\exit.png", 400, 500, 400, 150);
    startScreen.AddElement(&startGame, &exit, &settings);

    while (true) {
        startScreen.upDate();
        if (startGame.isLeftClick()) {
            efc::Timer timer;
            efc::Screen gameScreen(window, message);
            game::Player player(0, 0, 100, 100, 10, 10, 10, 10, L"src\\GameScreen\\player.jpg");
            std::vector<game::Wall> walls;
            walls.emplace_back(200, 700, 800, 50,L" ");
            gameScreen.AddElement(&player.getImageIcon());
            for (auto &wall : walls) {
                gameScreen.AddElement(&wall.getImageIcon());
            }

            while (true) {
                timer.reset();
                gameScreen.upDate();

                if (message.isAKeyDown()) {
                    player.moveLeft();
                }
                if (message.isDKeyDown()) {
                    player.moveRight();
                }
                if (message.isSpaceKeyDown()) {
                    player.jump();
                }
                player.updete(walls);
                player.land();
                std::this_thread::sleep_for(std::chrono::milliseconds(10));  // 控制帧率
            }
        } else if (settings.isLeftClick()) {
            efc::Screen settingsScreen(window, message);
            // 设置界面逻辑
        } else if (exit.isLeftClick()) {
            return 0;
        }
    }
}