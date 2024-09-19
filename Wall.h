#pragma once
#include "C:\\Users\\Donghao\\source\\repos\\Game\\EasyXForCppLib\\EasyXForCpp.h"
namespace game {
	class Wall {
	public:
		Wall(int _x, int _y, unsigned int _width, unsigned int _heigth,const std::wstring filePath);
		int getX() const { return x; }
		int getY() const { return y; }
		unsigned int getWidth() const { return width; }
		unsigned int getHeight() const { return height; }
		efc::ImageIcon& getImageIcon() { return imageIcon; }
	private:
		int x, y;
		unsigned int width, height;
		efc::ImageIcon imageIcon;
	};

}
