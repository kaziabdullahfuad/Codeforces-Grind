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
int gcd(int x,int y){

	if(x%y==0){
		return y;
	}

	return gcd(y,x%y);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	ll x,n;
    	cin>>x>>n;

    	if(x%n==0){

    		cout<<x/n<<endl;
    	}
    	else{

    		// find all divisors of x

    		ll ans=x;
    		ll temp;
    		ll temp2;
    		for(ll i=1;i*i<=x;i++){


    			if(x%i==0){

    				if(i>n){
    					//cout<<i<<endl;
    					ans=min(ans,i);
    				}
    				if(x/i>n){
    					//cout<<x/i<<endl;
    					ans=min(ans,x/i);
    				}
    			}
    			//cout<<ans<<endl;
    		}

    		cout<<x/ans<<endl;

    	}

    	

    	t--;
    }

    return 0;
}