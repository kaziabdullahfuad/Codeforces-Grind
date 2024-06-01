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

    	ll n,k;
    	cin>>n>>k;
    	vector<ll> v1(n);
    	ll no_ones=0;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		if(v1[i]==1){
    			no_ones++;
    		}
    	}

    	if(no_ones==0){
    		cout<<"NO"<<endl;
    	}
    	else{
    		cout<<"YES"<<endl;
    	}
    	


    	t--;
    }

    return 0;
}