// problem link:https://codeforces.com/problemset/problem/1898/A
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

    	int n,k;
    	cin>>n>>k;

    	string s;
    	cin>>s;

    	int no_a=0;
    	int no_b=0;

    	for(int i=0;i<s.size();i++){

    		if(s[i]=='A'){
    			no_a++;
    		}
    		else{
    			no_b++;
    		}
    	}

    	if(no_b==k){
    		// b==k so no operations required
    		cout<<0<<endl;
    	}
    	else if(no_b<k){

    		//no of b is less than k so we need to change

    		char c='B';
    		int target=k-no_b;
    		int start=1;

    		for(int i=0;i<s.size();i++){

    			if(target==0){
    				break;
    			}

    			if(s[i]=='A'){
    				s[i]='B';
    				target--;
    				start=i;
    			}
    		}
    		start++;
    		cout<<1<<endl;
    		cout<<start<<" "<<c<<endl;

    	}
    	else if(no_b>k){

    		// cout<<no_a<<endl;
    		// cout<<no_b<<endl;

    		int target=no_b-k;
    		int start=1;
    		char c='A';
    		for(int i=0;i<s.size();i++){

    			if(target==0){
    				break;
    			}

    			if(s[i]=='B'){
    				s[i]='A';
    				target--;
    				start=i;
    			}
    		}
    		
    		start++;
    		cout<<1<<endl;
    		cout<<start<<" "<<c<<endl;

    	}



    	t--;
    }

    return 0;
}