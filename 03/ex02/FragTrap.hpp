#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap
	: public ClapTrap
{
public:
    FragTrap();
    ~FragTrap();
	FragTrap(const std::string Name);
	FragTrap(const FragTrap& other);
	void highFivesGuys(void);
private:
};

#endif