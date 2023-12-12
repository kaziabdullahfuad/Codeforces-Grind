//problem link:https://codeforces.com/problemset/problem/1883/A
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

    	string s;
    	cin>>s;
    	vector<int> v1;

    	for(int i=0;i<s.size();i++){

    		v1.push_back(s[i]-'0');
    	}
    	int pos=1;
    	ll sum=0;
    	for(int i=0;i<v1.size();i++){

    		if(v1[i]==0){
    			ll diff=abs(pos-10);
    			diff++;
    			sum+=diff;
    			pos=10;
    		}
    		else{
    			ll diff=abs(pos-v1[i]);
    			diff++;
    			sum+=diff;
    			pos=v1[i];
    		}
    		//cout<<sum<<endl;
    	}
    	cout<<sum<<endl;

    	t--;
    }

    return 0;
}