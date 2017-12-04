#include "pokemon.h"

namespace pokemon
{
    pokemon::pokemon(std::string name, unsigned int pokedexNumber, std::string pokedexClassification, stats baseStats, std::list<TYPE> types, std::list<ABILITY> abilities, float height, float weight, COLOR pokedexColor)
    {
        m_name = name;
        m_pokedexNumber = pokedexNumber;
        m_pokedexClassification = pokedexClassification;
        m_baseStats = baseStats;
        m_types = types;
        m_abilities = abilities;
        m_height = height;
        m_weight = weight;
        m_pokedexColor = pokedexColor;
    }

#pragma region getters

    std::string pokemon::getName()
    {
        return m_name;
    }

    unsigned int pokemon::getPokedexNumber()
    {
        return m_pokedexNumber;
    }

    std::string pokemon::getPokedexClassification()
    {
        return m_pokedexClassification;
    }

    stats pokemon::getBaseStats()
    {
        return m_baseStats;
    }

    std::list<TYPE> pokemon::getTypes()
    {
        return m_types;
    }

    std::list<ABILITY> pokemon::getAbilities()
    {
        return m_abilities;
    }

    float pokemon::getHeight()
    {
        return m_height;
    }

    float pokemon::getWeight()
    {
        return m_weight;
    }

    COLOR pokemon::getPokedexColor()
    {
        return m_pokedexColor;
    }

#pragma endregion

#pragma region setters

    void pokemon::setName(std::string& name)
    {
        m_name = name;
    }

    void pokemon::setPokedexNumber(unsigned int pokedexNumber)
    {
        m_pokedexNumber = pokedexNumber;
    }

    void pokemon::setpokedexClassification(std::string& pokedexClassification)
    {
        m_pokedexClassification = pokedexClassification;
    }

    void pokemon::setBaseStats(stats baseStats)
    {
        m_baseStats = baseStats;
    }

    void pokemon::setTypes(std::list<TYPE> types)
    {
        m_types = types;
    }

    void pokemon::setAbilities(std::list<ABILITY> abilities)
    {
        m_abilities = abilities;
    }

    void pokemon::setHeight(float height)
    {
        m_height = height;
    }

    void pokemon::setWeight(float weight)
    {
        m_weight = weight;
    }

    void pokemon::setPokedexColor(COLOR pokedexColor)
    {
        m_pokedexColor = pokedexColor;
    }

#pragma endregion

    std::string pokemon::getInfo()
    {
        std::string info;

        info.append("Name: " + m_name + "\n");
        info.append("Pokedex Number: " + std::to_string(m_pokedexNumber) + "\n");
        info.append("Pokedex Classification: " + m_pokedexClassification + " POKEMON\n");
        info.append("Base Stats:\n\n");
        info.append("HP: " + std::to_string(m_baseStats.getHP()) + "\n");
        info.append("ATTACK: " + std::to_string(m_baseStats.getATTACK()) + "\n");
        info.append("DEFENSE: " + std::to_string(m_baseStats.getDEFENSE()) + "\n");
        info.append("SPECIAL ATTACK: " + std::to_string(m_baseStats.getSPECIALATTACK()) + "\n");
        info.append("SPECIAL DEFENSE: " + std::to_string(m_baseStats.getSPECIALDEFENSE()) + "\n");
        info.append("SPEED: " + std::to_string(m_baseStats.getSPEED()) + "\n");
    }

}
