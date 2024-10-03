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

    	ll n,m;
    	cin>>n>>m;

    	vector<vector<ll>> v1(n,vector<ll>(m));

    	for(int i=0;i<n;i++){

    		for(int j=0;j<m;j++){

    			cin>>v1[i][j];
    		}
    	}
    	map<ll,ll> m1;
    	for(int i=0;i<n;i++){

    		for(int j=0;j<m;j++){

    			//cout<<v1[i][j]<<" ";
    			m1[v1[i][j]]++;
    		}
    		//cout<<endl;
    	}

    	if(n==1 && m==1){
    		cout<<-1<<endl;
    	}
    	else{


    		bool found=true;
    		vector<vector<ll>> v2(n,vector<ll>(m));

    		for(auto x:m1){
    			cout<<x.first<<" "<<x.second<<endl;
    		}
    		ll len=n*m;
    		for(int i=0;i<n;i++){

    			for(int j=0;j<m;j++){

    				ll val=v1[i][j];
    				bool another=false;
    				ll temp;
    				for(auto &x:m1){

    					if(x.first!=val && x.second>0){
    						//debug(val)
    						//cout<<x.first<<" "<<x.second<<endl;
    						temp=x.first;
    						another=true;
    						v2[i][j]=x.first;
    						x.second--;
    						break;
    					}
    				}

    				if(!another){
    					found=false;
    					break;
    				}
    				//m1[temp]--;
    				
    			}

    			if(!found){
    				break;
    			}
    		}

    		if(found){

	    		for(int i=0;i<n;i++){

		    		for(int j=0;j<m;j++){

		    			cout<<v2[i][j]<<" ";
		    			//m1[v1[i][j]]++;
		    		}
		    		cout<<endl;
	    		}
    		}
    		else{

    			cout<<-1<<endl;
    		}

    	}

    	t--;
    }

    return 0;
}