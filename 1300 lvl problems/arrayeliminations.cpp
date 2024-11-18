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
    	
    	//printVector(v1);
    	vector<ll> temp(35,0);

    	//printVector(temp);

    	for(int i=0;i<n;i++){

    		ll count=0;
    		//debug(v1[i])
    		for(ll j=0;j<=32;j++){

    			//debug(j)
    			ll hold=1ll<<j;
    			//debug(hold)
    			if(hold&v1[i]){
    				//debug(hold)
    				//cout<<"YES"<<endl;
    				temp[j]++;
    			}
    		}
    	}

    	//printVector(temp);
    	vector<ll> ans;
    	ans.push_back(1);
    	for(ll i=2;i<=n;i++){

    		bool found=true;
    		for(int j=0;j<35;j++){

    			if(temp[j]%i!=0){
    				found=false;
    				break;
    			}
    		}

    		if(found){
    			ans.push_back(i);
    		}
    	}

    	printVector(ans);

    	t--;
    }

    return 0;
}