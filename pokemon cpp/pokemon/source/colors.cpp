#include "colors.h"
#include <vector>

namespace pkm
{
    std::vector<char*> colorStrings
    {
        "Red",
        "Blue",
        "Yellow",
        "Green",
        "Black",
        "Brown",
        "Purple",
        "Gray",
        "White",
        "Pink"
    };

    std::string colorToString(COLOR color)
    {
        return colorStrings[color];
    }
}
