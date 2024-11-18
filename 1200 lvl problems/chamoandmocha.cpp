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
    	
    	// i know wrong but first i will try to get
    	// second max val
    	ll ans=min(v1[0],v1[1]);

    	for(int i=0;i<n;i++){

    		if(i==0){

    			ll hold=min(v1[0],v1[1]);
    			ans=max(ans,hold);
    		}
    		else if(i==n-1){

    			ll hold=min(v1[n-1],v1[n-2]);
    			ans=max(ans,hold);
    		}
    		else{

    			// baam and daan dui pash check

    			ll hold=min(v1[i],v1[i-1]);
    			ans=max(ans,hold);

    			hold=min(v1[i],v1[i+1]);
    			ans=max(ans,hold);

    			// aibar 3 tar moddhe dekhbo
    			if((v1[i]==v1[i-1]) || v1[i]==v1[i+1]){

    				ans=max(ans,v1[i]);
    			}
    			else if(v1[i]>v1[i-1] && v1[i]>v1[i+1]){

    				hold=max(v1[i-1],v1[i+1]);
    				ans=max(ans,hold);
    			}
    			else if(v1[i]<v1[i-1] && v1[i]<v1[i+1]){

    				hold=min(v1[i-1],v1[i+1]);
    				ans=max(ans,hold);
    			}
    			else{

    				ans=max(ans,v1[i]);
    			}
    		}
    		// debug(i)
    		// debug(ans)
    	}

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}