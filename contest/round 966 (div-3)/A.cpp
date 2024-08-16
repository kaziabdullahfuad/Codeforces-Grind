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

    	if(n<100){
    		cout<<"NO"<<endl;
    	}
    	else{

    		string hold=to_string(n);
    		//cout<<hold<<endl;

    		string temp;
    		temp+=hold[0];
    		temp+=hold[1];
    		//cout<<temp<<endl;

    		if(temp=="10"){

    			int val=hold[2]-'0';
    			//cout<<val<<endl;

    			ll temp=n%100;
    			//debug(temp)

    			if(val==0){
    				cout<<"NO"<<endl;
    			}
    			else{

    				if(temp>=2){
    					cout<<"YES"<<endl;
    				}
    				else{
    					cout<<"NO"<<endl;
    				}


    			}

    		}
    		else{
    			cout<<"NO"<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}