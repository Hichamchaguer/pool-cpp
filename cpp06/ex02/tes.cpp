/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tes.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:26:06 by hchaguer          #+#    #+#             */
/*   Updated: 2024/01/22 22:02:00 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <iostream>

// CPP program to demonstrate working of 
// reinterpret_cast
#include <iostream>
using namespace std;

int main()
{
	int* p = new int(97);
	char* ch = reinterpret_cast<char*>(p);
	cout << *p << endl;
	cout << *ch << endl;
	cout << p << endl;
	cout << ch << endl;
	return 0;
}
