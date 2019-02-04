#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>


//https://open.kattis.com/problems/conundrum
int main(int argc, const char* argv[]) {
	//str represents the input
	std::string str;
	std::cin >> str;
	std::string::iterator iter;
	//name holds the string "PER"
	std::string name = "PER";
	std::string::iterator iter2 = name.begin();
	
	int count = 0;
	

	for(iter = str.begin(); iter != str.end(); ++iter) {
		if(toupper(*iter) != *iter2)
			++count;

		++iter2;
		if(iter2 == name.end())
			iter2 = name.begin();

	}
	std::cout << count;	
}	

