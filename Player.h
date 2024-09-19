#pragma once
#include "Biont.h"
namespace game {
    class Player :public Biont {
    public:
        Player(double x, double y, unsigned int width, unsigned int heigth,
            double speed,double landSpeed,double jumpSpeed, double health , const std::wstring& _filepath);
    private:

    };
}
