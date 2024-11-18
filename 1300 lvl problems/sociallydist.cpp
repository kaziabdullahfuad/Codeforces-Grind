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
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	

    	ll inc=-1;
    	ll dec=-1;

    	if(v1[0]>v1[1]){
    		dec=1;
    	}
    	else{
    		inc=1;
    	}
    	//printVector(v1);
    	ll prev=v1[0];
    	vector<ll> ans;
    	ans.push_back(v1[0]);
    	//debug(prev)
    	for(int i=1;i<n;i++){
    		//debug(prev)
    		if(v1[i]>prev && inc==-1){
    			inc=1;
    			ans.push_back(prev);
    			dec=-1;
    		}
    		else if(v1[i]<prev && dec==-1){
    			dec=1;
    			ans.push_back(prev);
    			inc=-1;
    		}
    		prev=v1[i];
    	}
    	ans.push_back(v1[n-1]);
    	cout<<ans.size()<<endl;
    	printVector(ans);

    	t--;
    }

    return 0;
}