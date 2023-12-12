//problem link:https://codeforces.com/problemset/problem/1882/A
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
    	vector<ll>v1(n);
    	vector<ll>holder;
    	for (int i = 0; i < n; ++i)
    	{
    		/* code */
    		cin>>v1[i];
    	}
    	ll val=1;
    	for(int i=0;i<v1.size();i++){

    		if(val==v1[i]){
    			val+=1;
    			holder.push_back(val);
    		}
    		else{
    			holder.push_back(val);
    		}
    		val++;

    	}

    	// for(auto x:holder){
    	// 	cout<<x<<" ";
    	// }
    	//cout<<endl;
    	cout<<holder[holder.size()-1]<<endl;


    	t--;
    }

    return 0;
}