#pragma once

namespace pkm
{
    // stores a collection of stats
    // can be used for lots of things
    class Stats
    {

    public:
        // default constructor
        Stats() {};
        // constructor (individual stats)
        Stats(unsigned int hp, unsigned int attack, unsigned int defense, unsigned int specialAttack, unsigned int specialDefense, unsigned int speed) : m_hp(hp), m_attack(attack), m_defense(defense), m_specialAttack(specialAttack), m_specialDefense(specialDefense), m_speed(speed) {};
        // constructor (all stats are the same)
        Stats(unsigned int all) : m_hp(all), m_attack(all), m_defense(all), m_specialAttack(all), m_specialDefense(all), m_speed(all) {};

        // getters
        unsigned int getHP() const;
        unsigned int getAttack() const;
        unsigned int getDefense() const;
        unsigned int getSpecialAttack() const;
        unsigned int getSpecialDefense() const;
        unsigned int getSpeed() const;

        // setters
        void setHP(unsigned int hp);
        void setAttack(unsigned int attack);
        void setDefense(unsigned int defense);
        void setSpecialAttack(unsigned int specialAttack);
        void setSpecialDefense(unsigned int specialDefense);
        void setSpeed(unsigned int speed);
        void setAll(unsigned int hp, unsigned int attack, unsigned int defense, unsigned int specialAttack, unsigned int specialDefense, unsigned int speed);

    private:

        // variables
        unsigned int m_hp;
        unsigned int m_attack;
        unsigned int m_defense;
        unsigned int m_specialAttack;
        unsigned int m_specialDefense;
        unsigned int m_speed;
    };
}
