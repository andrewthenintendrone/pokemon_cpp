#pragma once
#include "types.h"
#include "abilities.h"
#include "stats.h"
#include "colors.h"
#include "eggGroups.h"
#include "experienceGroups.h"

namespace pkm
{
    // pokemon class
    class Pokemon
    {

    public:
        // constructor (everything)
        Pokemon(char* name, unsigned int pokedexNumber, char* speciesName, Stats baseStats, std::vector<TYPEENUM> types, std::vector<ABILITY> abilities, float height, float weight, COLOR color, std::vector<EGGGROUP> eggGroups, EXPERIENCEGROUP experienceGroup);

        // getters
#pragma region getters

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

#pragma endregion

        // setters
#pragma region setters

        void setName(std::string& name);
        void setPokedexNumber(unsigned int pokedexNumber);
        void setSpeciesName(std::string& speciesName);
        void setBaseStats(Stats baseStats);
        void setTypes(std::vector<TYPEENUM> types);
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
        std::string m_speciesName;
        Stats m_baseStats;
        std::vector<TYPEENUM> m_types;
        std::vector<ABILITY> m_abilities;
        float m_height;
        float m_weight;
        COLOR m_color;
        std::vector<EGGGROUP> m_eggGroups;
        EXPERIENCEGROUP m_experienceGroup;
        unsigned char m_catchRate;

#pragma endregion

    };
}
