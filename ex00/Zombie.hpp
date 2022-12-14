#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <iostream>

class Zombie {
    public:
        void announce( void );
        Zombie(std::string name);
        ~Zombie(void);

    private:
        std::string name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif