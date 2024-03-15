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

    	if(n%25==0){
    		cout<<0<<endl;
    	}
    	else{

    		string s;
    		s=to_string(n);

    		int len=s.size();

    		int start=len-1;
    		int cur=0;
    		int right=0;
    		int rem=0;
    		while(s[start]>1){

    			if(s[start]=='0'){
    				right=start;
    				break;
    			}
    			rem++;
    			start--;
    		}

    		//cout<<right<<endl;
    		//cout<<rem<<endl;

    		int another=right-1;

    		while(s[another]>=0){

    			if(s[another]=='5' || s[another]=='0'){
    				break;
    			}
    			rem++;
    			another--;
    		}
    		int min_val=1e9;


    		if(another>=0){
    			min_val=min(min_val,rem);
    		}
    		start=len-1;
    		rem=0;
    		while(s[start]>1){

    			if(s[start]=='5'){
    				right=start;
    				break;
    			}
    			rem++;
    			start--;
    		}

    		//cout<<right<<endl;
    		//cout<<rem<<endl;

    		another=right-1;

    		while(s[another]>=0){

    			if(s[another]=='2' || s[another]=='7'){
    				break;
    			}
    			rem++;
    			another--;
    		}
    		


    		if(another>=0){
    			min_val=min(min_val,rem);
    		}

    		cout<<min_val<<endl;

    		
    	}

    	t--;
    }

    return 0;
}