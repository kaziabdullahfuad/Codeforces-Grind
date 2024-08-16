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

    	// n= length of the permutation
    	ll n;
    	cin>>n;

    	if(n==1){
    		cout<<1<<endl;
    		cout<<1<<endl;
    	}
    	else{

    		ll find=n/2;

    		vector<ll> v1;

    		for(int i=1;i<=n;i++){
    			v1.push_back(i);
    		}

    		printVector(v1);
    		//cout<<find<<endl;

    		ll half=(n+2-1)/2;
    		//cout<<half<<endl;

    		ll remain=n-half;
    		//debug(remain)

    		for(int i=1;i<=half;i++){
    			cout<<find+i<<" ";
    			
    		}

    		for(int i=1;i<=remain;i++){
    			cout<<i<<" ";
    		}

    		cout<<endl;

    	}

    	t--;
    }

    return 0;
}