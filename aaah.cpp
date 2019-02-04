#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>


//https://open.kattis.com/problems/conundrum
int main(int argc, const char* argv[]) {
	std::string line1;
	std::string line2;
	std::cin >> line1 >> line2;
	if (line1.length() < line2.length())
		std::cout << "no" << std::endl;
	else
		std::cout << "go" << std::endl;	
}	

