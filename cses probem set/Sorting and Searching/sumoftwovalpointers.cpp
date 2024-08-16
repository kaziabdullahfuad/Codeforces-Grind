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

    ll n,x;
    cin>>n>>x;
    vector<ll> v1(n);
    vector<pair<ll,ll>> v2;

    for(int i=0;i<n;i++){
    	cin>>v1[i];
    	v2.push_back({v1[i],i+1});
    }

    // for(auto x:v2){
    // 	cout<<x.first<<" "<<x.second<<endl;
    // }

    // cout<<"AFTER SORTING"<<endl;
    sort(all(v2));

    // for(auto x:v2){
    // 	cout<<x.first<<" "<<x.second<<endl;
    // }

    ll left=0;
    ll right=n-1;
    bool found=false;
    ll index1=0,index2=1;
    //printVector(v1);
    while(left<right){

    	ll sum=v2[left].first+v2[right].first;

    	if(sum==x){
    		found=true;
    		index1=v2[left].second;
    		index2=v2[right].second;
    		break;
    	}
    	else if(sum>x){
    		// komano
    		right--;
    	}
    	else{
    		// barano
    		left++;
    	}
    }
    //cout<<endl;
    if(found){
    	cout<<index1<<" "<<index2<<endl;
    }
    else{
    	cout<<"IMPOSSIBLE"<<endl;
    }

    //sort(all(v1));

    // ll left=0;
    // ll right=n-1;
    // bool found=false;
    // ll index1=0,index2=1;
    // //printVector(v1);
    // while(left<right){

    // 	ll sum=v1[left]+v1[right];

    // 	if(sum==x){
    // 		found=true;
    // 		index1=left+1;
    // 		index2=right+1;
    // 		break;
    // 	}
    // 	else if(sum>x){
    // 		// komano
    // 		right--;
    // 	}
    // 	else{
    // 		// barano
    // 		left++;
    // 	}
    // }

    // if(found){
    // 	cout<<index1<<" "<<index2<<endl;
    // }
    // else{
    // 	cout<<"IMPOSSIBLE"<<endl;
    // }
    

    return 0;
}