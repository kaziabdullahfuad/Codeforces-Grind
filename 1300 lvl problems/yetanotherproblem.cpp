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
    	vector<ll> v1(n+1);
    	
    	for(int i=1;i<=n;i++){
    		cin>>v1[i];
    	}
    	
    	vector<ll> prefix(n+1,0);

    	//printVector(v1);

    	for(int i=1;i<=n;i++){

    		if(v1[i]<i){

    			prefix[i]=prefix[i-1]+1ll;
    		}
    		else{
    			prefix[i]=prefix[i-1];
    		}
    	}

    	//printVector(prefix);

    	ll sum=0;
    	for(int i=1;i<=n;i++){

    		if(v1[i]<i && v1[i]!=0){

    			ll check=v1[i]-1;
    			// debug(i)
    			// debug(v1[i])
    			// debug(check)
    			sum+=prefix[check];
    		}

    	}

    	cout<<sum<<endl;

    	t--;
    }

    return 0;
}