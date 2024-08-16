#include<iostream>
#include<numeric>
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

    	ll no_zero=0;
    	ll no_one=0;

    	for(int i=0;i<n;i++){

    		if(s[i]=='0'){
    			no_zero++;
    		}
    		else{
    			no_one++;
    		}
    	}
    	//cout<<no_one<<" "<<no_zero<<endl;
    	if(no_one>no_zero){
    		cout<<"Yes"<<endl;
    	}
    	else{

    		// 00 gula ekshathe decrease
    		// 01 ba 10 decrease kore laav nai tahole 1 kombe

    		string holder="";

    		//cout<<s<<endl;
    		char start=s[0];
    		ll first=0;
    		holder+=s[0];

    		for(int i=1;i<n;i++){

    			if(s[i]=='1'){

    				holder+=s[i];
    				first++;
    			}
    			else if(s[i]=='0' && holder[first]=='1'){
    				holder+=s[i];
    				first++;
    			}
    		}



    		//cout<<holder<<endl;
    		no_zero=0;
    		no_one=0;
    		for(int i=0;i<holder.size();i++){

    			if(holder[i]=='0'){
    				no_zero++;
    			}
    			else{
    				no_one++;
    			}
    		}
    		//cout<<no_one<<" "<<no_zero<<endl;
    		if(no_one>no_zero){
    			cout<<"Yes"<<endl;
    		}
    		else{
    			cout<<"No"<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}