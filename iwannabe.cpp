#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <array>

//https://open.kattis.com/problems/aaah
int main(int argc, const char* argv[]) {
	int n, k;
	std::cin >> n >> k;
	std::vector<std::array<long int, 3> > monsters;
	long int a, d, h;
	while(std::cin >> a >> d >> h){
		long int stats[] = {a, d, h};
		monsters.insert(stats);
	}	
	

}	

