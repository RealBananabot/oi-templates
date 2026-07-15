#include <bits/stdc++.h>
#include <experimental/algorithm>
using namespace std;
using namespace experimental::fundamentals_v2;
#define int long long
#define rep(i, j, k) for(int i = (j); i <= (k); i++)
#define per(i, j, k) for(int i = (j); i >= (k); i--)
#define pb emplace_back
#define fi first
#define se second
using vi = vector<int>;
using pi = pair<int, int>;

template<typename T0, typename T1> bool chmin(T0 &x, const T1 &y){
	if(y < x){x = y; return true;} return false;
}
template<typename T0, typename T1> bool chmax(T0 &x, const T1 &y){
	if(x < y){x = y; return true;} return false;
}

template<typename T> void debug(char *s, T x){
	cerr << s <<" = "<< x <<endl;
}
template<typename T, typename ...Ar> void debug(char *s, T x, Ar... y){
	int dep = 0;
	while(!(*s == ',' && dep == 0)){
		if(*s == '(') dep++;
		if(*s == ')') dep--;
		cerr << *s++;
	}
	cerr <<" = "<< x <<",";
	debug(s + 1, y...);
}
#define gdb(...) debug((char*)#__VA_ARGS__, __VA_ARGS__)

int rg(int l, int r){
	return randint(l, r);
}

signed main(){
	freopen(".in", "w", stdout);

	int n = 38, m = n * (n - 1) / 2, c = rg(1, 998244352);
	cout << n <<' '<< m <<' '<< c <<'\n';
	rep(i, 1, n){
		rep(j, i + 1, n){
			cout << i <<' '<< j <<'\n';
		}
	}
}