#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
void printVector(vector<ll> v1){
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl;
}
void print2dvec(vector<vector<ll>> result){

	for(const auto row: result){

		for(const auto col: row){
			cout<<col<<" ";
		}
		cout<<endl;
	}
}
void createSubset(vector<ll> &v1,vector<ll> &holder,int start,vector<vector<ll>> &result){

	if(start>=v1.size()){
		return;
	}

	holder.push_back(v1[start]);
	result.push_back(holder);

	createSubset(v1,holder,start+1,result);

	holder.pop_back();

	createSubset(v1,holder,start+1,result);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<ll> v1;
    ll sum=0;
    for(int i=0;i<n;i++){
    	ll val;
    	cin>>val;
    	sum+=val;
    	v1.push_back(val);
    }
    sort(v1.begin(),v1.end());
    vector<vector<ll>> result;
    vector<ll> holder;
    int start=0;
    //printVector(v1);
    //cout<<sum<<endl;
    createSubset(v1,holder,start,result);
    ll half=sum/2; 
    ll min_num=abs(half-v1[0]);
    //cout<<half<<endl;
    //cout<<min_num<<endl;
   	
   	//print2dvec(result);
   	ll keep=0;

   	for(int i=0;i<result.size();i++){

   		ll temp=0;

   		for(int j=0;j<result[i].size();j++){

   			temp+=result[i][j];
   		}

   		//cout<<"Row "<<i+1<<" sum:"<<temp<<endl;

   		//cout<<abs(half-temp)<<endl;

   		if(abs(half-temp)<min_num){
   			min_num=abs(half-temp);
   			keep=temp;
   		}
   	}

   	if(v1.size()==2){
   		cout<<abs(v1[0]-v1[1])<<endl;
   	}
   	else{
	   	// cout<<min_num<<endl;
	   	// cout<<keep<<endl;
	   	ll remain=sum-keep;
	   	cout<<abs(remain-keep)<<endl;
   }

    return 0;
}