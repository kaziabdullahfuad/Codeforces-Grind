//problem link:https://codeforces.com/problemset/problem/1853/A
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

    	for(int i=0;i<v1.size();i++){
    		cin>>v1[i];
    	}

    	// check if array already sorted

    	bool alr_sorted=true;

    	for(int i=0;i<v1.size()-1;i++){

    		if(v1[i]>v1[i+1]){
    			alr_sorted=false;
    			break;
    		}
    	}

    	if(alr_sorted==false){
    		cout<<0<<endl;
    	}
    	else{

    		int min_val=INT_MAX;
    		int diff;
    		int first,second;
    		for(int i=0;i<v1.size()-1;i++){
    			
    			if(v1[i]<=v1[i+1]){

    				diff=v1[i+1]-v1[i];
    			}

    			if(diff<min_val){
    				first=v1[i];
    				second=v1[i+1];
    				min_val=diff;

    			}
    		}
    		//cout<<min_val<<endl;
    		int mid_val=(first+second)/2;

    		if(min_val==0){
    			cout<<1<<endl;
    		}
    		else{
    			
    			cout<<abs(mid_val-first)+1<<endl;
    		}


    	}

    	t--;
    }

    return 0;
}