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

		double speed;			// ˮƽ�ƶ�����
		double takeOffSoeed;	// �����ٶȣ�����Ϊ������
		double nowMidiarSpeed;	// ��ǰ�ڿ��е��ٶȣ�����Ϊ������ 
		double gravity;	// �������ٶȣ�ÿ֡����ֱ�����ٶȱ仯��
		bool inMidiar;			// �����Ƿ��ڿ���

		double health;		
		
		void updateImageIconXY() { imageIcon.setX(x), imageIcon.setY(y); }
	};
}
