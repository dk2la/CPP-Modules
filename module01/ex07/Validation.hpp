/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Validation.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:41:49 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/16 19:22:29 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATION_HPP
# define VALIDATION_HPP

# include <iostream>
# include <fstream>
# include <string>


# define RED "\033[31m"
# define GREEN "\033[32m"
# define BLUE "\033[34m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"
# define GREY "\033[37m"
# define CYAN "\033[36m" 
# define RESET "\033[0m"

class Valid {
    public:
        Valid(const std::string &file);

        std::string replaceAll(std::string str);
        bool        validation(char **av);
        void        setValue(char **av);
        ~Valid();
    private:
        std::ifstream   _ifs;
        std::ofstream   _replaceOfstream;
        std::string     _inputLine;
        std::string     _result;
        std::string     _fileName;
        std::string     _search;
        std::string     _replace;
};

#endif
