#pragma once
#include "types.h"
#include "abilities.h"
#include "stats.h"
#include "colors.h"
#include "eggGroups.h"
#include "experienceGroups.h"

<<<<<<< HEAD
namespace pkm
=======
#include <string>
#include <vector>

namespace pokemon
>>>>>>> 4b849ed73c231e2f3b9ef5aa497d03e00ce58f9f
{
    // pokemon class
    class Pokemon
    {

    public:
        // constructor (everything)
<<<<<<< HEAD
        Pokemon(char* name, unsigned int pokedexNumber, char* speciesName, Stats baseStats, std::vector<TYPEENUM> types, std::vector<ABILITY> abilities, float height, float weight, COLOR color, std::vector<EGGGROUP> eggGroups, EXPERIENCEGROUP experienceGroup);
=======
        pokemon(std::string name, unsigned int pokedexNumber, std::string pokedexClassification, stats baseStats, std::vector<TYPE> types, std::vector<ABILITY> abilities, float height, float weight, COLOR pokedexColor);
>>>>>>> 4b849ed73c231e2f3b9ef5aa497d03e00ce58f9f

        // getters
#pragma region getters

<<<<<<< HEAD
        std::string getName() const;
        unsigned int getPokedexNumber() const;
        std::string getSpeciesName() const;
        Stats getBaseStats() const;
        std::vector<TYPEENUM> getTypes() const;
        std::vector<ABILITY> getAbilities() const;
        float getHeight() const;
        float getWeight() const;
        COLOR getColor() const;
        std::vector<EGGGROUP> getEggGroups() const;
        EXPERIENCEGROUP getExperienceGroup() const;
=======
        std::string getName();
        unsigned int getPokedexNumber();
        std::string getPokedexClassification();
        stats getBaseStats();
        std::vector<TYPE> getTypes();
        std::vector<ABILITY> getAbilities();
        float getHeight();
        float getWeight();
        COLOR getPokedexColor();
>>>>>>> 4b849ed73c231e2f3b9ef5aa497d03e00ce58f9f

#pragma endregion

        // setters
#pragma region setters

        void setName(std::string& name);
        void setPokedexNumber(unsigned int pokedexNumber);
<<<<<<< HEAD
        void setSpeciesName(std::string& speciesName);
        void setBaseStats(Stats baseStats);
        void setTypes(std::vector<TYPEENUM> types);
=======
        void setpokedexClassification(std::string& pokedexClassification);
        void setBaseStats(stats baseStats);
        void setTypes(std::vector<TYPE> types);
>>>>>>> 4b849ed73c231e2f3b9ef5aa497d03e00ce58f9f
        void setAbilities(std::vector<ABILITY> abilities);
        void setHeight(float height);
        void setWeight(float weight);
        void setColor(COLOR color);
        void setEggGroups(std::vector<EGGGROUP> eggGroups);
        void setExperienceGroup(EXPERIENCEGROUP experienceGroup);

#pragma endregion

        // functions

        // consolidates pokemon info into a string and returns it
        std::string getInfo() const;

    private:

#pragma region variables

        std::string m_name;
        unsigned int m_pokedexNumber;
<<<<<<< HEAD
        std::string m_speciesName;
        Stats m_baseStats;
        std::vector<TYPEENUM> m_types;
        std::vector<ABILITY> m_abilities;
=======

        // pokedex classification
        std::string m_pokedexClassification;

        // base stats
        stats m_baseStats;

        // type(s)
        std::vector<TYPE> m_types;

        // ability(s)
        std::vector<ABILITY> m_abilities;

        // height / weight
>>>>>>> 4b849ed73c231e2f3b9ef5aa497d03e00ce58f9f
        float m_height;
        float m_weight;
        COLOR m_color;
        std::vector<EGGGROUP> m_eggGroups;
        EXPERIENCEGROUP m_experienceGroup;
        unsigned char m_catchRate;

#pragma endregion

    };
}
