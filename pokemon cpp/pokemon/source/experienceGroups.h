#pragma once
#include <string>

namespace pkm
{
    enum EXPERIENCEGROUP
    {
        ERRATIC,
        FAST,
        MEDIUMFAST,
        MEDIUMSLOW,
        SLOW,
        FLUCTUATING
    };

    std::string experienceGroupToString(EXPERIENCEGROUP experienceGroup);

    unsigned int calculateExperienceForLevel(EXPERIENCEGROUP experienceGroup, unsigned int level);
}
