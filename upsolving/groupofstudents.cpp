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

    
	ll n;
	cin>>n;
	vector<ll> v1(n);
	ll sum=0;

	for(int i=0;i<n;i++){
		cin>>v1[i];
		sum+=v1[i];
	}
	
	ll x,y;
	cin>>x>>y;

	// prefix sum
	vector<ll> prefix(n+1);

	for(int i=1;i<=n;i++){

		prefix[i]=prefix[i-1]+v1[i-1];
	}

	//printVector(prefix);
	bool found=false;
	//debug(sum)
	ll keep=0;
	for(int i=1;i<=n;i++){

		if(prefix[i]>=x && prefix[i]<=y){

			ll rest=sum-prefix[i];

			if(rest>=x && rest<=y){
				keep=i;
				found=true;
				// cout<<prefix[i]<<endl;
				// cout<<rest<<endl;
				break;
			}
		}
	}

	if(found){
		keep++;
		cout<<keep<<endl;
	}
	else{
		cout<<0<<endl;
	}


    return 0;
}