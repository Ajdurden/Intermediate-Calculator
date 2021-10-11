/*
	Program: Intermediate Calculator
	Written by Anfernee Durden
	This program is a slightly more advanced version of a calculator. - AJD
	Last Modified: 10-11-21
*/

#include<iostream>


int main()
{
	char choice; 
	double a1, b1, c1;

	std::cout << "Please select the operator you would like to use!" << "\n";
	std::cout << "Enter 'A' for addition" << "\n";
	std::cout << "Enter 'S' for subtraction" << "\n";
	std::cout << "Enter 'M' for multiplication" << "\n";
	std::cout << "Enter 'D' for division" << "\n";
	std::cin >> choice;

	switch (choice)
	{
	case 'A': std::cout << "Please enter the first number!" << "\n";\
			  std::cin >> a1;
			  std::cout << "Please enter the second number!" << "\n"; \
			  std::cin >> b1;
			  c1 = a1 + b1;
			  std::cout << "The total value equals to " << c1 << "!" << "\n";
			  break;

	case 'S': std::cout << "Please enter the first number!" << "\n"; \
			  std::cin >> a1;
			  std::cout << "Please enter the second number!" << "\n"; \
			  std::cin >> b1;
			  c1 = a1 - b1;
			  std::cout << "The total value equals to " << c1 << "!" << "\n";
			  break;

	case 'M': std::cout << "Please enter the first number!" << "\n"; \
			  std::cin >> a1;
			  std::cout << "Please enter the second number!" << "\n"; \
			  std::cin >> b1;
			  c1 = a1 * b1;
			  std::cout << "The total value equals to " << c1 << "!" << "\n";
			  break;

	case 'D': std::cout << "Please enter the first number!" << "\n"; \
			  std::cin >> a1;
			  std::cout << "Please enter the second number!" << "\n"; \
			  std::cin >> b1;
			  c1 = a1 / b1;
			  std::cout << "The total value equals to " << c1 << "!" << "\n";
			  break;

	}


	return 0;
}
