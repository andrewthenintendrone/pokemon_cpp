#pragma once
#include "types.h"
#include "abilities.h"
#include "stats.h"
#include "colors.h"

#include <string>
#include <vector>

namespace pokemon
{
    // pokemon class
    class pokemon
    {

    public:
        // constructor (everything)
        pokemon(std::string name, unsigned int pokedexNumber, std::string pokedexClassification, stats baseStats, std::vector<TYPE> types, std::vector<ABILITY> abilities, float height, float weight, COLOR pokedexColor);

        // getters
#pragma region getters

        std::string getName();
        unsigned int getPokedexNumber();
        std::string getPokedexClassification();
        stats getBaseStats();
        std::vector<TYPE> getTypes();
        std::vector<ABILITY> getAbilities();
        float getHeight();
        float getWeight();
        COLOR getPokedexColor();

#pragma endregion

        // setters
#pragma region setters

        void setName(std::string& name);
        void setPokedexNumber(unsigned int pokedexNumber);
        void setpokedexClassification(std::string& pokedexClassification);
        void setBaseStats(stats baseStats);
        void setTypes(std::vector<TYPE> types);
        void setAbilities(std::vector<ABILITY> abilities);
        void setHeight(float height);
        void setWeight(float weight);
        void setPokedexColor(COLOR pokedexColor);

#pragma endregion

        // functions

        // consolidates pokemon info into a string and returns it
        std::string getInfo();

    private:

#pragma region variables

        // english name of the pokemon
        std::string m_name;

        // number in pokedex
        unsigned int m_pokedexNumber;

        // pokedex classification
        std::string m_pokedexClassification;

        // base stats
        stats m_baseStats;

        // type(s)
        std::vector<TYPE> m_types;

        // ability(s)
        std::vector<ABILITY> m_abilities;

        // height / weight
        float m_height;
        float m_weight;

        // pokedex color
        COLOR m_pokedexColor;

#pragma endregion

    };
}
