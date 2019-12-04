/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 21:27:13 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/04 15:50:08 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
void countBrackets(std::string s){
	int open_b = 0;
	if ((open_b = s.find("(", open_b)) == 0 || open_b == std::string::npos)
		return;
	int close_b = s.rfind(")", open_b);
	if (close_b < open_b) return;
	std::string brackets = s.substr(open_b, close_b);
	// if (brackets.copy(s, close_b, open_b) == 0) {
	// 	std::cout << "Error:: Empty brackets." << std::endl;
	// 	exit(1);
	// }
	if (*brackets == '/' || *brackets == '%' || *brackets == '*') {
		std::cout << "Error::Invalid input." << std::endl;
	}
	Fixed
}

void bracketsCheck(std::string s) {
	int open_b = 0;
	int close_b = 0;

	for(int i = 0; s[i] != 0; i++) {
		if (!isdigit(s[i]) && !s[i] == '*' && !s[i] == '/' && !s[i] == '+' && !s[i] == '-' && !s[i] == '%' && !isspace(s[i])) {
			std::cout << "Error::Wrong string format." << std::endl;
			exit(0);
		}
		(s[i] == '(') ? open_b++ : 0;
		(s[i] == ')') ? close_b++ : 0;
	}
	if (open_b != close_b) {
		std::cout << "Error::Invalid input." << std::endl;
		exit(1);
	}
}

int main(int ac, char **av) {
	if (ac != 2){
		std::cout << "usage: ./eval_expr [expression]"; << std::endl;
		exit(1);
	}
	if (!av[1] || !*av[1]){
		std::cout << "Error::Empty expression cannot be solved." << std::endl;
		exit(1);
	}

	std::string s(av[1]);
	bracketsCheck(std::string s);
	countBrackets(std::string s);
}
