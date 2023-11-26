#include<iostream>
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
    ll sum=0;
    while(n){

    	n/=5;
    	sum+=n;
    	//cout<<"IN LOOP "<<sum<<endl;
    }

    cout<<sum<<endl;

    return 0;
}