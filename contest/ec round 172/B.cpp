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
    	map<ll,ll> m1;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		m1[v1[i]]++;

    	}
    	
    	//printVector(v1);
    	vector<ll> v2;

    	for(auto x:m1){
    		//cout<<x.first<<" "<<x.second<<endl;
    		v2.push_back(x.second);
    	}

    	sort(all(v2));

    	//printVector(v2);
    	ll len=v2.size();
    	int count=0;
    	ll start=1;
    	for(int i=0;i<len;i++){

    		//debug(v2[i])
    		if(start%2==1){
    			// alice ar turn

    			if(v2[i]==1){
    				count+=2;
    			}
    			else{
    				count++;
    			}
    		}
    		else if(v2[i]>=2){

    			// bob ar turn but duitar beshi ase
    			// so I will never have him let him have them all
    			count++;
    		}
    		start++;
    		//debug(count)
    	}

    	cout<<count<<endl;

    	t--;
    }

    return 0;
}