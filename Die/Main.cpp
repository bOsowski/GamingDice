// Main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <vector>
#include "die.h"

using namespace std;

int main()
{
	cout << "How many sides do you want the die to have? >>";
	int choice;
	cin >> choice;
	Die die(choice);
	cout << "How many times should the die be thrown? >>";
	cin >> choice;
	cout<<endl;

	vector<int> throws = die.throwDie(choice);
	for (int i = 0; i < throws.size(); i++) {
		cout << "throw #" << i+1 << ", throw = "<< throws.at(i)<< endl;
	}
	cin.ignore();
	cin.ignore();
    return 0;
}

