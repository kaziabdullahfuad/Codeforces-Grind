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

    	// cout<<"Bismillah"<<endl;
    	// cout<<"Allahu Akbar"<<endl;

    	ll n;
    	cin>>n;
    	vector<ll> v1(n);
    	map<ll,ll> m1;

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		m1[v1[i]]++;
    	}


    	if(m1.size()==1 && m1[0]>=1){

    		// shob gula zero
    		cout<<0<<endl;
    	}
    	else if(m1[0]==0){

    		// purata nibo
    		cout<<1<<endl;
    	}
    	else{

    		// mane zero ase 
    		//cout<<v1[0]<<endl;
    		if(m1[0]==1 && (v1[0]==0 || v1[n-1]==0)){

    			//cout<<"HERE"<<endl;
    			cout<<1<<endl;
    		}
    		else if(m1[0]==1){

    			cout<<2<<endl;
    		}
    		else if(m1[0]==2 && (v1[0]==0 && v1[n-1]==0)){

    			cout<<1<<endl;
    		}
    		else{

    			// 2 ta ase
    			//cout<<"HERE"<<endl;
    			bool found=true;
    			vector<ll> holder;
    			for(int i=0;i<n;i++){

    				if(v1[i]!=0){
    					holder.push_back(i);
    				}
    			}

    			//printVector(holder);
    			
    			for(int i=1;i<holder.size();i++){

    				ll diff=holder[i]-holder[i-1];

    				if(diff>1){
    					found=false;
    					break;
    				}
    			}

    			if(found){
    				cout<<1<<endl;
    			}
    			else{
    				cout<<2<<endl;
    			}

    		}
    	}
    	


    	t--;
    }

    return 0;
}