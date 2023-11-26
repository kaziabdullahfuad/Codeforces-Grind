#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
#define endl "\n"
void printVector(vector<ll> v1){

	for(ll i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}

	cout<<endl;
}
/*
if(starter>=v1.size()){
		return;
	}
	else if(sum+v1[starter]==summation_half){
		holder.push_back(v1[starter]);
		result.push_back(holder);
		holder.pop_back();
		return;
	}
	else if(sum+holder[starter]>summation_half){
		return;
	}

	holder.push_back(v1[starter]);

	allCombi(v1,holder,result,starter+1,sum+v1[starter],summation_half);

	holder.pop_back();

	allCombi(v1,holder,result,starter+1,sum,summation_half);
	*/
void allCombi(vector<ll> &v1,vector<ll> holder,vector<vector<ll>> &result,ll starter,ll sum,ll summation_half){

	if(starter>=v1.size()){
		return;
	}
	else if(sum+v1[starter]==summation_half){
		holder.push_back(v1[starter]);
		result.push_back(holder);
		holder.pop_back();
		return;
	}
	else if(sum+v1[starter]>summation_half){
		return;
	}

	holder.push_back(v1[starter]);

	allCombi(v1,holder,result,starter+1,sum+v1[starter],summation_half);

	holder.pop_back();

	allCombi(v1,holder,result,starter+1,sum,summation_half);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   	ll n;
   	cin>>n;
   	vector<ll> v1;

   	for(ll i=1;i<=n;i++){
   		v1.push_back(i);
   	}

   	ll summation=n*(n+1)/2;
   	//cout<<summation<<endl;
   	ll summation_half=summation/2;
   	cout<<summation_half<<endl;

   	//printVector(v1);

   	vector<ll> holder;
   	vector<vector<ll>> result;
   	ll starter=0;
   	ll sum=0;

  	allCombi(v1,holder,result,starter,sum,summation_half);

  	for(auto x:result){
  		for(auto col:x){
  			cout<<col<<" ";
  		}
  		cout<<endl;
  	}

    return 0;
}