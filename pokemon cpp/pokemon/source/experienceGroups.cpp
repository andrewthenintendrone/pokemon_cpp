#include "experienceGroups.h"
#include <vector>
#include <math.h>

namespace pkm
{
    std::vector<char*> experienceGroupStrings
    {
        "Erratic",
        "Fast",
        "Mediumfast",
        "Mediumslow",
        "Slow",
        "Fluctuating"
    };

    std::string experienceGroupToString(EXPERIENCEGROUP experienceGroup)
    {
        return experienceGroupStrings[experienceGroup];
    }

    unsigned int calculateExperienceForLevel(EXPERIENCEGROUP experienceGroup, unsigned int level)
    {
        switch (experienceGroup)
        {
        case ERRATIC:
            if (level <= 50)
            {
                return (unsigned int)(pow(level, 3.0f) * (100.0f - level) / 50.0f);
            }
            else if (level <= 68)
            {
                return (unsigned int)(pow(level, 3.0f) * (150.0f - level) / 100.0f);
            }
            else if (level <= 98)
            {
                return (unsigned int)(pow(level, 3.0f) * (unsigned int)((1911.0f - 10.0f * level) / 3.0f) / 500.0f);
            }
            else if (level <= 100)
            {
                return (unsigned int)(pow(level, 3.0f) * (160.0f - level) / 100.0f);
            }
            else
            {
                return 0;
            }
        case FAST:
            return (unsigned int)(4.0f * pow(level, 3.0f) / 5.0f);
        case MEDIUMFAST:
            return (unsigned int)(pow(level, 3.0f));
        case MEDIUMSLOW:
            return (unsigned int)(1.2f * pow(level, 3.0f) - 15.0f * pow(level, 2.0f) + 100.0f * level - 140.0f);
        case SLOW:
            return (unsigned int)(5.0f * pow(level, 3.0f) / 4.0f);
        case FLUCTUATING:
            if (level <= 15)
            {
                return (unsigned int)(pow(level, 3.0f) * (((unsigned int)((level + 1.0f) / 3.0f) + 24.0f) / 50.0f));
            }
            else if (level <= 36)
            {
                return (unsigned int)(pow(level, 3.0f) * ((level + 14.0f) / 50.0f));
            }
            else if (level <= 100)
            {
                return (unsigned int)(pow(level, 3.0f) * (((unsigned int)(level * 0.5f) + 32.0f) / 50.0f));
            }
            else
            {
                return 0;
            }
            break;
        }

        return 0;
    }
}


