#include "phonebook.hpp"

std::string		value[11] = {
	"First name",
	"Last name",
	"Nickname",
	"Login",
	"Postal address",
	"Email address",
	"Phone number",
	"Birthday date",
	"Favorite meal",
	"Underwear color",
	"Darkest secret"
};

int		ft_add(void)
{
	return (1);
}

int		ft_search(void)
{
	return (1);
}

int		main()
{
	int			status;
	std::string	line;

	status = 1;
	while (status)
	{
		std::cout << CYAN << "Write your command(ADD, SEARCH, EXIT)!" << RESET << std::endl;
		std::getline(std::cin, line);
		if (line == "ADD")
		{	
			if (!(ft_add()))
			{std::cout << RED << "Something wrong happend!" << RESET << std::endl;
				break ;}
		}
		else if (line == "SEARCH")
			ft_search();
		else if (line == "EXIT")
			status = 0;
		else
			std::cout << RED << "Wrong command, please try again!" << RESET << std::endl;
	}
	return (0);
}