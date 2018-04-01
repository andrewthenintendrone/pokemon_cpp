#pragma once
#include <string>

namespace pkm
{
	enum COLOR
    {
        RED,
        BLUE,
        YELLOW,
        GREEN,
        BLACK,
        BROWN,
        PURPLE,
        GRAY,
        WHITE,
        PINK
    };

    std::string colorToString(COLOR color);
}
