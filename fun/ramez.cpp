#include <iostream>
using namespace std; 
int main(){
	
	int emps ;
	cout << "please enter the number of employee :";
	cin >> emps ;
	double long sum = 0, emp ;
	for (int i = 0 ; i < emps  ; ++ i){
		cout << "\nplease enter the selling sum of the employee number "<<i+1 <<":";
		cin >> emp ;
		double  tmp ;
          if(emp <= 100000)
			  tmp = (emp*3)/100;
		  else if (emp <= 200000)
			  tmp = (emp*5)/100;
		  else
			  tmp = (emp*7.0)/100;
		cout << "\nThe commission of the employee number "<< i+1 << " is "<< tmp; 
		sum += tmp ;
	}
	cout << "\nThe sum of the commission for all the employees is :" << sum << endl ;
}
