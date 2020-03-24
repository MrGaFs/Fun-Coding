#include <bits/stdc++.h>
#define _CRT_SECURE_NO_WARNINGS
#define pb push_back
#define Ceil(a, b) ((a) + (b)-1) / (b)
#define MrGAFs file();
#define rep(i, limits) for (int i = 0; i < (limits); ++i)
#define allr(v) ((v).rbegin()), ((v).rend())
#define all(v) ((v).begin()), ((v).end())
#define endl "\n"
#define sz(v) ((int)((v).size()))
#define rt(v) return cout << v, 0;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
const int oo = INT_MAX;
const ll OO = LLONG_MAX;
using namespace std;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1};
int dy[] = {1, 0, -1, 0, 1, -1, 1, -1};
int dx1[] = {-1, 1, 0, 0};
int dy1[] = {0, 0, -1, 1};

//classes
void file()
{
#ifndef ONLINE_JUDGE
    bool x = freopen("in.txt", "r", stdin);
    x = freopen("out.txt", "w", stdout);
#else
#endif
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
}
/******Functions*********/
int gcd(int a ,int b){
    if (b == 0) return a; 
       return (b , a%b);
}

/******Main Function*********/
int main(){
    //  MrGAFs
     int x, i , j;
     cin >> x;
      for (i = 1; i <= x ; ++ i){
            for(j = 0; j < x - i; ++ j )cout << " ";
            for (j = 1 ;j <2*i ; ++j )cout<< '*';
            cout << endl ;
      }
}
