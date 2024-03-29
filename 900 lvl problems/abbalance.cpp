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

    	string s;
    	cin>>s;

    	// find number of ab and ba

    	ll no_ab=0;
    	ll no_ba=0;

    	for(int i=0;i<s.size()-1;i++){

    		//cout<<s[i]<<" "<<s[i+1]<<endl;
    		if(s[i]=='a' && s[i+1]=='b'){
    			no_ab++;
    		}
    		else if(s[i]=='b' && s[i+1]=='a'){
    			no_ba++;
    		}
    	}

    	if((no_ab==0 && no_ba==0) || (no_ab==no_ba)){
    		cout<<s<<endl;
    	}
    	else if(no_ba==0){

    		// ab reo zero banao
    		for(int i=0;i<s.size()-1;i++){

	    		//cout<<s[i]<<" "<<s[i+1]<<endl;
	    		if(s[i]=='a' && s[i+1]=='b'){
	    			
	    			s[i]='b';
	    		}
	    		
    		}
    	}
    	else if(no_ab==0){

    		//ba re zero banao
    		
    	}

    	t--;
    }

    return 0;
}