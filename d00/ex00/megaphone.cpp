#include <iostream>

void	ft_toupper(char *str) {
	int	i = 0;
	while (str[i]) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] - 'a') + 'A';
		i++;
	}
}

int		main(int argc, char **argv) {
	char	*str;
	int		i;

	if (argc > 1) {
		i = 1;
		while (i < argc) {
			str = argv[i];
			ft_toupper(str);		
			std::cout << str;
			i++;
		}
	}
	else if (argc == 1) 
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << '\n';
	return 0;
}
