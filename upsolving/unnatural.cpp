// problem link:https://codeforces.com/contest/1915/problem/D
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

    int t;
    cin>>t;

    while(t){

    	int n;
    	cin>>n;

    	string s;
    	cin>>s;

    	string holder;
    	for(int i=n-1;i>=0;i--){

    		// cout<<i<<endl;
    		// cout<<holder<<endl;
    		if(s[i]=='a' || s[i]=='e'){

    			// go two rounds
    			int go_till=i-1;

    			if(go_till>=0){

    				for(int j=i;j>=go_till;j--){
    					holder.push_back(s[j]);
    				}
    				holder.push_back('.');
    				i=go_till;
    			}
    		}
    		else{

    			// go threee rounds
    			int go_till=i-2;

    			if(go_till>=0){

    				for(int j=i;j>=go_till;j--){
    					holder.push_back(s[j]);
    				}
    				holder.push_back('.');
    				i=go_till;
    		}
    	}
    }
    //cout<<holder<<endl;

    if(holder[holder.size()-1]=='.'){
    	holder.pop_back();
    }

    reverse(holder.begin(),holder.end());



    cout<<holder<<endl;



    	t--;
    }

    return 0;
}