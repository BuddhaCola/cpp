#include "easyfind.hpp"
#include <iostream>
#include <deque>
#include <vector>
#include <iterator>

int main () {
	//experiment #1
	srand(time(NULL));
	std::vector<int> wow;
	int needle;
	for (size_t i = 0; i < 10; i++)
		wow.push_back(rand());
	for (size_t i = 0; i < wow.size(); i++)
		std::cout << "|" << i << "|" << wow[i] << std::endl;
	
	size_t	lucky = rand() % 10;
	needle = wow[lucky];
	std::cout << "lucky number: |" << lucky << "|" << needle << std::endl;
	std::vector<int>::iterator lol(easyfind(wow, needle));
	std::cout << *lol << std::endl << std::endl;

	//experiment #2
	try {
		easyfind(wow, needle + 2);
	}
	catch (std::exception &so) {
		std::cout << so.what() << std::endl << std::endl;
	}

	//experiment #3
	std::string santa = "🎅";
	std::deque<std::string> str;
	str.push_back(santa);
	str.push_front("👨‍🚀");
	str.push_front("🧟‍♀️");
	str.push_back("👨‍✈️");
	str.push_back("🦸‍♀️");
	std::deque<std::string>::iterator findsanta(easyfind(str, santa));
	std::cout << "We found " << *findsanta << "!" << std::endl;	
	return (0);
}