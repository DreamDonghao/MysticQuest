#include "Biont.h"
#include <iostream>
namespace game {
	Biont::Biont(double _x, double _y, unsigned int _width, unsigned int _height, const std::wstring& _filepath,
		double _speed, double _takeOffSoeed, double _gravity, double _health)
		:x(_x), y(_y), width(_width), height(_height), imageIcon(_filepath, _x, _y, _width, _height),
		speed(_speed), takeOffSoeed(_takeOffSoeed), gravity(_gravity), health(_health), nowMidiarSpeed(0), inMidiar(false) {
	}
	void Biont::updateStatus(std::vector<Wall> walls) {
		inMidiar = true;
		updateImageIconXY();
		for (auto& wall : walls) {
			if (x < wall.getX() + wall.getWidth()
				&& x + width > wall.getX()
				&& y < wall.getY() + wall.getHeight()
				&& y + height > wall.getY()) {//生物和墙重叠
				if (nowMidiarSpeed > 0) { // 处于上升状态
					y = wall.getY() + wall.getHeight();
					nowMidiarSpeed = 0;
				} else if (nowMidiarSpeed < 0) {//处于下降状态
					y = wall.getY() - height;
					nowMidiarSpeed = 0;
					inMidiar = false;
				}
			}
		}


	}

	void Biont::midiarMove() {
		if (inMidiar) {
			y -= nowMidiarSpeed;
			nowMidiarSpeed -= gravity;
		}
	}
	void Biont::jump() { 
		if (!inMidiar) {
			nowMidiarSpeed = takeOffSoeed;
			inMidiar = true;
		}
	}
}