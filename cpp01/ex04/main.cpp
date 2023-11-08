/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <hchaguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:47:15 by hchaguer          #+#    #+#             */
/*   Updated: 2023/11/08 02:34:27 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: ./program filename s1 s2" << std::endl;
        return 1;
    }

    std::ifstream inputFile(argv[1]);
    std::ofstream outputFile((std::string(argv[1]) + ".replace").c_str());

    if (!inputFile.is_open() || !outputFile.is_open()) {
        std::cerr << "Error opening files!" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        outputFile << replace_all(line, argv[2], argv[3]) << std::endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
