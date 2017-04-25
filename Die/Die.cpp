#include "stdafx.h"
#include "Die.h"

//returns an int between 1 and the number of faces. 
vector<int> Die::throwDie(int& const numberOfThrows) {
	srand((int)(time(NULL)));
	vector<int> throwResults;
	while (numberOfThrows >= 1) {
		throwResults.push_back(rand() % numberOfFaces + 1);
		numberOfThrows--;
	}
	return throwResults;
}

//Overriding the default constructor.
Die::Die(const int & const numberOfFaces = 6)
{
	if (numberOfFaces > 1) {
		Die::numberOfFaces = numberOfFaces;
	}
	else {
		Die::numberOfFaces = 2;
	}
}
