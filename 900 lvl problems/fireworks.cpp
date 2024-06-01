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

    	/*
    	 the frequency of launching for the first installation, 
    	 the second installation, 
    	 and the time the firework is visible in the sky.

    	*/
    	ll a,b,m;
    	cin>>a>>b>>m;

    	ll ans=2;

    	ans+=(m/a);
    	ans+=(m/b);

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}