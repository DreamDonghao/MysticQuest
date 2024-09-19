#include "Player.h"
namespace game {
	Player::Player(double x, double y, unsigned int width, unsigned int height, const std::wstring& filepath,
		double speed, double takeOffSoeed, double gravity, double health)
		:Biont(x, y, width, height, filepath, speed, takeOffSoeed, gravity, health) {
	}
}