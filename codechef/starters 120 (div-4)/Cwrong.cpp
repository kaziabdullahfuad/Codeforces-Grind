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

    	ll x,y;
    	cin>>x>>y;
    	// debug(x);
    	// debug(y);
    	// cout<<"START"<<endl;
    	ll temp=0;
    	while(x){

    		if(x>y){
    			temp=x;
    			x=x-y;
    			y=temp;
    		}
    		else{
    			if(x+x==y){
    				break;
    			}
    			temp=y-x;
    			
    			//cout<<temp<<endl;
    			//debug(temp);
    			y=x;
    			x=temp;


    		}
    		 //debug(x);
    		 //debug(y);
    	}

    	//cout<<"END"<<endl;

    	//debug(x);
    	//debug(y);
    	cout<<x<<endl;

    	t--;
    }

    return 0;
}