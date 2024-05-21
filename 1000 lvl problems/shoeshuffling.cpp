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

    	ll n;
    	cin>>n;
    	vector<ll> v1(n);
    	map<ll,ll> m1;
    	bool found=true;
    	vector<ll> holder;

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		m1[v1[i]]++;
    	}
    	ll start=0;
    	//printVector(v1);
    	vector<ll> v2;
    	for(auto x:m1){

    		if(x.second==1){
    			found=false;
    			break;
    		}
    		else{
    			start+=x.second;
    			holder.push_back(start);
    			v2.push_back(--x.second);
    		}
    	}
    	
    	if(found==false){

    		cout<<-1<<endl;
    	}
    	else{


	    	// printVector(holder);
	    	// printVector(v2);

	    	for(int i=0;i<holder.size();i++){

	    		ll temp=holder[i];
	    		cout<<temp<<" ";
	    		ll start=temp-v2[i];
	    		//cout<<start<<endl;
	    		while(start<temp){
	    			cout<<start<<" ";
	    			start++;
	    		}

	    	}
	    	cout<<endl;
    	}


    	t--;
    }

    return 0;
}