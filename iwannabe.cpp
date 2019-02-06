#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <algorithm>

//https://open.kattis.com/problems/iwannabe
//I WISH I DID THIS IN PYTHONNNNNNNNNNNN
//-Matt going crazy

//Creates a structure for the monster
struct Monster {
	long attack;
	long defense;
	long health;
};

//Sorting methods
bool compareByAttack(const Monster &a, const Monster &b){
	return a.attack < b.attack;
}

//Sorting 
bool compareByDefense(const Monster &a, const Monster &b){
	return a.attack < b.attack;
}

bool compareByHealth(const Monster &a, const Monster &b){
	return a.attack < b.attack;
}

//Main method
int main(int argc, const char* argv[]) {
	//Sets up the values N and K
	int n, k;
	std::cin >> n >> k;
	
	//Creates a vector for the monsters given 
	long int a, d, h;
	std::vector<Monster*> monsters;
	for(int i = 0; i < n; i++) {
		std::cin >> a >> d >> h;
		Monster *temp;
		temp->attack = a;
		temp->defense = d;
		temp->health = h;
		monsters.push_back(temp);
	}	
		
	//Creates a vector for potential monster candidates. Duplicates will be deleted at the end.
	std::vector<Monster*> candidates;

	//Creates a vector for the top K attack monsters
	std::sort(monsters.begin(), monsters.end(), compareByAttack);
	for(int i = 0; i < k; i++)
		candidates.push_back(monsters.at(i));

	//Create a vector for the top K defense monsters
	std::sort(monsters.begin(), monsters.end(), compareByDefense);
	for(int i = 0; i < k; i++)
		candidates.push_back(monsters.at(i));

	//Create a vector for the top K health monsters
	std::sort(monsters.begin(), monsters.end(), compareByHealth);
	for(int i = 0; i < k; i++)
		candidates.push_back(monsters.at(i));

	//Prone duplicates
		

}	

