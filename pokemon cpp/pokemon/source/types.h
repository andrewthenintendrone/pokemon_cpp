#pragma once
#include <vector>
<<<<<<< HEAD
#include <string>
=======
>>>>>>> 4b849ed73c231e2f3b9ef5aa497d03e00ce58f9f

namespace pkm
{
<<<<<<< HEAD
    // enums
    enum TYPEENUM
    {
        TYPE_NORMAL,
        TYPE_FIGHTING,
        TYPE_FLYING,
        TYPE_POISON,
        TYPE_GROUND,
        TYPE_ROCK,
        TYPE_BUG,
        TYPE_GHOST,
        TYPE_STEEL,
        TYPE_FIRE,
        TYPE_WATER,
        TYPE_GRASS,
        TYPE_ELECTRIC,
        TYPE_PSYCHIC,
        TYPE_ICE,
        TYPE_DRAGON,
        TYPE_DARK,
        TYPE_FAIRY,
        TYPE_NONE,
        TYPE_CURSETYPE
    };

    // type matchup struct
    class TypeMatchup
    {
    public:

        TypeMatchup(TYPEENUM type, std::vector<TYPEENUM> weakTypes, std::vector<TYPEENUM> resistedTypes, std::vector<TYPEENUM> immuneTypes);

    private:

        TYPEENUM m_type;
        std::vector<TYPEENUM> m_weakTypes;
        std::vector<TYPEENUM> m_resistedTypes;
        std::vector<TYPEENUM> m_immuneTypes;
    };

    std::string typeToString(TYPEENUM type);
=======
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
>>>>>>> 4b849ed73c231e2f3b9ef5aa497d03e00ce58f9f
}
