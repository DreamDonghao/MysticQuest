#pragma once
#include "C:\\Users\\Donghao\\source\\repos\\Game\\EasyXForCppLib\\EasyXForCpp.h"
namespace game {
	class Wall {
	public:
		Wall(int _x, int _y, unsigned int _width, unsigned int _heigth);
		int getX() const { return x; }
		int getY() const { return y; }
		unsigned int getWidth() const { return width; }
		unsigned int getHeight() const { return height; }
	private:
		int x, y;
		unsigned int width, height;
	};

}
