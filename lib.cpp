#include "lib.hpp"

#include<iostream>
#include<vector>
#include<string>

void run() {
    std::vector<std::string> inputs;
	while(true) {
		std::string userInput;
		std::cout<<"Podaj string: " << std::endl; 
		std::cin >> userInput;
		std::cout << " Twoj string to <" << userInput << ">" << std::endl;
		if (userInput == "stop") {
			std::cout << " Koniec wpisywania" << std::endl;
			std::string resultString = "";
			for (const std::string& in : inputs) {
				if (in.size() > resultString.size()) {
					resultString = in;
				}
			}
			std::cout << "Najdluzszy string to <" << resultString << ">" << std::endl;
			return;
		}
		else {
			inputs.push_back(userInput);
		}
	}
}