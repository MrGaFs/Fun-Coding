#include <bits/stdc++.h>
#include "wild.h"
#include "dome.h"
#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
using namespace std;
vector<Dome> vDome;
vector<Wild> vWild;
void add()
{
	//some temp vars
	int type;
	string name, color;
	vector<string> actions;
	int age, nActions;
	//taking the input of the animal
	printf("%splease enter the type of the animal\n%s1: Domestication Animal\n2: Wild Animal\n",KGRN , KYEL);
	cin >> type;
	printf("%s", KGRN);
	printf("\nPlease enter the name of the animal : ");
	cin >> name;
	printf("\nPlease enter the color of the animal : ");
	cin >> color;
	printf("\nPlease enter the age of the animal : ");
	cin >> age;
	printf("\nPlease enter the quantitate of actions that the animal have : ");
	cin >> nActions;
	actions.resize(nActions);
	for (int i = 0; i < nActions; ++i)
	{
		printf("\nPlease enter the action number %d that the animal have : ", i + 1);
		cin >> actions[i];
	}

	if (type == 1)
	{
		Dome tmp(name, color, age, actions);
		vDome.push_back(tmp);
	}
	else
	{
		Wild tmp(name, color, age, actions);
		vWild.push_back(tmp);
	}
}
void ls()
{
	printf("Domestication Animal\n");
	for (int i = 0; i < vDome.size(); ++i)
		cout << i + 1 << " " << vDome[i].getName() << endl;
	printf("Wild Animal\n");
	for (int i = 0; i < vWild.size(); ++i)
		cout << i + 1 << " " << vWild[i].getName() << endl;
	int type, idx;
	printf("please enter the type of the animal that you wanna list\n1: Domestication Animal\n2: Wild Animal\n");
	cin >> type;
	printf("Enter the index of the animal");
	cin >> idx;
	if (type == 1)
		vDome[idx - 1].getAll();
	else
		vWild[idx - 1].getAll();
}
void change()
{
	int type, idx, att;
	printf("please enter the type of the animal that you wanna change\n1: Domestication Animal\n2: Wild Animal\n");
	cin >> type;
	printf("Enter the index of the animal");
	cin >> idx;
	printf("please choose the value to change\n1: Name\n2: Color\n3: Age\n4: Actions");
	cin >> att;
	idx--;
	string str;
	int n;
	if (type == 1)
		switch (att)
		{
		case 1:
			printf("Enter the new name: ");
			cin >> str;
			vDome[idx].setName(str);
			break;
		case 2:
			printf("Enter the new color: ");
			cin >> str;
			vDome[idx].setColor(str);
			break;
		case 3:
			printf("Enter the new age: ");
			cin >> str;
			vDome[idx].setAge(n);
			break;
		case 4:
			printf("Enter the new actions quantitate: ");
			cin >> n;
			vector<string> tmp(n);
			for (int i = 0; i < n; ++i)
			{
				printf("Enter the action number %d: ", i + 1);
				cin >> tmp[i];
			}
			vDome[idx].setActions(tmp);

			break;
		}
	else if (type == 2)
		switch (att)
		{
		case 1:
			printf("Enter the new name: ");
			cin >> str;
			vWild[idx].setName(str);
			break;
		case 2:
			printf("Enter the new color: ");
			cin >> str;
			vWild[idx].setColor(str);
			break;
		case 3:
			printf("Enter the new age: ");
			cin >> str;
			vWild[idx].setAge(n);
			break;
		case 4:
			printf("Enter the new actions quantitate: ");
			cin >> n;
			vector<string> tmp(n);
			for (int i = 0; i < n; ++i)
			{
				printf("Enter the action number %d: ", i + 1);
				cin >> tmp[i];
			}
			vWild[idx].setActions(tmp);

			break;
		}

}
int main()
{
	int op;
	while (1)
	{
		printf("%sEnter the number of the attribute\n" , KBLU);
		printf("%s1: add an animal\n2: list the animals\n3: change animal's data\n4: exit the program\n" , KMAG);
		cin >> op ; 
		switch (op)
		{
		case 1:
			add();
			break;
		case 2:
			ls();
			break;
		case 3:
			change();
			break;
		case 4:
			return 0;
		}
	}
}