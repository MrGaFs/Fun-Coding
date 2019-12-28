#include<bits/stdc++.h>
#define _CRT_SECURE_NO_WARNINGS
#define pb push_back
#define Ceil(a,b)              ((a)+(b)-1)/(b)
#define MrGAFs                 file();
#define rep(i,limits)          for(int i = 0;i<(limits);++i)
#define allr(v)                ((v).rbegin()), ((v).rend())
#define all(v)                 ((v).begin()), ((v).end())
#define endl                   "\n"
#define sz(v)	               ((int)((v).size()))
#define rt(v)                  return cout<<v,0;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
const int oo = INT_MAX;
const ll OO = LLONG_MAX;
using namespace std;
int dx[] = { 0, 1, 0, -1, 1, 1, -1, -1 };
int dy[] = { 1, 0, -1, 0, 1, -1, 1, -1 };
int dx1[] = { -1, 1, 0, 0 };
int dy1[] = { 0, 0, -1, 1 };

	//classes
        void file (){
      #ifndef ONLINE_JUDGE 
        bool x = freopen ("in.txt", "r", stdin);
        x = freopen ("out.txt", "w", stdout);
      #else
#endif
  ios_base::sync_with_stdio (false);
  cout.tie (NULL);
  cin.tie (NULL);
}

/******Functions*********/
    
int path[1001][1001] , step[1001][1001][3];
int x, y, num, ans, ba, bb;
void dfs(int a, int b, int dp, int cmd, int la, int lb) {
    if(path[a][b] <= dp)
        return ;
    path[a][b] = dp, step[a][b][0] = cmd;
    step[a][b][1] = la, step[a][b][2] = lb;
    if(a == num || b == num) {
        if(dp < ans) {
            ans = dp;
            ba = a, bb = b;
        }
        return ;
    }
    dfs(x, b, dp+1, 0, a, b);
    dfs(a, y, dp+1, 1, a, b);
    dfs(0, b, dp+1, 2, a, b);
    dfs(a, 0, dp+1, 3, a, b);
    if(a+b <= y)        dfs(0, a+b, dp+1, 4, a, b);
    else        dfs(a-(y-b), y, dp+1, 4, a, b);
    if(a+b <= x)        dfs(a+b, 0, dp+1, 5, a, b);
    else        dfs(x, b-(x-a), dp+1, 5, a, b);

}
void rec(int a, int b) {
    if(step[a][b][0] == -1) return;
    rec(step[a][b][1], step[a][b][2]);
    switch(step[a][b][0]) {
        case 0:cout << "fill A\n";break;
        case 1:cout << "fill B\n";break;
        case 2:cout << "empty A\n";break;
        case 3:cout << "empty B\n";break;
        case 4:cout << "pour A B\n";break;
        case 5:cout << "pour B A \n";break;
    }
}
  /******Main Function*********/
int main() {
      MrGAFs
       cin >> x >> y >>num;
        memset(path, 63, sizeof(path));
        ans = 0xffff;
        dfs(0, 0, 0, -1, 0, 0);
        rec(ba, bb);
        cout << "success";
    }
