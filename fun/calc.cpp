#include <iostream>
#include<math.h>
#define PI 3.14159265

using namespace std ;

double simple_math(){
	cout <<"- 1 | addition\n"; 
	cout <<"- 2 | Subtraction\n";
	cout <<"- 3 | division \n";
	cout <<"- 4 | multiplication\n";
	cout <<"- 5 | reminder\n";
	cout << "Please choose an operation : ";
	int op ;
	cin >> op ;
	double a , b; 
	cout << "please enter 2 numbers : " ; 
	cin >> a>> b ; 
	switch(op){
		case 1 :
			return a + b ;
			break;
		case 2 :
			return a - b ;
			break;
		case 3 :
			return a / b ;
			break;
		case 4 :
			return a * b ;
			break;
		case 5 :
			return (int(a) % int(b));
			break;
	}
	//to remove the warning 
	return 0 ;
}

long long fact(){
	long long sum =1, num ;
	cout << "Please enter the number : " ; 
	cin >> num ; 
	while(num){
           sum *= num ;
		num -- ; 
	}
	return sum ;
}

double root (){
	double base , number ;
	cout <<"Please enter the number : ";
	cin>> base ;
	cout << "please enter the root  : ";
	cin >> base;
	return (pow(number, (1/base)));
}

double power (){
	cout << "enter the base then the number : ";
	double base , number ;
	cin>> base >> number;
	return (pow(number,base));
}

double rep(){
	cout << "please enter a number : ";
	double x ; 
	cin >> x ;
	return 1/x;
}

double loga(){
	cout <<"- 1 | base 10 logarithm\n";
	cout <<"- 2 | natural base logarithm\n";
	cout <<"please enter operation : ";
	int op ;
	cin >> op ; 
	int num ; 
	cout <<"Please enter a number : ";
	cin >> num ;
	if(op == 1)return log(num);
	else return log10(num);

}

double tri(){
	double ans ;
	cout <<"- 1 | sin\n"; 
	cout <<"- 2 | cos\n";
	cout <<"- 3 | tan \n";
	cout <<"- 4 | csc\n";
	cout <<"- 5 | sec\n";
	cout <<"- 6 | cot\n";
	cout << "Please choose an operation : ";
	int op,op_1 ;
	cin >> op ;
	double t = 0 ;
	cout << "please enter θ : ";
	cin >> t ; 
	t=t * PI/180;
       op_1 =op%3; 	
	   if(op_1 == 1 )ans = sin(t);
	   else if(op_1 == 2 ) ans = cos(t);
	   else ans= tan(t);

	return (op <4 ? ans : 1/ans);	
}

int main (){
	//print the operations 
	cout <<" Hello to Calculator\n ";
	cout <<"================================================================================================================================\n";
	cout <<"-Key| operation\n";
	cout <<"- 1 | simple calculations like addition, subtractions, division, multiplication and reminder.\n"; 
	cout <<"- 2 | Factorials\n";
	cout <<"- 3 | Roots\n";
	cout <<"- 4 | Powers of numbers\n";
	cout <<"- 5 | Reciprocal of a number\n";
	cout <<"- 6 | Logarithm of number\n";
	cout <<"- 7 | Trigonometry problems (sin, cos, tan, sec, csc, cot)\n";
       // The operation input
	   int op ;
	   cout << "Please choose an operation : ";
	   cin >> op ;
	   // the ans variable
	   double ans ;
	   // case statement to choose a function
	   
	  switch(op){
		  case 1 :
	         ans = simple_math(); 
			 break;
		  case 2 :
	         ans = fact(); 
			 break;
		  case 3 :
	         ans = root(); 
			 break;
		  case 4 :
	         ans = power(); 
			 break;
		  case 5 :
	         ans = rep(); 
			 break;
		  case 6 :
	         ans = loga(); 
			 break;
		  case 7 :
	         ans = tri(); 
			 break;
}
cout <<"The answer is : " << ans << endl ; 
}
