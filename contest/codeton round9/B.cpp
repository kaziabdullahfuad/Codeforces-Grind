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

    	string s;
    	cin>>s;

    	int n=s.size();

    	if(n==1){
    		cout<<-1<<endl;
    	}
    	else if(n==2){

    		if(s[0]==s[1]){
    			cout<<s[0]<<s[1]<<endl;
    		}
    		else{
    			cout<<-1<<endl;
    		}
    	}
    	else{

    		// 2 ta shoman ki na dekho
    		bool found=false;
    		string holder;
    		for(int i=0;i<n-1;i++){

    			if(s[i]==s[i+1]){


    				found=true;
    				holder+=s[i];
    				holder+=s[i];
    				break;
    			}
    		}

    		//debug(holder)

    		if(found){

    			cout<<holder<<endl;
    		}
    		else{

    			// try to find 3 distinct char

    			for(int i=0;i<n-2;i++){

    				//cout<<s[i]<<" "<<s[i+1]<<" "<<s[i+2]<<endl;

    				if(s[i]!= s[i+1] && s[i]!=s[i+2] && s[i+1]!=s[i+2]){
    					found=true;
    					holder+=s[i];
    					holder+=s[i+1];
    					holder+=s[i+2];
    					break;
    				}
    			}

    			if(found){
    				cout<<holder<<endl;
    			}
    			else{
    				cout<<-1<<endl;
    			}
    		}
    	}

    	t--;
    }

    return 0;
}