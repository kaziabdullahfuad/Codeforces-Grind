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

    	ll n;
    	cin>>n;

    	string s;
    	cin>>s;
    	string y;
    	cin>>y;

    	ll no_cats=0;
    	ll need_cats=0;
    	for(ll i=0;i<s.size();i++){

    		if(s[i]=='1'){
    			no_cats++;
    		}
    		if(y[i]=='1'){
    			need_cats++;
    		}
    	}

    	//cout<<no_cats<<" "<<need_cats<<endl;
    	for(int i=0;i<n;i++){

    		if(s[i]=='1' && y[i]=='1'){
    			no_cats--;
    			need_cats--;
    		}
    	}
    	//cout<<no_cats<<" "<<need_cats<<endl;

    	if(no_cats==0 && need_cats==0){
    		//cout<<"HELLO"<<endl;
    		cout<<0<<endl;
    	}
    	else if(no_cats==need_cats){
    		//cout<<"HELLO"<<endl;
    		cout<<need_cats<<endl;
    	}
    	else if(no_cats>need_cats){
    		//cout<<"HELLO"<<endl;
    		ll sum=0;
    		sum+=need_cats;
    		no_cats=no_cats-need_cats;
    		sum+=no_cats;
    		cout<<sum<<endl;
    		
    	}
    	else{
    		//cout<<"HELLO"<<endl;
    		ll sum=0;
    		sum+=no_cats;
    		need_cats=need_cats-no_cats;
    		sum+=need_cats;
    		cout<<sum;
    		cout<<endl;
    	}


    	t--;
    }

    return 0;
}