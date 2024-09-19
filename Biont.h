#pragma once
#include "C:\\Users\\Donghao\\source\\repos\\Game\\EasyXForCppLib\\EasyXForCpp.h"
#include "Wall.h"

namespace game {
	class Biont {
	public:
		Biont(double _x,double _y,unsigned int _width,unsigned int _height, const std::wstring& _filepath,
			double _speed,double _takeOffSoeed,double _gravity,double _health);
		void moveLeft() { x -= speed, updateImageIconXY();}
		void moveRight() { x += speed,updateImageIconXY();}
		void updateStatus(std::vector<Wall> walls);
		void midiarMove();
		void jump();
		efc::ImageIcon& getImageIcon() { return imageIcon; }
	private:
		double x;
		double y;
		unsigned int width;
		unsigned int height;
		efc::ImageIcon imageIcon;

		double speed;			// 水平移动速率
		double takeOffSoeed;	// 起跳速度（向上为正方向）
		double nowMidiarSpeed;	// 当前在空中的速度（向上为正方向） 
		double gravity;	// 重力加速度（每帧的竖直方向速度变化）
		bool inMidiar;			// 现在是否在空中

		double health;		
		
		void updateImageIconXY() { imageIcon.setX(x), imageIcon.setY(y); }
	};
}
