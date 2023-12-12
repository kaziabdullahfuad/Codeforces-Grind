//problem link:https://codeforces.com/problemset/problem/1890/A
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

    	bool shob_ek=true;

    	for(int i=0;i<v1.size()-1;i++){

    		if(v1[i]!=v1[i+1]){
    			shob_ek=false;
    			break;
    		}
    	}

    	if(n==2){
    		cout<<"YES"<<endl;
    	}
    	else if(shob_ek){
    		cout<<"YES"<<endl;
    	}
    	else{
    		sort(v1.begin(),v1.end());
    		int first;
    		int second;
    		
    		unordered_map<int,int> m1;

    		for(int i=0;i<v1.size();i++){

    			m1[v1[i]]++;
    		}
    		
    		if(m1.size()>2){
    			cout<<"NO"<<endl;
    		}
    		else{

    			int start=1;
    			for(auto x: m1){

    				if(start==1){
    					first=x.second;
    				}
    				else{
    					second=x.second;
    				}
    				start++;
    				// cout<<x.first<<" "<<x.second<<endl;
    			}
    			// cout<<first<<endl;
    			// cout<<second<<endl;

    			if(v1.size()%2==0){

    				if(first==second){
    					cout<<"YES"<<endl;
    				}
    				else{
    					cout<<"NO"<<endl;
    				}
    			}
    			else{

    				int div=v1.size()/2;
    				int left=v1.size()-div;

    				if((first==div && second==left) || (second==div && first==left)){
    					cout<<"YES"<<endl;
    				}
    				else{
    					cout<<"NO"<<endl;
    				}
    			}
    		}

    		
    	}

    	t--;
    }

    return 0;
}