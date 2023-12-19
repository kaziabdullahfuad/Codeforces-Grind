// problem link:https://codeforces.com/problemset/problem/1850/B
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

    	int max_val=INT_MIN;
    	int index;
    	for(int i=0;i<n;i++){

    		int res,qual;
    		cin>>res>>qual;

    		if(res<=10 && qual>max_val){
    			max_val=qual;
    			index=i+1;
    		}
    	}

    	//cout<<max_val<<endl;
    	cout<<index<<endl;

    	t--;
    }

    return 0;
}