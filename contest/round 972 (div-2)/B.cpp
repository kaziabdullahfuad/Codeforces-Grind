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

    	ll n,m,q;
    	cin>>n>>m>>q;

    	vector<ll> v1(m);

    	// teacher der position
    	for(int i=0;i<m;i++){
    		cin>>v1[i];
    	}

    	ll dave_pos;
    	cin>>dave_pos;

    	sort(all(v1));

    	// dave ar baam a ase ki na keu
    	// dave ar daan a ase ki na keu
    	//printVector(v1);

    	if(dave_pos==1){

    		cout<<v1[0]-1<<endl;
    	}
    	else if(dave_pos==n){

    		cout<<n-v1[m-1]<<endl;
    	}
    	else{
    		ll dis=0;
    		// daan a o ase baam a o ase

    		if(dave_pos>v1[m-1]){
    			// max theke boro 
    			// then dave ekdom last a jabe

    			cout<<n-v1[m-1]<<endl;
    		}
    		else if(dave_pos<v1[0]){

    			// ekdom zero te jabe

    			cout<<v1[0]-1<<endl;
    		}
    		else{
    			ll least_dis=1e18;
    			ll max_dis=1e18;;
	    		for(int i=0;i<m;i++){

	    			if(v1[i]<dave_pos){
	    				least_dis=v1[i];
	    			}
	    			else if(v1[i]>dave_pos){
	    				max_dis=v1[i];
	    				break;
	    			}
	    		}

	    		//dis=max(dave_pos-least_dis,max_dis-dave_pos);
	    		//cout<<dis<<endl;
	    		cout<<(max_dis-least_dis)/2<<endl;
	    		
    		}
    	}


    	t--;
    }

    return 0;
}