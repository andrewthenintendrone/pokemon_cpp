#pragma once
#include <vector>

namespace pokemon
{
	extern std::vector<std::string> typeStrings;

	enum TYPE
	{
		NORMAL,
		FIGHTING,
		FLYING,
		POISON,
		GROUND,
		ROCK,
		BUG,
		GHOST,
		STEEL,
		FIRE,
		WATER,
		GRASS,
		ELECTRIC,
		PSYCHIC,
		ICE,
		DRAGON,
		DARK,
		FAIRY,
		NONE,
		CURSETYPE
	};

	extern std::string nameOfType(TYPE type);
}
