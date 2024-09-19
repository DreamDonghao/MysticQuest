#include "Biont.h"
#include <iostream>
namespace game {
	Biont::Biont(double _x, double _y, unsigned int _width, unsigned int _height, const std::wstring& _filepath,
		double _speed, double _landSpeed, double _jumpSpeed, double _health)
		:x(_x), y(_y), width(_width), height(_height), imageIcon(_filepath, _x, _y, _width, _height),
		speed(_speed),landSpeed(_landSpeed),jumpSpeed(_jumpSpeed), health(_health),isJumping(false) {
	}
	void Biont::jump() { 
		if (!isJumping) {
			isJumping = true;
			currentJumpSpeed = jumpSpeed;
		}
	}
	void Biont::land() {
	}
	void Biont::updete(std::vector<Wall>& walls) {
		if (isJumping) {
			y -= currentJumpSpeed;
			updateImageIconXY();
			
			currentJumpSpeed -= gravity;
			for (auto& wall : walls) {
				if (x <= wall.getX() + wall.getWidth()
					&& x + width >= wall.getX()
					&& y <= wall.getY() + wall.getHeight()
					&& y + height >= wall.getY()) {
					y = wall.getY()-height;
					updateImageIconXY();
					isJumping = false;
				}
			}
		} else {

		}
	}
}