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

    	ll n,m;
    	cin>>n>>m;
    	//cout<<n<<" "<<m<<endl;
    	vector<ll> v1(n+1);
    	
    	for(int i=0;i<n;i++){

    		cin>>v1[i];
    	}
    	
    	sort(v1.begin(),v1.begin()+n);

    	v1[n]=-1;

    	//printVector(v1);
    	ll ans=0;
    	for(int i=0;i<n;i++){

    		ll j=i;

    		while(v1[i]==v1[j]){
    			j++;
    		}

    		ll l=j;

    		while(v1[l]==v1[i]+1){

    			l++;
    		}
    		//cout<<j-i<<" "<<l-j<<endl;
    		for(int c=0;c<=j-i;c++){

    			ll first=(c*v1[i]);

    			if(first>m){
    				continue;
    			}

    			ll remain=m-first;

    			ll mul=min(l-j,remain/(v1[i]+1));

    			

    			ll max_val=first+(v1[i]+1)*mul;

    			//cout<<first<<" "<<remain<<" "<<mul<<" "<<max_val<<endl;

    			ans=max(ans,max_val);
    		}

    		i=j-1;

    		//cout<<"EKDOM "<<i<<endl;
    		
    	}

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}