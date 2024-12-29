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

    	string s;
    	cin>>s;

    	map<char,ll> m1;

    	if(n==1){
    		cout<<s<<endl;
    	}
    	else{

    		for(int i=0;i<n;i++){

    			m1[s[i]]++;
    		}

    		char first;
    		ll max_val=0;
    		bool found=false;
    		char ekta;
    		ll counter=0;
    		
    		if(m1.size()==1){

    			cout<<s<<endl;
    		}
    		else{


    			for(auto x:m1){

    				if(x.second>max_val){
    					max_val=x.second;
    					first=x.first;
    				}
    			}

    			//debug(first)

    			for(auto x:m1){

    				if(x.second==1 && x.first!=first){
    					found=true;
    					ekta=x.first;
    					break;
    				}
    			}

    			//debug(ekta)

    			if(found){

    				for(int i=0;i<n;i++){

    					if(s[i]==ekta){
    						s[i]=first;
    						break;
    					}
    				}
    			}
    			else{

    				for(int i=0;i<n;i++){

    					if(s[i]!=first){
    						s[i]=first;
    						break;
    					}
    				}
    			}

    			cout<<s<<endl;
    		}

    		

    	}

    	t--;
    }

    return 0;
}