#pragma once
#include "C:\\Users\\Donghao\\source\\repos\\Game\\EasyXForCppLib\\EasyXForCpp.h"
#include "Wall.h"

namespace game {
	class Biont {
	public:
		Biont(double _x,double _y,unsigned int _width,unsigned int _heigth, const std::wstring& _filepath,
			double _speed,double _landSpeed,double _jumpSpeed,double _health);
		void moveLeft() { x -= speed, updateImageIconXY();}
		void moveRight() { x += speed,updateImageIconXY();}
		void jump();
		void land();
		void updete(std::vector<Wall>&);
		efc::ImageIcon& getImageIcon() { return imageIcon; }
	private:
		double x;
		double y;
		unsigned int width;
		unsigned int height;
		efc::ImageIcon imageIcon;
		double speed;
		double landSpeed;
		double jumpSpeed;
		double currentJumpSpeed = 0;
		double gravity = 0.1;
		bool isJumping;
		double health;
		void updateImageIconXY() { imageIcon.setX(x), imageIcon.setY(y); }
	};
}
