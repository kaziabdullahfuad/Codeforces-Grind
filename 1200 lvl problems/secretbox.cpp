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

    	ll x,y,z,k;
    	cin>>x>>y>>z>>k;

    	ll ans=0;
    	for(ll a=1;a<=x;a++){

    		for(ll b=1;b<=y;b++){

    			ll flag1=0;
    			ll flag2=0;

    			if(k%(a*b)==0){
    				flag1=1;
    			}

    			if(k/(a*b)<=z){
    				flag2=1;
    			}

    			if(flag1 && flag2){

    				ll s1=a;
    				ll s2=b;
    				ll s3=k/(a*b);

    				ll distinct_plac=(x-s1+1);
    				distinct_plac*=(y-s2+1);
    				distinct_plac*=(z-s3+1);
    				ans=max(ans,distinct_plac);

    			}
    		}
    	}

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}