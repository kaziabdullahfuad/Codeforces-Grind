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

    	

    	sort(all(v1));

    	// dave ar baam a ase ki na keu
    	// dave ar daan a ase ki na keu
    	//printVector(v1);

    	while(q){
    		
    		ll dave_pos;
    		cin>>dave_pos;

	    	if(dave_pos==1){

	    		cout<<v1[0]-1<<endl;
	    	}
	    	else if(dave_pos==n){

	    		cout<<n-v1[m-1]<<endl;
	    	}
	    	else{
	    		

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
	    			
	    			vector<ll> ::iterator lower,upper;
	    			lower=lower_bound(v1.begin(),v1.end(),dave_pos);
	    			upper=upper_bound(v1.begin(),v1.end(),dave_pos);

	    			ll left_index=lower-v1.begin()-1;
	    			ll right_index=upper-v1.begin();
	    			//cout<<left_index<<" "<<right_index<<endl;
	    			ll left_val=v1[left_index];
	    			ll right_val=v1[right_index];
	    			//cout<<left_val<<" "<<right_val<<endl;

	    			cout<<(right_val-left_val)/2<<endl;
		    		
	    		}
	    	}
	    	q--;
    }


    	t--;
    }

    return 0;
}