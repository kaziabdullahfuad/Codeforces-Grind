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

		
    	ll start=1;
    	ll beshi=k+1;
    	ll len=d;
    	
    	ll contain=0;
    	for(int i=0;i<n;i++){
    		//debug(d)
    		if(d<=0){
    			break;
    		}
    		ll temp=len-1;
    		ll hold=1+(temp/beshi);
    		//cout<<hold<<" "<<temp<<endl;
    		contain+=(v1[i]*hold);
    		d-=hold;
    		start++;
    		len--;
    	}

    	//debug(k)
    	//debug(contain)

    	if(contain>=c){
    		
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
    	ll ans=0;
    	bool infinity=false;

    	ll the_max=*max_element(all(v1));

    	if(the_max*d<c){
    		cout<<"Impossible"<<endl;
    	}
    	else{


    	for(ll i=1;i<=1e9;i++){

    		if(v1[0]>=c){
    			//cout<<"HERE"<<" "<<c<<" "<<v1[0]<<endl;
    			infinity=true;
    			break;
    		}
    		if(check(v1,i,d,n,c)){
    			ans=i;
    		}
    		else{
    			break;
    		}
    	}

    	if(infinity){
    		cout<<"Infinity"<<endl;
    	}
    	else{
    		cout<<ans<<endl;
    	}
    }

    	t--;
    }

    return 0;
}