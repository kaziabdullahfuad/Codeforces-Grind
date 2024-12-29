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
const ll mod=998244353;
ll len=2e5+5;
vector<ll> factorial(len);
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    factorial[2]=2;
    factorial[0]=1;
    factorial[1]=1;
    for(ll i=3;i<=len;i++){

    	factorial[i]=(i*factorial[i-1])%mod;
    }

    while(t){

    	string s;
    	cin>>s;

    	ll n=s.size();

    	//debug(n)
    	//cout<<s<<endl;
    	ll ans1=0;
    	ll ans2=1;
    	ll count=0;
    	for(int i=0;i<n;i++){

    		count=0;
    		ll ind=i;
    		char val=s[i];

    		while(ind<n && s[ind]==val){

    			count++;
    			ind++;
    		}

    		if(count>=2){

    			ans1+=(count-1);

    			ans2*=count;
    			//ans2+=factorial[count];
    			ans2%=mod;
    		}
    		ind--;
    		i=ind;
    	}
    	
    	//debug(ans2)
    	cout<<ans1<<" ";
    	ans2*=factorial[ans1];
    	ans2%=mod;
    	cout<<ans2<<endl;

    	t--;
    }

    return 0;
}