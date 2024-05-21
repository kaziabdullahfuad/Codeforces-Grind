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
	
	for(int i=0;i<n;i++){
		cin>>v1[i];
	}
	
	ll val=0;
	bool found=false;
	for(int i=0;i<n;i++){

		val=__gcd(v1[i],val);
		//cout<<val<<endl;
	}

	//cout<<val<<endl;

	if(val>1){
		cout<<"YES"<<endl;
		cout<<0<<endl;
	}
	else{

		ll ans=0;
		// age shob zero zero gula shorai
		for(int i=0;i<n-1;i++){

			if(v1[i]%2==1 && v1[i+1]%2==1){

				ll first=v1[i];
				ll second=v1[i+1];
				v1[i]=first-second;
				v1[i+1]=first+second;
				ans++;
			}
		}

		//printVector(v1);
		ll val=0;

		for(int i=0;i<n;i++){

			val=__gcd(val,v1[i]);
			//cout<<val<<endl;
		}

		if(val>1){
			cout<<"YES"<<endl;
			cout<<ans<<endl;
		}
		else{

			for(int i=0;i<n-1;i++){

				if(v1[i]%2==0 && v1[i+1]%2==0){
					continue;
				}
				else{
					//cout<<v1[i]<<" "<<v1[i+1]<<endl;
					ll first=v1[i];
					ll second=v1[i+1];
					v1[i]=2;
					v1[i+1]=2;
					ans+=2;
				}
			}
			cout<<"YES"<<endl;
			cout<<ans<<endl;
		}
		
	}

    

    

    return 0;
}