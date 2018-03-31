#include <iostream>
//#include "pokemon.h"
#include "catchRates.h"

int main(int argc, char* argv[])
{
<<<<<<< HEAD
    pkm::CatchRate pikachu{ 25, "Pikachu", 190 };
=======
	pokemon::pokemon myPokemon("Pikachu", 25, "MOUSE", pokemon::stats(35, 55, 40, 50, 50, 90), std::vector<pokemon::TYPE>{ pokemon::TYPE::ELECTRIC }, std::vector<pokemon::ABILITY>{ pokemon::ABILITY::STATIC, pokemon::ABILITY::LIGHTNINGROD }, 0.4f, 6.0f, pokemon::COLOR::YELLOW);
	std::cout << myPokemon.getInfo() << std::endl;

    std::cin.get();
>>>>>>> 4b849ed73c231e2f3b9ef5aa497d03e00ce58f9f

    return 0;
}