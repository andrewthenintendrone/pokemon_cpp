#pragma once
#include <vector>

namespace pokemon
{
	extern std::vector<std::string> colorStrings;

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

	extern std::string nameOfColor(COLOR color);
}
