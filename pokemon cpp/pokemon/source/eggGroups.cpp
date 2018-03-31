#include "eggGroups.h"
#include <vector>

namespace pkm
{
    std::vector<char*> eggGroupStrings
    {
        "Monster",
        "Water1",
        "Bug",
        "Flying",
        "Field",
        "Fairy",
        "Grass",
        "Humanlike",
        "Water3",
        "Mineral",
        "Amorphous",
        "Water2",
        "Ditto",
        "Dragon",
        "Undiscovered"
    };

    std::string pkm::eggGroupToString(EGGGROUP eggGroup)
    {
        return eggGroupStrings[eggGroup];
    }
}
