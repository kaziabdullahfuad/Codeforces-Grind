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

    
		ll n,q;
		cin>>n>>q;
		vector<ll> v1(n);
		map<ll,ll> m1;

		for(int i=0;i<n;i++){
			cin>>v1[i];
		}
		

		for(int i=0;i<n;i++){
			
			if(m1[v1[i]]==0){
				m1[v1[i]]=i+1;
			}
		}

		// for(auto x:m1){
		// 	cout<<x.first<<" "<<x.second<<endl;

    	// }
    	// cout<<"STARTED"<<endl;
    	while(q){

    		ll val;
    		cin>>val;

    		ll index=m1[val];
    		cout<<index<<" ";

    		// now oi index ar nicher value gula komaite hobe

    		for(auto x:m1){

    			if(x.second<index){

    				m1[x.first]=x.second+1;
    			}
    		}
    		m1[val]=1;
    		// for(auto x:m1){
			// cout<<x.first<<" "<<x.second<<endl;

    		// }

    		q--;
    	}


    

    return 0;
}