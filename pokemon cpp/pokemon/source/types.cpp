#include "types.h"
#include <vector>

namespace pkm
{
    TypeMatchup::TypeMatchup(TYPEENUM type, std::vector<TYPEENUM> weakTypes, std::vector<TYPEENUM> resistedTypes, std::vector<TYPEENUM> immuneTypes)
    {
        m_type = type;
        m_weakTypes = weakTypes;
        m_resistedTypes = resistedTypes;
        m_immuneTypes = immuneTypes;
    }

    std::vector<char*> typeStrings { "Normal", "Fighting", "Flying", "Poison", "Ground", "Rock", "Bug", "Ghost", "Steel", "Fire", "Water", "Grass", "Electric", "Psychic", "Ice", "Dragon", "Dark", "Fairy", "None", "Cursetype" };

    std::string typeToString(TYPEENUM type)
    {
        return typeStrings[type];
    }

    TypeMatchup normalType
    (
        TYPE_NORMAL,
        std::vector<TYPEENUM>{},
        std::vector<TYPEENUM>{ TYPE_ROCK, TYPE_STEEL },
        std::vector<TYPEENUM>{ TYPE_GHOST }
    );

    TypeMatchup fireType
    (
        TYPE_FIRE,
        std::vector<TYPEENUM>{ TYPE_GRASS, TYPE_ICE, TYPE_BUG, TYPE_STEEL },
        std::vector<TYPEENUM>{ TYPE_FIRE, TYPE_WATER, TYPE_ROCK, TYPE_DRAGON },
        std::vector<TYPEENUM>{ }
    );

    TypeMatchup waterType
    (
        TYPE_WATER,
        std::vector<TYPEENUM>{ TYPE_FIRE, TYPE_GROUND, TYPE_ROCK },
        std::vector<TYPEENUM>{ TYPE_WATER, TYPE_GRASS, TYPE_DRAGON },
        std::vector<TYPEENUM>{ }
    );

    TypeMatchup electricType
    (
        TYPE_ELECTRIC,
        std::vector<TYPEENUM>{ TYPE_WATER, TYPE_FLYING },
        std::vector<TYPEENUM>{ TYPE_ELECTRIC, TYPE_GRASS, TYPE_DRAGON },
        std::vector<TYPEENUM>{ TYPE_GROUND }
    );

    TypeMatchup grassType
    (
        TYPE_GRASS,
        std::vector<TYPEENUM>{ TYPE_WATER, TYPE_GROUND, TYPE_ROCK },
        std::vector<TYPEENUM>{ TYPE_FIRE, TYPE_GRASS, TYPE_POISON, TYPE_FLYING, TYPE_BUG, TYPE_DRAGON, TYPE_STEEL },
        std::vector<TYPEENUM>{ }
    );

    TypeMatchup iceType
    (
        TYPE_ICE,
        std::vector<TYPEENUM>{ TYPE_GRASS, TYPE_GROUND, TYPE_FLYING, TYPE_DRAGON },
        std::vector<TYPEENUM>{ TYPE_FIRE, TYPE_WATER, TYPE_ICE, TYPE_STEEL },
        std::vector<TYPEENUM>{ }
    );

    TypeMatchup fightingType
    (
        TYPE_FIGHTING,
        std::vector<TYPEENUM>{ TYPE_NORMAL, TYPE_ICE, TYPE_ROCK, TYPE_DARK, TYPE_STEEL },
        std::vector<TYPEENUM>{ TYPE_POISON, TYPE_FLYING, TYPE_PSYCHIC, TYPE_BUG, TYPE_FAIRY },
        std::vector<TYPEENUM>{ TYPE_GHOST }
    );

    TypeMatchup poisonType
    {
        TYPE_POISON,
        std::vector<TYPEENUM>{ TYPE_GRASS, TYPE_FAIRY },
        std::vector<TYPEENUM>{ TYPE_POISON, TYPE_GROUND, TYPE_ROCK, TYPE_GHOST },
        std::vector<TYPEENUM>{ TYPE_STEEL }
    };

