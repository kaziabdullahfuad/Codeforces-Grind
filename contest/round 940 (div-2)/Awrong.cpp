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

    int t;
    cin>>t;

    while(t){

    	ll n;
    	cin>>n;
    	vector<ll> v1(n);
    	ll sum=0;
    	map<ll,ll> m1;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		sum+=v1[i];
    		m1[v1[i]]++;
    	}
    	ll ans=0;
    	for(auto x:m1){

    		if(x.second==3){
    			ans++;
    		}
    		else if(x.second==4){
    			ans++;
    			// square hoi
    		}
    		else if(x.second==5){
    			ans++;
    			// pentagon
    		}
    		else if(x.second==6){
    			ans++;
    			// hexagon

    		}
    		else if(x.second==7){
    			// heptagon
    			ans++;
    		}
    		else if(x.second==8){
    			// octagon
    			ans++;
    		}
    		else if(x.second==9){
    			ans++;
    		}
    		else if(x.second==10){
    			ans++;
    		}
    	}
    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}