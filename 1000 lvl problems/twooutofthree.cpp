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
    	//sort(all(v1));
    	ll count=0;
    	//printVector(v1);
    	map<ll,ll> m1;

    	for(int i=0;i<n;i++){

    		m1[v1[i]]++;
    	}
    	ll val1=-1,val2=-1;
    	for(auto x:m1){

    		//cout<<x.first<<" "<<x.second<<endl;
    		if(count>=2){
    			break;
    		}

    		if(x.second>=2){

    			if(val1==-1){
    				val1=x.first;
    			}
    			else if(val2==-1){
    				val2=x.first;
    			}
    			count++;
    		}
    	}

    	if(count<2){
    		cout<<-1<<endl;
    	}
    	else{

    		//cout<<val1<<" "<<val2<<endl;

    		vector<ll> v2(n,1);

    		//printVector(v2);

    		for(int i=n-1;i>=0;i--){

    			if(v1[i]==val1){
    				v2[i]=2;
    				break;
    			}
    		}
    		for(int i=n-1;i>=0;i--){

    			if(v1[i]==val2){
    				v2[i]=3;
    				break;
    			}
    		}

    		printVector(v2);
    	}


    	t--;
    }

    return 0;
}