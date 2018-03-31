#pragma once
#include <vector>
#include <string>

namespace pkm
{
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
}
