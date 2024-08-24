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

    	if(n%2==0){
    		cout<<-1<<endl;
    	}
    	else{

    		if(n==1){
    			cout<<1<<endl;
    		}
    		else{

    			ll start=(n+2-1)/2;
    			//cout<<start<<endl;

    			for(ll i=start;i>=1;i--){

    				cout<<i<<" ";
    			}

    			for(ll i=start+1;i<=n;i++){

    				cout<<i<<" ";
    			}
    			cout<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}