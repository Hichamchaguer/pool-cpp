/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 00:39:19 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/08 02:46:05 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string replace_all(std::string str, const std::string& from, const std::string& to) {

    std::string result;
    long unsigned int pos = 0;
    long unsigned int lastPos = 0;

    if (from.empty())
        exit(1);
    while ((pos = str.find(from, lastPos)) != std::string::npos)
    {
      result += str.substr(lastPos, pos - lastPos);
      result += to;
      lastPos = pos + from.length();
    }
    result += str.substr(lastPos);
    return result;
}
