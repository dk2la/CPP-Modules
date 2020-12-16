/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Validation.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:41:46 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/16 19:17:27 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Validation.hpp"

void            Valid::setValue(char **av) {
    this->_search = av[2];
    this->_replace = av[3];
    this->_fileName = av[1];
}

std::string     Valid::replaceAll(std::string str) {
    size_t pos = 0;
	while ((pos = str.find(_search, pos)) != std::string::npos)
		str.replace(pos, _search.length(), _replace);
	return (str);
}

bool       Valid::validation(char **av) {
    setValue(av);
    if (!_ifs.is_open()) {
        std::cout << RED << "File is not open, try other file!" << RESET << std::endl;
        return (true);
    }
    _fileName += ".replace";
    _replaceOfstream.open(_fileName, std::ios::out);
    while (std::getline(_ifs, _inputLine)) {
        _result = replaceAll(_inputLine);
        _replaceOfstream << _result << std::endl;
    }
    std::cout << GREEN << "Words have been replaced!" << RESET << std::endl;
    return (false);
}

Valid::Valid(const std::string &file): _ifs(file) {
    std::cout << RED << "Constructor is working!" << RESET << std::endl;
}

Valid::~Valid() {
    std::cout << RED << "Destructor is working!" << RESET << std::endl;
}
