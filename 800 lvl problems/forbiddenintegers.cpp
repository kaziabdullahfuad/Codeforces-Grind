// problem link: https://codeforces.com/problemset/problem/1845/A
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

    	int n,k,x;
    	cin>>n>>k>>x;

    	if(k==1){
    		cout<<"NO"<<endl;
    	}
    	else if(x!=1){

    		cout<<"YES"<<endl;
    		cout<<n<<endl;
    		int start=1;
    		while(start<=n){
    			cout<<1<<" ";
    			start++;
    		}
    		cout<<endl;
    	}
    	else if(n==1){
    		cout<<"NO"<<endl;
    	}
    	else if(k==2 && n%2!=0){

    		cout<<"NO"<<endl;
    	}
    	else{

    		if(k==2){
    			if(n%2==0){

    				cout<<"YES"<<endl;
    				cout<<n/2<<endl;
    				int start=1;
		    		while(start<=n){
		    			cout<<2<<" ";
		    			start+=2;
		    		}
		    		cout<<endl;

    			}
    		}
    		else{

    			if(n%2==0){

    				cout<<"YES"<<endl;
    				cout<<n/2<<endl;
    				int start=1;
		    		while(start<=n){
		    			cout<<2<<" ";
		    			start+=2;
		    		}
		    		cout<<endl;

    			}
    			else{

    				//int no_three=n/3;
    				if(n%3==0){

    					cout<<"YES"<<endl;
    					int div_three=n/3;
    					cout<<div_three<<endl;
    					for(int i=0;i<div_three;i++){
    						cout<<3<<" ";
    					}
    					cout<<endl;
    				}
    				else if(n%3==1){

    					cout<<"YES"<<endl;
    					int div_two=n/2;
    					div_two--;
    					cout<<div_two+1<<endl;
    					for(int i=0;i<div_two;i++){
    						cout<<2<<" ";
    					}
    					cout<<3<<endl;
    				}
    				else if(n%3==2){

    					cout<<"YES"<<endl;
    					int div_three=n/3;
    					cout<<div_three+1<<endl;
    					for(int i=0;i<div_three;i++){
    						cout<<3<<" ";
    					}
    					cout<<2;
    					cout<<endl;

    				}

    			}

    		}
    	}

    	t--;
    }

    return 0;
}