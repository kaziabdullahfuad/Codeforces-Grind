//problem link:https://codeforces.com/problemset/problem/1864/A
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

    	int x,y,n;
    	cin>>x>>y>>n;
    	vector<int> holder(n);
    	holder[0]=x;
    	holder[n-1]=y;
    	int val=y-1;
    	int start=2;
    	for(int i=holder.size()-2;i>=1;i--){

    		holder[i]=val;
    		val-=start;
    		start++;
    	}
    	
    	bool found=true;
    	int prev_div=INT_MAX;
    	for(int i=0;i<holder.size()-1;i++){

    		int diff=holder[i+1]-holder[i];
    		//cout<<diff<<endl;
    		if(diff>=prev_div){
    			found=false;
    			break;
    		}
    		prev_div=diff;
    	}

    	if(found){
    		//cout<<"YES"<<endl;
    		for(auto x:holder){
    		cout<<x<<" ";
    		}
    		cout<<endl;

    	}
    	else{
    		
    		cout<<-1<<endl;
    	}

    	t--;
    }

    return 0;
}