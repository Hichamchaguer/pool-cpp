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
    Data *data = new Data;

    data->i = 42;

    uintptr_t ptr = Serializer::serialize(data);

    std::cout << ptr << std::endl;

    Data *d = Serializer::deserialize(ptr);

    std::cout << d->i << std::endl;

    delete data;

    return 0;
}