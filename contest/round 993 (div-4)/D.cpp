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

    	ll n;
    	cin>>n;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	// jegula unknown ase oigula age dibo

    	set<ll> s1;
    	vector<ll> v2;

    	for(int i=0;i<n;i++){

    		if(s1.find(v1[i])==s1.end()){
    			// ai value nai
    			s1.insert(v1[i]);
    			v2.push_back(v1[i]);
    		}
    	}

    	//cout<<s1.size()<<endl;
    	//printVector(v2);

    	for(int i=1;i<=n;i++){

    		if(v2.size()==n){
    			break;
    		}

    		if(s1.find(i)==s1.end()){
    			v2.push_back(i);
    		}
    	}

    	printVector(v2);



    	t--;
    }

    return 0;
}