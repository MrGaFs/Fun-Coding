#include <bits/stdc++.h>
using namespace std;
#ifndef ANIMAL_H
#define ANIMAL_H
class Animal
{
	//this is protected to be future broof
protected:
	string name, color;
	int age;
	vector<string> actions;

public:
	// this is constructor

	Animal(string n, string c, int a, vector<string> ac)
	{
		name = n;
		color = c;
		age = a;
		actions = ac;
	}

	// this is geters functions

	string getName()
	{
		return name;
	}

	string getColor()
	{
		return color;
	}

	int getAge()
	{
		return age;
	}
	vector<string> getActions()
	{
		return actions;
	}
	string getType()
	{
		return "Animal";
	}

	// this is seters functions

	void setName(string n)
	{
		name = n;
	}
	void setColor(string c)
	{
		color = c;
	}
	void setAge(int a)
	{
		age = a;
	}
	void setActions(vector<string> str)
	{
		actions = str ; 
	}
	// get all the information
	void getAll()
	{
		cout << "Name : "<<name << endl  
		 << "color : "<<color << endl  
		 << "age : "<<age << endl  
		 << "actions : ";
		for(int i = 0 ; i < actions.size() ; ++i)
			cout << i + 1 << ' ' << actions[i] << endl;
	}
};

#endif //ANIMAL_H