// problem link:https://codeforces.com/problemset/problem/1760/F
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
bool check(vector<ll> &v1,ll k,ll d,ll n,ll c){

		
    // shobche age k boro koro
    //debug(k)
	k++;

	ll sum=0;

	// koto gulo sum nite pare nd oigular pair koto gula hobe
	ll go_to=min(k,n);

	for(int i=0;i<go_to;i++){
		sum+=v1[i];
	}

	// agula koto bar thakte pare tana
	ll times=d/k;

	ll total=sum*times;

	ll remain=d%k;

	go_to=min(remain,n);

	for(int i=0;i<go_to;i++){
		total+=v1[i];
	}

	//debug(total)

	if(total>=c){
		return true;
	}

	return false;

}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	/*

		The first line of each test case contains 
		three integers n,c,d(2≤n≤2⋅10^5; 1≤c≤10^16; 1≤d≤2⋅105) — 
		the number of quests, the number of coins you need,and the number 
		of days.

		The second line of each test case contains n
		 integers a1,a2,…,an(1≤ai≤109) — the rewards for the quests.

    	*/
    	ll n,c,d;
    	cin>>n>>c>>d;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	sort(all(v1),greater<ll>());

    	// first check impossible ki na

    	ll max_val=*max_element(all(v1));

    	if(max_val*d<c){

    		// highest value d days nawar por o choto
    		//cout<<c<<endl;
    		cout<<"Impossible"<<endl;
    	}
    	else{

    		// infinity ki na
    		ll min_go=min(n,d);

    		ll sum=0;

    		for(int i=0;i<min_go;i++){
    			sum+=v1[i];
    		}

    		if(sum>=c){
    			//cout<<c<<endl;
    			cout<<"Infinity"<<endl;
    		}
    		else{


    			ll low=0;
    			ll high=1e9;
    			ll ans=-1;
    			while(low<=high){

    				ll mid=(low+high)/2;

    				if(check(v1,mid,d,n,c)){

    					ans=mid;
    					// aro beshi pawaa possible ki na
    					low=mid+1;
    				}
    				else{
    					high=mid-1;
    				}
    			}

    			cout<<ans<<endl;
    			
    		}
    	}

    	t--;
    }

    return 0;
}