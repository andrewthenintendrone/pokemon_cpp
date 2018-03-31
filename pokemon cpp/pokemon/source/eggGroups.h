#pragma once
#include <string>

namespace pkm
{
    // pokemon egg groups
    enum EGGGROUP
    {
        EGGROUP_MONSTER,
        EGGROUP_WATER1,
        EGGROUP_BUG,
        EGGROUP_FLYING,
        EGGROUP_FIELD,
        EGGROUP_FAIRY,
        EGGROUP_GRASS,
        EGGROUP_HUMANLIKE,
        EGGROUP_WATER3,
        EGGROUP_MINERAL,
        EGGROUP_AMORPHOUS,
        EGGROUP_WATER2,
        EGGROUP_DITTO,
        EGGROUP_DRAGON,
        EGGROUP_UNDISCOVERED
    };

    std::string eggGroupToString(EGGGROUP eggGroup);
}
