#include "Player.h"
namespace game {
	Player::Player(double x, double y, unsigned int width, unsigned int heigth,
		double speed, double landSpeed, double jumpSpeed, double health, const std::wstring& filepath)
		:Biont(x, y, width, heigth, filepath, speed, landSpeed, jumpSpeed, health) {
	}
}