#include<iostream>
#include<numeric>
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

    int t;
    cin>>t;

    while(t){

    	//cout<<"Bismillah"<<endl;

    	ll n;
    	cin>>n;

    	string s;
    	cin>>s;

    	// main permutation if obviously of size n
    	map<char,ll> m1;
    	for(int i=0;i<n;i++){

    		m1[s[i]]++;

    	}

    	if(n==1){

    		cout<<"YES"<<endl;
    	}
    	else if(m1['s']==0 && m1['p']==0){

    		// all ..
    		cout<<"YES"<<endl;
    	}
    	else if(m1['s']==0){

    		cout<<"YES"<<endl;
    	}
    	else if(m1['p']==0){
    		cout<<"YES"<<endl;
    	}
    	else{
    		// p s duitai ase

    		if(s[0]=='p'){
    			cout<<"NO"<<endl;
    		}
    		else{

    			vector<ll> v1(n+1);
    			// start from the right?

    			// p ar por s ashte parbe na

    			if(m1['p']==1 && s[n-1]=='p'){
    				cout<<"YES"<<endl;
    			}
    			else if(m1['s']==1 && s[0]=='s'){

    				cout<<"YES"<<endl;
    			}
    			else{
    				cout<<"NO"<<endl;
    			}
    		}
    	}

    	t--;
    }

    return 0;
}