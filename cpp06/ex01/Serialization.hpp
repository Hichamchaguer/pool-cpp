/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:55:48 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/21 17:55:48 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef  SERIALIZATION_HPP
#define  SERIALIZATION_HPP


#include <iostream>
#include <stdint.h>

typedef struct Data{

    int i;

} Data;

class  Serializer
{
    private :
    
        Serializer();
        Serializer(const Serializer& s);
        Serializer& operator=(const Serializer& s);
        ~Serializer();

    public :

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif