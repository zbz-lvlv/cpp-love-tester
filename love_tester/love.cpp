#include <iostream>
#include <string>
#include <ctime>

#include "calculator.h"

int main(){

	Calculator calculator;

	while (true){

		std::cout << "Welcome to Love Tester 2019 version!" << std::endl;
		std::cout << "This version has been updated to include same-sex couples." << std::endl;
		std::cout << "We are in full support of LGBTQ+ rights." << std::endl;
		std::cout << "Enter q to exit." << std::endl;
		std::cout << std::endl;

		std::cout << "Enter the first person's name: ";
		std::string firstName;
		std::getline(std::cin, firstName);

		if (firstName == "q")
			break;

		std::cout << "Enter the second person's name: ";
		std::string secondName;
		std::getline(std::cin, secondName);

		int ftosLove = calculator.getLoveValue();
		int stofLove = calculator.getLoveValue();

		std::cout << firstName << " loves " << secondName << " by " << ftosLove << " percent." << std::endl;
		std::cout << secondName << " loves " << firstName << " by " << stofLove << " percent." << std::endl;
		std::cout << std::endl;

	}

}