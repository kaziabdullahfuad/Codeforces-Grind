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

    int t;
    cin>>t;

    while(t){


    	// x- no of sticks you can buy with one stick
    	// y -  number of sticks required to buy one coal 
    	//k-the number of torches you need
    	ll x,y,k;
    	cin>>x>>y>>k;

    	ll total=(y*k)+k-1;
    	//debug(total)
    	x--;
    	ll ceil_div=(total+x-1)/x; // proti bar x-1 ta kore notun pai tahole total paite koto lagbe
    	//debug(ceil_div)

    	ll ans=ceil_div+k;
    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}