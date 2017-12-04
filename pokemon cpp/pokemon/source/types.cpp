#include "types.h"

namespace pokemon
{
	std::vector<std::string> typeStrings =
	{
		"Normal",
		"Fighting",
		"Flying",
		"Poison",
		"Ground",
		"Rock",
		"Bug",
		"Ghost",
		"Steel",
		"Fire",
		"Water",
		"Grass",
		"Electric",
		"Psychic",
		"Ice",
		"Dragon",
		"Dark",
		"Fairy",
		"None",
		"Curse Type"
	};

	std::string nameOfType(TYPE type)
	{
		return typeStrings[int(type)];
	}
}