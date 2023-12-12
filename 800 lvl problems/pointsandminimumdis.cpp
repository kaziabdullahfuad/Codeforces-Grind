//problem link:https://codeforces.com/problemset/problem/1895/B
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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	int n;
    	cin>>n;
    	ll len=2*n;
    	vector<ll>v1(len);
    	for(int i=0;i<len;i++){
    		cin>>v1[i];
    	}

    	sort(v1.begin(),v1.end());

    	ll sum=0;
    	int left=0;
    	int right=len-1;

    	// for(auto x:v1){
    	// 	cout<<x<<" ";
    	// }
    	// cout<<endl;
    	vector<ll> holder;
    	while(left<right){

    		//cout<<left<<" "<<right<<endl;
    		//cout<<v1[left]<<" "<<v1[right]<<endl;
    		holder.push_back(v1[left]);
    		holder.push_back(v1[right]);
    		left++;
    		right--;
    	}

    	// for(auto x:holder){
    	// 	cout<<x<<" ";
    	// }
    	// cout<<endl;

    	for(int i=0;i<holder.size()-2;i++){

    		//cout<<holder[i]<<" "<<holder[i+2]<<endl;
    		sum+=abs(holder[i]-holder[i+2]);
    		//cout<<sum<<endl;

    	}
    	cout<<sum<<endl;
    	left=0;
    	right=len-1;

    	while(left<right){

    		//cout<<left<<" "<<right<<endl;
    		cout<<v1[left]<<" "<<v1[right]<<endl;
    		left++;
    		right--;
    	}


    	t--;
    }

    return 0;
}