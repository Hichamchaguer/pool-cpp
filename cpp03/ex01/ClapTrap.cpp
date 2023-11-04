ClapTrap::ClapTrap()
{ 
    std::cout << "default constractor called " << std::endl;
}

ClapTrap::ClapTrap(std::string const& name) : Name(name), Points(10), Pts_Energy(10), Attack(0) 
{ 
    std::cout << "constructor called " << std::endl;
}

std::string ClapTrap::get_ClapTrap()
{
    return (this->Name);
}

ClapTrap& ClapTrap::operator=(ClapTrap &clapTrap) 
{ 
    this->Name = clapTrap.get_ClapTrap();
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destractor called " << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " <<this->Name<< " attacks " <<target <<" , causing " << "points of damage!" << std::endl;       
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " <<this->Name<< " has " << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " <<this->Name<< " repaire " << amount << std::endl;
}

std::ostream& operator<<(std::ostream &o, ClapTrap &clap)
{
    o << clap.get_ClapTrap();
    return o;
}