    TypeMatchup groundType
    (
        TYPE_GROUND,
        std::vector<TYPEENUM>{ TYPE_FIRE, TYPE_ELECTRIC, TYPE_POISON, TYPE_ROCK, TYPE_STEEL },
        std::vector<TYPEENUM>{ TYPE_GRASS, TYPE_BUG },
        std::vector<TYPEENUM>{ TYPE_FLYING }
    );

    TypeMatchup flyingType
    (
        TYPE_FLYING,
        std::vector<TYPEENUM>{ TYPE_GRASS, TYPE_FIGHTING, TYPE_BUG },
        std::vector<TYPEENUM>{ TYPE_ELECTRIC, TYPE_ROCK, TYPE_STEEL },
        std::vector<TYPEENUM>{ }
    );

    TypeMatchup psychicType
    (
        TYPE_PSYCHIC,
        std::vector<TYPEENUM>{ TYPE_FIGHTING, TYPE_POISON },
        std::vector<TYPEENUM>{ TYPE_PSYCHIC, TYPE_STEEL },
        std::vector<TYPEENUM>{ TYPE_DARK }
    );

    TypeMatchup bugType
    (
        TYPE_BUG,
        std::vector<TYPEENUM>{ TYPE_GRASS, TYPE_PSYCHIC, TYPE_DARK },
        std::vector<TYPEENUM>{ TYPE_FIRE, TYPE_FIGHTING, TYPE_POISON, TYPE_FLYING, TYPE_GHOST, TYPE_STEEL, TYPE_FAIRY },
        std::vector<TYPEENUM>{ }
    );

    TypeMatchup rockType
    (
        TYPE_ROCK,
        std::vector<TYPEENUM>{ TYPE_FIRE, TYPE_ICE, TYPE_FLYING, TYPE_BUG },
        std::vector<TYPEENUM>{ TYPE_FIGHTING, TYPE_GROUND, TYPE_STEEL },
        std::vector<TYPEENUM>{ }
    );

    TypeMatchup ghostType
    (
        TYPE_GHOST,
        std::vector<TYPEENUM>{ TYPE_PSYCHIC, TYPE_GHOST },
        std::vector<TYPEENUM>{ TYPE_DARK },
        std::vector<TYPEENUM>{ TYPE_NORMAL }
    );

    TypeMatchup dragonType
    (
        TYPE_DRAGON,
        std::vector<TYPEENUM>{ TYPE_DRAGON },
        std::vector<TYPEENUM>{ TYPE_STEEL },
        std::vector<TYPEENUM>{ TYPE_FAIRY }
    );

    TypeMatchup darkType
    (
        TYPE_DARK,
        std::vector<TYPEENUM>{ TYPE_PSYCHIC, TYPE_GHOST },
        std::vector<TYPEENUM>{ TYPE_FIGHTING, TYPE_DARK, TYPE_FAIRY },
        std::vector<TYPEENUM>{ }
    );

    TypeMatchup steelType
    (
        TYPE_STEEL,
        std::vector<TYPEENUM>{ TYPE_ICE, TYPE_ROCK, TYPE_FAIRY },
        std::vector<TYPEENUM>{ TYPE_FIRE, TYPE_WATER, TYPE_ELECTRIC, TYPE_STEEL },
        std::vector<TYPEENUM>{ }
    );

    TypeMatchup fairyType
    (
        TYPE_FAIRY,
        std::vector<TYPEENUM>{ TYPE_FIGHTING, TYPE_DRAGON, TYPE_DARK },
        std::vector<TYPEENUM>{ TYPE_FIRE, TYPE_POISON, TYPE_STEEL },
        std::vector<TYPEENUM>{ }
    );

    std::vector<TypeMatchup*> typeMatchups = { &normalType, &fireType, &waterType, &electricType, &grassType, &iceType, &fightingType, &poisonType, &groundType, &flyingType, &psychicType, &bugType, &rockType, &darkType, &dragonType, &darkType, &steelType, &fairyType };
}
