/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:55:45 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/21 18:38:49 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serializer::Serializer() {   }

Serializer::Serializer(const Serializer& s)
{
    *this = s;
}

Serializer& Serializer::operator=(const Serializer& s)
{
    (void)s;
    return *this;
}

Serializer::~Serializer() {  }

uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t uni = reinterpret_cast<uintptr_t>(ptr);
    return uni;
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data *data = reinterpret_cast<Data*>(raw);
    return data;
}