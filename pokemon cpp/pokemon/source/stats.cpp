#include "stats.h"

namespace pkm
{

#pragma region getters

    unsigned int Stats::getHP() const
    {
        return m_hp;
    }

    unsigned int Stats::getAttack() const
    {
        return m_attack;
    }

    unsigned int Stats::getDefense() const
    {
        return m_defense;
    }

    unsigned int Stats::getSpecialAttack() const
    {
        return m_specialAttack;
    }

    unsigned int Stats::getSpecialDefense() const
    {
        return m_specialDefense;
    }

    unsigned int Stats::getSpeed() const
    {
        return m_speed;
    }

#pragma endregion

#pragma region setters

    void Stats::setHP(unsigned int hp)
    {
        m_hp = hp;
    }

    void Stats::setAttack(unsigned int attack)
    {
        m_attack = attack;
    }

    void Stats::setDefense(unsigned int defense)
    {
        m_defense = defense;
    }

    void Stats::setSpecialAttack(unsigned int specialAttack)
    {
        m_specialAttack = specialAttack;
    }

    void Stats::setSpecialDefense(unsigned int specialDefense)
    {
        m_specialDefense = specialDefense;
    }

    void Stats::setSpeed(unsigned int speed)
    {
        m_speed = speed;
    }

    void Stats::setAll(unsigned int hp, unsigned int attack, unsigned int defense, unsigned int specialAttack, unsigned int specialDefense, unsigned int speed)
    {
        m_hp = hp;
        m_attack = attack;
        m_defense = defense;
        m_specialAttack = specialAttack;
        m_specialDefense = specialDefense;
        m_speed = speed;
    }

#pragma endregion

}