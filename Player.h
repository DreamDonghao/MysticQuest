#pragma once
#include "Biont.h"
namespace game {
    class Player :public Biont {
    public:
        Player(double _x, double _y, unsigned int _width, unsigned int _height, const std::wstring& _filepath,
            double _speed, double _takeOffSoeed, double _gravity, double _health);
    private:

    };
}
