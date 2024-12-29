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

    	// 1 to n
    	// 0 to n

    	for(ll i=1;i<=n;i++){

    		ll banate=i-1;

    		if(i==1){
    			cout<<1<<" ";
    		}
    		else{

    			cout<<i+banate<<" ";
    		}
    	}

    	cout<<endl;

    	t--;
    }

    return 0;
}