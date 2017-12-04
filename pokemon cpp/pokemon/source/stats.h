#pragma once

namespace pokemon
{
    // stores a collection of stats
    // can be used for lots of things
    class stats
    {
    private:

        // variables
        unsigned int m_hp;
        unsigned int m_attack;
        unsigned int m_defense;
        unsigned int m_specialAttack;
        unsigned int m_specialDefense;
        unsigned int m_speed;

    public:
        // default constructor
        stats() {};
        // constructor (individual stats)
        stats(unsigned int hp, unsigned int attack, unsigned int defense, unsigned int specialAttack, unsigned int specialDefense, unsigned int speed) : m_hp(hp), m_attack(attack), m_defense(defense), m_specialAttack(specialAttack), m_specialDefense(specialDefense), m_speed(speed) {};
        // constructor (all stats are the same)
        stats(unsigned int all) : m_hp(all), m_attack(all), m_defense(all), m_specialAttack(all), m_specialDefense(all), m_speed(all) {};

        // getters
        unsigned int getHP() { return m_hp; }
        unsigned int getATTACK() { return m_attack; }
        unsigned int getDEFENSE() { return m_defense; }
        unsigned int getSPECIALATTACK() { return m_specialAttack; }
        unsigned int getSPECIALDEFENSE() { return m_specialDefense; }
        unsigned int getSPEED() { return m_speed; }

        // setters
        void setHP(unsigned int hp) { m_hp = hp; }
        void setATTACK(unsigned int attack) { m_attack = attack; }
        void setDEFENSE(unsigned int defense) { m_defense = defense; }
        void setSPECIALATTACK(unsigned int specialAttack) { m_specialAttack = specialAttack; }
        void setSPECIALDEFENSE(unsigned int specialDefense) { m_specialDefense = specialDefense; }
        void setSPEED(unsigned int speed) { m_speed = speed; }
    };
}
