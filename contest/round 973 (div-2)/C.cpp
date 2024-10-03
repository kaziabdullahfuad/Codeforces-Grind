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
    	sort(all(v1));
		ll gcd_val=0;
		ll sum=v1[0];
		for(int i=0;i<n;i++){

			gcd_val=__gcd(v1[i],gcd_val);
		}

    	


    	cout<<__gcd(42,66)<<endl;
    	cout<<__gcd(42,154)<<endl;
    	cout<<__gcd(42,231)<<endl;
    	ll hold=__gcd(42,66); // 42 ar por 66 nisi
    	debug(hold)

    	hold=__gcd(hold,154ll); // 154 and 231 ar moddhe 154 choose korsi karon gcd 2 asche
    	debug(hold)// 231 nile gcd 3 ashto

    	hold=__gcd(hold,231ll);
    	debug(hold)



    	t--;
    }

    return 0;
}