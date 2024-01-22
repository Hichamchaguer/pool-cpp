/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:24:41 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/21 18:24:41 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"


int main()
{
    Serializer s;
    Data *data = new Data;

    data->i = 42;

    uintptr_t ptr = s.serialize(data);

    std::cout << ptr << std::endl;

    Data *d = s.deserialize(ptr);

    std::cout << d->i << std::endl;

    return 0;
}