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

    	ll n,m,k;
    	cin>>n>>m>>k;

    	vector<ll> v1(m);

    	for(int i=0;i<m;i++){
    		cin>>v1[i];
    	}

    	vector<ll> v2(k);

    	set<ll> s1;
    	for(int i=0;i<k;i++){

    		cin>>v2[i];
    		s1.insert(v2[i]);
    	}


    	if(n==k){

    		string s;

    		for(int i=0;i<m;i++){
    			s+='1';
    		}

    		cout<<s<<endl;
    	}
    	else if((n-k)>=2 && m>=2){

    		string s;

    		for(int i=0;i<m;i++){
    			s+='0';
    		}

    		cout<<s<<endl;
    	}
    	else{

    		string s;
    		//cout<<"HERE"<<endl;
    		for(int i=0;i<m;i++){

    			if(s1.find(v1[i])==s1.end()){

    				s+='1';
    			}
    			else{
    				s+='0';
    			}
    		}

    		cout<<s<<endl;

    	}

    	t--;
    }

    return 0;
}