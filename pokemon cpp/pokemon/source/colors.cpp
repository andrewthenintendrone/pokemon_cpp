#include "colors.h"

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
