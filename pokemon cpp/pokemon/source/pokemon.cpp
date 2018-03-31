#include "pokemon.h"
#include <string>

namespace pkm
{
<<<<<<< HEAD
    Pokemon::Pokemon(char* name, unsigned int pokedexNumber, char* speciesName, Stats baseStats, std::vector<TYPEENUM> types, std::vector<ABILITY> abilities, float height, float weight, COLOR color, std::vector<EGGGROUP> eggGroups, EXPERIENCEGROUP experienceGroup)
=======
    pokemon::pokemon(std::string name, unsigned int pokedexNumber, std::string pokedexClassification, stats baseStats, std::vector<TYPE> types, std::vector<ABILITY> abilities, float height, float weight, COLOR pokedexColor)
>>>>>>> 4b849ed73c231e2f3b9ef5aa497d03e00ce58f9f
    {
        m_name = name;
        m_pokedexNumber = pokedexNumber;
        m_speciesName = speciesName;
        m_baseStats = baseStats;
        m_types = types;
        m_abilities = abilities;
        m_height = height;
        m_weight = weight;
        m_color = color;
        m_eggGroups = eggGroups;
        m_experienceGroup = experienceGroup;
    }

#pragma region getters

    std::string Pokemon::getName() const
    {
        return m_name;
    }

    unsigned int Pokemon::getPokedexNumber() const
    {
        return m_pokedexNumber;
    }

    std::string Pokemon::getSpeciesName() const
    {
        return m_speciesName;
    }

    Stats Pokemon::getBaseStats() const
    {
        return m_baseStats;
    }

<<<<<<< HEAD
    std::vector<TYPEENUM> Pokemon::getTypes() const
=======
    std::vector<TYPE> pokemon::getTypes()
>>>>>>> 4b849ed73c231e2f3b9ef5aa497d03e00ce58f9f
    {
        return m_types;
    }

<<<<<<< HEAD
    std::vector<ABILITY> Pokemon::getAbilities() const
=======
    std::vector<ABILITY> pokemon::getAbilities()
>>>>>>> 4b849ed73c231e2f3b9ef5aa497d03e00ce58f9f
    {
        return m_abilities;
    }

    float Pokemon::getHeight() const
    {
        return m_height;
    }

    float Pokemon::getWeight() const
    {
        return m_weight;
    }

    COLOR Pokemon::getColor() const
    {
        return m_color;
    }

    std::vector<EGGGROUP> Pokemon::getEggGroups() const
    {
        return m_eggGroups;
    }

    EXPERIENCEGROUP Pokemon::getExperienceGroup() const
    {
        return m_experienceGroup;
    }

#pragma endregion

#pragma region setters

    void Pokemon::setName(std::string& name)
    {
        m_name = name;
    }

    void Pokemon::setPokedexNumber(unsigned int pokedexNumber)
    {
        m_pokedexNumber = pokedexNumber;
    }

    void Pokemon::setSpeciesName(std::string& speciesName)
    {
        m_speciesName = speciesName;
    }

    void Pokemon::setBaseStats(Stats baseStats)
    {
        m_baseStats = baseStats;
    }

<<<<<<< HEAD
    void Pokemon::setTypes(std::vector<TYPEENUM> types)
=======
    void pokemon::setTypes(std::vector<TYPE> types)
>>>>>>> 4b849ed73c231e2f3b9ef5aa497d03e00ce58f9f
    {
        m_types = types;
    }

<<<<<<< HEAD
    void Pokemon::setAbilities(std::vector<ABILITY> abilities)
=======
    void pokemon::setAbilities(std::vector<ABILITY> abilities)
>>>>>>> 4b849ed73c231e2f3b9ef5aa497d03e00ce58f9f
    {
        m_abilities = abilities;
    }

    void Pokemon::setHeight(float height)
    {
        m_height = height;
    }

    void Pokemon::setWeight(float weight)
    {
        m_weight = weight;
    }

    void Pokemon::setColor(COLOR color)
    {
        m_color = color;
    }

