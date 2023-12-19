//problem link:https://codeforces.com/problemset/problem/1856/A
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
    	vector<int> v1(n);

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	bool alr_sorted=true;
    	for(int i=0;i<v1.size()-1;i++){

    		if(v1[i]>v1[i+1]){
    			alr_sorted=false;
    			break;
    		}
    	}

    	if(alr_sorted){

    		cout<<0<<endl;
    	}
    	else{

    		int max_val=INT_MIN;
    		for(int i=0;i<v1.size()-1;i++){

	    		if(v1[i]>v1[i+1]){
	    			
	    			if(v1[i]>max_val){
	    				max_val=v1[i];
	    			}
	    		}
    		}

    		cout<<max_val<<endl;

    	}

    	t--;
    }

    return 0;
}