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
ll binaryexpo(ll a,ll b,ll mod){

	ll result=1;

	while(b){

		if(b%2){
			result*=a;
			result%=mod;
		}

		a*=a;
		a%=mod;
		b=b/2;
	}

	return result;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //ll a=3,b=11;
    ll a=2,b=5;

    // we know the formula to find modular multiplicative inverse
    // using fermats theorem is a*a^-1 where a^-1=a^m-2%mod.

    ll ans=binaryexpo(a,b-2,b);
    ans%=b;

    cout<<ans<<endl;

    // now if we were to find
    // (val/a)%b
    // then we already have the modular inverse of a so
    // we can simply multiply val with b
    ll start=6;

    start=(start*ans)%b;
    cout<<start<<endl;

    return 0;
}