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

    	ll n,k,q;
    	cin>>n>>k>>q;

    	vector<ll> v1(k);
    	vector<ll> v2(k);
    	for(int i=0;i<k;i++){
    		cin>>v1[i];
    	}

    	for(int i=0;i<k;i++){
    		cin>>v2[i];
    	}

    	//printVector(v1);
    	//printVector(v2);

    	while(q){
    		
    		ll d;
    		cin>>d;

    		// index
    		auto it=lower_bound(all(v1),d)-v1.begin();

    		it--;

    		if(it==-1){

    			// mane zero te ase ager
    			// t=d'/s and as s=d2-d1/t2-t1

    			ll dis=v1[0];
    			ll time=v2[0];

    			ll main=(d*time)/dis;
    			//debug(d)
    			cout<<main<<" ";
    		}
    		else{

    			//debug(d)

    			ll dis=v1[it+1]-v1[it];
    			ll time=v2[it+1]-v2[it];
    			ll val_dis=d-v1[it];
    			//debug(dis) debug(time) debug(val_dis)
    			//cout<<val_dis*time<<endl;
    			//cout<<((val_dis*time)/dis)<<endl;
    			ll main=v2[it]+((val_dis*time)/dis);
    			cout<<main<<" ";
    		}

    		q--;
    	}

    	cout<<endl;

    	


    	t--;
    }

    return 0;
}