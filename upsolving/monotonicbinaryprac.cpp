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
bool check(ll mid,vector<ll> &v1,ll d){

	ll n=v1.size();
	ll sum=0;
	ll ans=0;
	ll max_ele=*max_element(all(v1));
	if(max_ele>mid){
		return false;
	}
	for(int i=0;i<n;i++){

		sum+=v1[i];
		//cout<<v1[i]<<" "<<sum<<endl;
		if(sum>mid){
			//cout<<"BIGGER"<<endl;
			//cout<<sum<<endl;
			ans++;
			sum=0;
			i--;
		}
	}
	ans++;
	if(ans>d){
		return false;
	}
	else{
		return true;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /*Example Problem
	Problem: Find the Minimum Capacity to Ship Packages Within D Days
	Description: Given an array of package weights and a number of days D, 
	find the minimum capacity of a ship to ship all packages within D days.*/

	vector<ll> v1={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	ll days=5;
	ll sum=0;
	for(int i=0;i<v1.size();i++){
		sum+=v1[i];
	}
	ll low=0,high=1e12;
	ll mid;
	ll ans=sum;
	
	while(low<=high){

		mid=(low+high)/2;

		if(check(mid,v1,days)){
			// jehetu minimum korte hobe
			// tai aro choto value ache ki na khujbo
			high=mid-1;
			ans=mid;
		}
		else{
			// aro daaan a jete hobe
			low=mid+1;
		}

	}
	
	cout<<ans<<endl;
    

    return 0;
}