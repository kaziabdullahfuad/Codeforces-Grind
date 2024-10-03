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
    	
    	sort(all(v1));

    	map<ll,ll> m1;

    	ll sum=0;

    	for(int i=0;i<n;i++){

    		m1[v1[i]]++;
    	}

    	// 1,2,2,3,3,4
    	// 1-> 1,2,3,4 2->2,3
    	//printVector(v1);
    	for(auto x:m1){

    		//cout<<x.first<<endl;
    		//debug(x.first-1)

    		if(m1.count(x.first-1)){

    			if(m1[x.first]>m1[x.first-1]){
    				sum+=x.second-m1[x.first-1];
    			}
    		}
    		else{
    			// ekhan theke shuru kortei hobe
    			//cout<<"EKHANE"<<" "<<x.first<<endl;
    			//cout<<m1[x.first-1]<<endl;
    			sum+=x.second;
    		}
    		//debug(sum)
    	}

    	cout<<sum<<endl;

    	t--;
    }

    return 0;
}