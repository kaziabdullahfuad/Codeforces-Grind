#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   	ll n;
   	cin>>n;
   	ll expo=1e9+7;
   	
   	ll result=1;

   	for(ll i=1;i<=n;i++){

   		result=(result*2)%expo;
   		//cout<<result<<endl;
   	}

   	cout<<result<<endl;

    return 0;
}