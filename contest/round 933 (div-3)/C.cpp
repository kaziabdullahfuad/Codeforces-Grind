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
    	int count=0;
    	//cout<<s<<endl;
    	int del=0;
    	bool ektate=false;
    	int tester=0;
    	for(int i=0;i<n-2;i++){
    		//cout<<s[i]<<" ";
    		//debug(i)
    		//debug(s[i])
    		ektate=false;
    		if(s[i]=='m'){

    			if((n-i)>=5){

    				if(s[i+1]=='a' && s[i+2]=='p' && s[i+3]=='i' && s[i+4]=='e'){
    					//cout<<"ASCHE"<<endl;
    					count+=2;
    					del++;
    					i+=4;
    					//cout<<"NOTUN I"<<endl;
    					//debug(i)
    					ektate=true;
    					tester++;
    				}
    			}

    		}
    		if(s[i]=='m' && ektate==false){
    			//cout<<"AHO VATIJA"<<endl;
    			if(s[i+1]=='a' && s[i+2]=='p'){
    				count++;
    			}
    		}
    		if(s[i]=='p'){

    			if(s[i+1]=='i' && s[i+2]=='e'){
    				//cout<<"PIE PAISE"<<endl;
    				count++;
    			}
    		}
    	}

    	//debug(count)
    	//debug(del)

    	if(count==0){
    		cout<<0<<endl;
    	}
    	else{

    		cout<<count-del<<endl;
    	}

    	t--;
    }

    return 0;
}