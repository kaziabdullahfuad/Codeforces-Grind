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

    	ll n,x;
    	cin>>n>>x;
    	vector<ll> v1(n);
    	map<ll,ll> m1;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		m1[v1[i]]++;
    	}
    	
    	ll mex=0;

    	map<ll,ll> m2;

    	while(true){

    		//debug(mex)
    		if(m1[mex]>=1){

    			// already ase
    			// ekta used
    			m1[mex]--;

    			// baki joto ase oigula rakhbo 
    			// m2 ar bhitore

    			ll hold=m1[mex];

    			m2[mex%x]+=hold;
    			mex++;
    		}
    		else{

    			// na thakle dekhbo banate pari ki na
    			//debug(mex)
    			//cout<<m2[mex%x]<<endl;
    			if(m2[mex%x]>=1){


    				m2[mex%x]--;
    				mex++;
    			}
    			else{
    				break;
    			}
    		}


    	}
    	
    	cout<<mex<<endl;

    	t--;
    }

    return 0;
}