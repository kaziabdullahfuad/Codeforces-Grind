#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
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
    	int x;
    	cin>>x;
    	vector<int> v1;

    	for(int i=0;i<n;i++){
    		int val;
    		cin>>val;
    		v1.push_back(val);
    	}

    	int first=v1[0];
    	int last=v1[n-1];

    	int last_distance=(x-last)*2;
    	int cal_dist=0;
    	int max_val_cal=0;
    	for(int i=0;i<v1.size()-1;i++){

    		cal_dist=v1[i+1]-v1[i];

    		if(cal_dist>max_val_cal){
    			max_val_cal=cal_dist;
    		}
    	}
    	// cout<<first<<endl;
    	// cout<<last_distance<<endl;
    	//cout<<max_val_cal<<endl;
    	int max_val=max(first,last_distance);

    	max_val=max(max_val,max_val_cal);

    	cout<<max_val<<endl;

    	t--;
    }

    return 0;
}