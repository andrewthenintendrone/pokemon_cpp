#pragma once
#include <string>

namespace pkm
{
    struct CatchRate
    {
        unsigned int pokedexNumber;
        std::string pokemonName;
        unsigned char catchRate;
    };

    float calculateCatchRate(CatchRate catchRate)
    {

    }
}