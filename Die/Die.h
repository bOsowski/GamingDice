//making sure the libraries are included only once.
#ifndef ADD_H
#define ADD_H


#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;
class Die {
private:
	int numberOfFaces = 6;

public:
	vector<int> throwDie(int& const numberOfThrow);
	Die(const int& const numberOfFaces = 6);
};
#endif