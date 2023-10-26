#include <iostream>

int main()
{

    std::string str = "HI THIS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "string : " << str << std::endl 
    << "pointer string : "<<  *stringPTR << std::endl 
    << "ref string : " << stringREF << std::endl;  
    return 0;
}