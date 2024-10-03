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
    	ll m=(n*(n-1))/2;
    	vector<ll> v1(m);
    	
    	for(int i=0;i<m;i++){
    		cin>>v1[i];
    	}
    	
    	map<ll,ll> m1;
    	for(int i=0;i<m;i++){

    		m1[v1[i]]++;
    	}

    	// printVector(v1);

    	// for(auto x:m1){

    	// 	cout<<x.first<<" "<<x.second<<endl;
    	// }

    	//cout<<"HERE"<<endl;
    	ll sum=0;
    	ll count=0;
    	ll last=0;
    	map<ll,ll> m2;
    	for(auto it=m1.rbegin();it!=m1.rend();it++){

    		//cout<<it->first<<" "<<it->second<<endl;
    		ll need=it->second;
    		sum=count;
    		//debug(sum)
    		if(sum==need){

    			count++;

    			//cout<<count-last<<endl;
    			m2[it->first]=count-last;
    			last=count;
    		}
    		else{

    			while(sum<need){

	    			sum+=count;
	    			count++;
    			}

	    		//cout<<count-last<<endl;
	    		m2[it->first]=count-last;
	    		last=count;
    		}
    		
    	}

    	//cout<<"HERE"<<endl;
    	for(auto x:m2){

    		//cout<<x.first<<" "<<" "<<x.second<<endl;
    		ll times=x.second;
    		while(times){

    			cout<<x.first<<" ";
    			times--;
    		}
    	}
    	cout<<endl;

    	t--;
    }

    return 0;
}