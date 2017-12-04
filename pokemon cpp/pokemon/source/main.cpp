#include <iostream>
#include "pokemon.h"

int main(int argc, char* argv[])
{
	pokemon::pokemon myPokemon("Pikachu", 25, "MOUSE", pokemon::stats(35, 55, 40, 50, 50, 90), std::vector<pokemon::TYPE>{ pokemon::TYPE::ELECTRIC }, std::vector<pokemon::ABILITY>{ pokemon::ABILITY::STATIC, pokemon::ABILITY::LIGHTNINGROD }, 0.4f, 6.0f, pokemon::COLOR::YELLOW);
	std::cout << myPokemon.getInfo() << std::endl;

    std::cin.get();

    return 0;
}