    void Pokemon::setEggGroups(std::vector<EGGGROUP> eggGroups)
    {
        m_eggGroups = eggGroups;
    }

    void Pokemon::setExperienceGroup(EXPERIENCEGROUP experienceGroup)
    {
        m_experienceGroup = experienceGroup;
    }

#pragma endregion

    std::string Pokemon::getInfo() const
    {
        std::string info;

        info.append("Name: " + m_name + "\n");
        info.append("Pokedex Number: " + std::to_string(m_pokedexNumber) + "\n");
<<<<<<< HEAD
        info.append("Species Name: " + m_speciesName + " POKEMON\n");

        // base stats
        info.append("Base Stats:\n\n");
        info.append("HP: " + std::to_string(m_baseStats.getHP()) + "\n");
        info.append("ATTACK: " + std::to_string(m_baseStats.getAttack()) + "\n");
        info.append("DEFENSE: " + std::to_string(m_baseStats.getDefense()) + "\n");
        info.append("SPECIAL ATTACK: " + std::to_string(m_baseStats.getSpecialAttack()) + "\n");
        info.append("SPECIAL DEFENSE: " + std::to_string(m_baseStats.getSpecialDefense()) + "\n");
        info.append("SPEED: " + std::to_string(m_baseStats.getSpeed()) + "\n");

        // type(s)
        info.append(m_types.size() > 1 ? "Types: " : "Type: ");
        for (unsigned int i = 0; i < m_types.size(); i++)
        {
            info.append(typeToString(m_types[i]));
            info.append(i < m_types.size() - 1 ? ", " : "\n");
        }

        // ability(s)
        info.append(m_abilities.size() > 1 ? "Abilities: " : "Ability: ");
        for (unsigned int i = 0; i < m_abilities.size(); i++)
        {
            info.append(abilityToString(m_abilities[i]));
            info.append(i < m_abilities.size() - 1 ? ", " : "\n");
        }

        info.append("Height: " + std::to_string(m_height) + "m\n");
        info.append("Weight: " + std::to_string(m_weight) + "kg\n");
        info.append("Pokedex color: " + colorToString(m_color) + "\n\n");

        return info;
=======
        info.append("Pokedex Classification: " + m_pokedexClassification + " POKEMON\n\n");

        info.append("Base Stats:\n");
        info.append("HP: " + std::to_string(m_baseStats.getHP()) + "\n");
        info.append("ATTACK: " + std::to_string(m_baseStats.getATTACK()) + "\n");
        info.append("DEFENSE: " + std::to_string(m_baseStats.getDEFENSE()) + "\n");
        info.append("SPECIAL ATTACK: " + std::to_string(m_baseStats.getSPECIALATTACK()) + "\n");
        info.append("SPECIAL DEFENSE: " + std::to_string(m_baseStats.getSPECIALDEFENSE()) + "\n");
        info.append("SPEED: " + std::to_string(m_baseStats.getSPEED()) + "\n\n");

		info.append(m_types.size() > 1 ? "Types: " : "Type: ");
		for (int i = 0; i < m_types.size(); i++)
		{
			info.append(nameOfType(m_types[i]));

			if (i < m_types.size() - 1)
			{
				info.append(" / ");
			}
			else
			{
				info.append("\n");
			}
		}

		info.append(m_abilities.size() > 1 ? "Abilities: " : "Ability: ");
		for (int i = 0; i < m_abilities.size(); i++)
		{
			info.append(nameOfAbility(m_abilities[i]));
			if (i < m_abilities.size() - 1)
			{
				info.append(" / ");
			}
			else
			{
				info.append("\n");
			}
		}

		info.append("Height: " + std::to_string(m_height) + "\n");
		info.append("Weight: " + std::to_string(m_weight) + "\n");

		info.append("Color: " + nameOfColor(m_pokedexColor) + "\n\n");

		return info;
>>>>>>> 4b849ed73c231e2f3b9ef5aa497d03e00ce58f9f
    }
}
