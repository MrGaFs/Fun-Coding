#include <bits/stdc++.h>
using namespace std ;
int main(){
  float a,b,c;
  cin >> a >> b >> c;
  float tmp = b*b - (4*a*c);
  if(tmp < 0)cout << "The soluotion is unavilable";
  else{
    tmp = sqrt(tmp);
 cout << "x1 = "  << ((-b)+tmp) / (2*a) << "\nx2 = " << ((-b)-tmp) / 2*a; 
}
}