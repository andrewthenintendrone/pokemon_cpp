#include <iostream>
#include "pokemon.h"

int main(int argc, char* argv[])
{
    pokemon::pokemon bulbasaur("Bulbasaur", 1, "Seed", pokemon::stats(45, 49, 49, 65, 65, 45), std::list<pokemon::TYPE>(pokemon::TYPE::GRASS, pokemon::TYPE::POISON), std::list<pokemon::ABILITY>(pokemon::ABILITY::OVERGROW, pokemon::ABILITY::CHLOROPHYLL), 0.7f, 6.9f, pokemon::COLOR::GREEN);
    std::cout << bulbasaur.getName() << "'s speed stat is " << bulbasaur.getBaseStats().getSPEED() << std::endl << std::endl;

    pokemon::pokemon arceus("Arceus", 493, "Alpha", pokemon::stats(120), std::list<pokemon::TYPE>(pokemon::TYPE::NORMAL), std::list<pokemon::ABILITY>(pokemon::ABILITY::MULTITYPE), 3.2f, 320.0f, pokemon::COLOR::WHITE);
    std::cout << arceus.getInfo();

    std::cin.get();

    return 0;
}