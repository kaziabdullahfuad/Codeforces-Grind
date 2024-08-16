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
    	
    	vector<ll> v2(n+1,0);

    	v2[v1[0]]=1;

    	//printVector(v2);
    	bool found=true;

    	for(int i=1;i<n;i++){

    		if(v1[i]==1){

    			if(v2[2]==1){

    				v2[1]=1;
    			}
    			else{
    				found=false;
    				break;
    			}
    		}
    		else if(v1[i]==n){

    			if(v2[n-1]==1){

    				v2[n]=1;
    			}
    			else{
    				found=false;
    				break;
    			}
    		}
    		else{
    			// 2 to n-1 ar moddhe

    			ll val=v1[i];

    			if(v2[val-1]==1 || v2[val+1]==1){

    				v2[val]=1;
    			}
    			else{
    				found=false;
    				break;
    			}
    		}
    		//printVector(v2);
    	}

    	if(found){

    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}