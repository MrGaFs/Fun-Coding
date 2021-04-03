#include "animal.h"
#include <bits/stdc++.h>
using namespace std;
#ifndef WILD_H
#define WILD_H
class Wild : public Animal
{
public:
	// to use the same constructor as the parent
	using Animal::Animal;
	string getType()
	{
		return "Wild Animal";
	}
};
#endif //WILD_H