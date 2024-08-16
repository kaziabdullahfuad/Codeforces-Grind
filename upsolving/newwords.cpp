#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<unordered_set>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
#define endl "\n"
#define debug(x) cout<<#x<<":"<<x<<endl;
#define all(x) (x).begin(),(x).end()
template<typename t1>
void printVector(vector<t1> v1){

	for(int i=0;i<v1.size();i++){

		cout<<v1[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

	string s;
	cin>>s;
	map<char,ll> m1;

	m1['e']=0;
	m1['E']=0;
	m1['g']=0;
	m1['G']=0;
	m1['y']=0;
	m1['Y']=0;
	m1['p']=0;
	m1['P']=0;
	m1['t']=0;
	m1['T']=0;

	int n=s.size();
	ll e=0,g=0,y=0,p=0,t=0;

	for(int i=0;i<n;i++){

		if(s[i]=='e' || s[i]=='E'
			|| s[i]=='g' || s[i]=='G'
			|| s[i]=='y' || s[i]=='Y'
			|| s[i]=='p' || s[i]=='P'
			|| s[i]=='t' || s[i]=='T'){

			m1[s[i]]++;
		}
		if(s[i]=='e'|| s[i]=='E'){
			e++;
		}
		else if(s[i]=='g' || s[i]=='G'){
			g++;
		}
		else if(s[i]=='y' || s[i]=='Y'){
			y++;
		}
		else if(s[i]=='p' || s[i]=='P'){
			p++;
		}
		else if(s[i]=='t' || s[i]=='T'){
			t++;
		}
	}

	// for(auto x:m1){
	// 	cout<<x.first<<" "<<x.second<<endl;
	// }

	//cout<<e<<" "<<g<<" "<<y<<" "<<p<<" "<<t<<endl;

	ll min_val=min(e,g);
	min_val=min(min_val,y);
	min_val=min(min_val,p);
	min_val=min(min_val,t);

	cout<<min_val<<endl;

    return 0;
}