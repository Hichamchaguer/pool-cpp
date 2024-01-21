#ifndef  SERIALIZER_HPP
#define  SERIALIZER_HPP


#include <iostream>


#ifndef  Serializer 
{
    public :
        Serializer();
        Serializer(const Serializer& s);
        Serializer& operator=(const Serializer& s);
        ~Serializer();

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif