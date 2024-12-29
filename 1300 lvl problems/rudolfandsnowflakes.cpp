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

    	bool found=false;
    	ll ans=-1;
    	for(ll i=2;i<=1000;i++){

    		ll sum=1ll+i+(i*i);
    		ll mul=i*i;
    		//debug(i)
    		if(i>n){
    			break;
    		}
    		while(sum<n){

    			mul*=i;
    			sum+=mul;
    		}
    		//debug(sum)

    		if(sum==n){

    			found=true;
    			break;
    		}
    	}


    	if(found){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}