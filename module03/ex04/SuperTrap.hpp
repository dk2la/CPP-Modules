#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap {
    public:
        SuperTrap();
        SuperTrap(const std::string& name);
        SuperTrap(const SuperTrap& superTrap);
        SuperTrap&  operator=(const SuperTrap& superTrap);
        ~SuperTrap();
    private:
        std::string _name;
};

#endif