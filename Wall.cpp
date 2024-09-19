#include "Wall.h"

namespace game {
	Wall::Wall(int _x, int _y, unsigned int _width, unsigned int _heigth,const std::wstring filePath)
		:x(_x), y(_y), width(_width), height(_heigth),imageIcon(filePath,x,y,width,height) {
	}
}

