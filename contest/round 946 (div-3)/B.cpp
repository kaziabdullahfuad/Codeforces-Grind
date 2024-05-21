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
#define debug(x) cout<<#x<<":"<<x<<endl;
#define all(x) (x).begin(),(x).end()
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

    	ll n;
    	cin>>n;

    	string s;
    	cin>>s;

    	set<char> s1;

    	for(int i=0;i<n;i++){

    		s1.insert(s[i]);
    	}
    	vector<char> v1;
    	for(auto x:s1){
    		//cout<<x;
    		v1.push_back(x);
    	}
    	//cout<<endl;
    	//printVector(v1);

    	vector<char> hold(26,'-');
    	ll len=v1.size()-1;
    	ll left=0;
    	ll right=len;
    	map<char,char> m1;
    	while(left<right){

    		//cout<<v1[left]<<" "<<v1[right]<<endl;
    		m1[v1[left]]=v1[right];
    		left++;
    		right--;
    	}
    	//cout<<"HERE"<<endl;
    	map<char,char> m2;

    	for(auto x:m1){
    		//cout<<x.first<<" "<<x.second<<endl;

    		m2[x.second]=x.first;
    	}

    	for(int i=0;i<n;i++){

    		if(m1[s[i]]){

    			s[i]=m1[s[i]];
    		}
    		else if(m2[s[i]]){
    			s[i]=m2[s[i]];
    		}
    	}

    	cout<<s<<endl;

    	t--;
    }

    return 0;
}