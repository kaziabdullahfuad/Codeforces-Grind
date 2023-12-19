//problem link:https://codeforces.com/problemset/problem/1855/A
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

    	int collisions=0;
    	int val=1;
    	for(int i=0;i<v1.size();i++){

    		if(val==v1[i]){
    			collisions++;
    		}
    		val++;
    	}

    	int sum=0;

    	sum+=(collisions/2);

    	sum+=(collisions%2);

    	cout<<sum<<endl;

    	t--;
    }

    return 0;
}