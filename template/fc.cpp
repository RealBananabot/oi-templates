#include<bits/stdc++.h>
using namespace std;
// #define int long long
#define rep(i,j,k) for(int i=(j);i<=(k);i++)
#define per(i,j,k) for(int i=(j);i>=(k);i--)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
typedef vector<int> vi;
typedef pair<int,int> pi;

signed main(){
	auto getinput=[&](istream &in){
		vector<string> res;
		string tmp;
		while(getline(in, tmp)){
			while(!tmp.empty() && tmp.back() == ' '){
				tmp.pop_back();
			}
			res.pb(tmp);
		}
		while(!res.empty() && res.back().empty()){
			res.pop_back();
		}
		return res;
	};
	
	ifstream out(".out"), ans(".ans");
	auto S = getinput(out), T = getinput(ans);
	int mx = max(S.size(), T.size());
	S.resize(mx);
	T.resize(mx);
	if(S == T){
		cout<<"ac "<< S.size() <<" lines"<<endl;
		exit(0);
	}
	else{
		int pt = 0;
		while(S[pt] == T[pt]){
			pt++;
		}
		cout<<"wa on line "<< pt+1 <<endl;
		cout<<"expected :"<< T[pt] <<endl;
		cout<<"found    :"<< S[pt] <<endl;
		exit(3);
	}
}