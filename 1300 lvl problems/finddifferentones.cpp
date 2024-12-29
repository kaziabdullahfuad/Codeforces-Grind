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
    	vector<ll> v1(n+1);
    	
    	for(int i=1;i<=n;i++){
    		cin>>v1[i];
    	}
    	
    	//printVector(v1);
    	vector<ll> holder;

    	for(int i=1;i<=n;i++){

    		//cout<<v1[i]<<" ";
    		ll val=v1[i];
    		ll ind=i;
    		holder.push_back(i);

    		while(ind<=n && v1[ind]==val){

    			ind++;
    		}

    		//debug(ind)

    		i=ind-1;

    	}

    	// cout<<"HERE"<<endl;
    	// printVector(holder);

    	// vector<ll>:: iterator lower;

    	// lower=lower_bound(all(holder),2);

    	// if(lower==holder.end()){
    	// 	cout<<"IT has ended"<<endl;
    	// 	// ar maane ar por kono value nai tai to
    	// }
    	// else{
    	// 	cout<<"NOT REALLY"<<endl;
    	// 	cout<<*lower<<endl;

    	// }

    	ll q;
    	cin>>q;

    	while(q){

    		ll l,r;
    		cin>>l>>r;

    		// jeta first ase oita to thakbei abong atar porer next ta khujbo
    		// jodi end hoi ar mane last contigious kichu
    		// ex- 1 1 2 1 1 1 index 3 ar upper bound khujle end ashbe karon
    		// ar por kichu nai
    		// other wise upper bound ja pabe ta theke boro ki na dekhbo r


    		vector<ll>:: iterator upper;

    		// ai value theke next boro ase ki na
    		upper=upper_bound(all(holder),l);

    		if(upper==holder.end()){

    			// mane shesh ar nai
    			cout<<-1<<" "<<-1<<endl;
    		}
    		else{
    			// ar por ase
    			// now check r oita theke boro ki na

    			if(r>=*upper){

    				//cout<<v1[l]<<" "<<v1[*upper]<<endl;
    				cout<<l<<" "<<*upper<<endl;
    			}
    			else{
    				cout<<-1<<" "<<-1<<endl;
    			}
    		}


    		q--;
    	}
    	
    	cout<<endl;

    	t--;
    }

    return 0;
}