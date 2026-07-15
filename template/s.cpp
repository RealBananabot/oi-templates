#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
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

template<typename T> ostream& operator << (ostream& os, const vector<T> &vec){
	os << "[";
	for(size_t i = 0; i < vec.size(); i ++){
		if(i > 0) os << ", ";
		os << vec[i];
	}
	os << "]";
	return os;
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

signed main(){
	#ifdef LOCAL
	assert( freopen(".in", "r", stdin) );
	assert( freopen(".out", "w", stdout) );
	#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

}
