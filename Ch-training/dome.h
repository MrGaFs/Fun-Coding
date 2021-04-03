#include "animal.h"
#include <bits/stdc++.h>
using namespace std;
#ifndef DOME_H
#define DOME_H
class Dome : public Animal
{
public:
	// to use the same constructor as the parent
	using Animal::Animal;
	string getType()
	{
		return "Domestication Animal";
	}
};
#endif //DOMW_H