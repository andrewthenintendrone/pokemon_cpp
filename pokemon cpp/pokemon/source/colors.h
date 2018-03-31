#pragma once
<<<<<<< HEAD
#include <string>
=======
#include <vector>
>>>>>>> 4b849ed73c231e2f3b9ef5aa497d03e00ce58f9f

namespace pkm
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

<<<<<<< HEAD
    std::string colorToString(COLOR color);
=======
	extern std::string nameOfColor(COLOR color);
>>>>>>> 4b849ed73c231e2f3b9ef5aa497d03e00ce58f9f
}
