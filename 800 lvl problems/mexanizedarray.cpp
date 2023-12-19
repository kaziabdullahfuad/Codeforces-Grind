//problem link:https://codeforces.com/problemset/problem/1870/A
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

    	int n,k,x;
    	cin>>n>>k>>x;

    	int diff=abs(k-x);

    	if(k>n){
    		cout<<-1<<endl;
    	}
    	else if(k>x && diff>1){
    		cout<<-1<<endl;
    	}
    	else{

    		ll sum=0;
    		if(k==x){

    			for(int i=0;i<n;i++){

    				if(i<k){
    					sum+=i;
    				}
    				else{
    					sum+=(x-1);
    				}
    			}
    		}
    		else{

    			for(int i=0;i<n;i++){
    				//cout<<i<<endl;
    				if(i<k){
    					sum+=i;
    				}
    				else{
    					sum+=x;
    				}
    				//cout<<sum<<endl;
    			}
    		}
    		cout<<sum<<endl;
    	}

    	t--;
    }

    return 0;
}