#include "colors.h"
<<<<<<< HEAD
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
=======

namespace pokemon
{
	std::vector<std::string> colorStrings =
	{
		"red",
		"blue",
		"yellow",
		"green",
		"black",
		"brown",
		"purple",
		"gray",
		"white",
		"pink"
	};

	std::string nameOfColor(COLOR color)
	{
		return colorStrings[int(color)];
	}
}
>>>>>>> 4b849ed73c231e2f3b9ef5aa497d03e00ce58f9f
