#include <iostream>
#include <string>
// using namespace std; // if included then you don't have to do 'std::'

int		ft_strlen(std::string str) {
	int		i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_toLower(std::string str) {
	int		i = -1;
	while(str[++i]){
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = (str[i] - 'A') + 'a';
	}
}

int		ft_strcmp(std::string str1, std::string str2) {
	int		i = 0;
	int		len1 = ft_strlen(str1);
	int		len2 = ft_strlen(str2);

	if (len1 != len2)
		return (-1);
	while (i < len1 && str1[i] == str2[i])
		i++;
	if (i != len1 && i != len2)
		return (-1);
	return (1);
}

int		main() {
	std::string input;
	char exitStr[] = "exit";
	char addStr[] = "add";
	char searchStr[] = "search";
	std::cin >> input; //if whitespace detected, only takes everything before space

	ft_toLower(input);
	if (ft_strcmp(input, exitStr) > 0) {
		std::cout << exitStr << std::endl;
	}
	else if (ft_strcmp(input, addStr) > 0) {
		std::cout << addStr << std::endl;
	}
	else if (ft_strcmp(input, searchStr) > 0) {
		std::cout << searchStr << std::endl;
	}
	else {
		std::cout << "Please enter one of the following commands: 'ADD', 'SEARCH', 'EXIT'" << std::endl;
	}
	return (0);
}
