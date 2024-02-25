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
ll sumNumbers(ll i){

	ll sum=0;
	ll hold=0;
	while(i){

		hold=i%10;
		sum+=hold;
		i/=10;
	}

	return sum;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    ll n=2e5+1;
    vector<ll> v1(n+1);
    int t;
    cin>>t;
   	//cout<<n<<endl;

   	for(ll i=1;i<=n;i++){

   		if(i>=10){
   			v1[i]=sumNumbers(i);

   		}
   		else{
   			v1[i]=i;
   		}
   	}

   	// for(int i=1;i<=12;i++){
   	// 	cout<<v1[i]<<" ";
   	// }

   	vector<ll> prefix(n+1);
   	//cout<<endl;
   	for(ll i=1;i<=n;i++){

   		prefix[i]=prefix[i-1]+v1[i];
   	}

   	// for(int i=1;i<=12;i++){
   	// 	cout<<prefix[i]<<" ";
   	// }

   	// cout<<prefix[12]<<endl;
   	// cout<<prefix[1]<<endl;
   	// cout<<prefix[1434]<<endl;

   	while(t){

   		ll val;
   		cin>>val;

   		cout<<prefix[val]<<endl;

   		t--;
   	}

    return 0;
}