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

    	ll x,y;
    	cin>>x>>y;

    	ll t1=10;
    	ll d1=x*t1;
    	ll yt1=y*t1;

    	ll yt1_d1=yt1-d1;
    	ll hun_y=100-y;

    	// now ceil division

    	ll ans=(yt1_d1+hun_y-1)/hun_y;
    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}