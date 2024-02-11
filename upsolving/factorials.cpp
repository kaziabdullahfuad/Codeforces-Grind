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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    ll mul=1;

    for(ll i=1;i<=n;i++){

    	mul*=i;
    	//cout<<mul<<endl;
    }

    cout<<mul<<endl;

    int keep=4;

    // while(keep){

    // 	cout<<mul%10<<endl;
    // 	mul/=10;
    // 	keep--;
    // }

    return 0;
}