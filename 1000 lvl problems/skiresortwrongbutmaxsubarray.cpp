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

    	ll n,k,q;
    	cin>>n>>k>>q;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	ll count=0;
    	ll max_sub=0;

    	for(int i=0;i<n;i++){

    		if(v1[i]>q){
    			//debug(count)
    			max_sub=max(max_sub,count);
    			count=0;
    		}
    		else{
    			//cout<<i<<endl;
    			count++;
    		}
    	}

    	max_sub=max(max_sub,count);
    	debug(max_sub)

    	if(max_sub==k){

    		cout<<1<<endl;
    	}
    	else if(k>max_sub){

    		cout<<0<<endl;
    	}
    	else{

    		
    	}

    	t--;
    }

    return 0;
}