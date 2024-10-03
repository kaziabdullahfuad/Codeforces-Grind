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

    	string temp(n,'1');
    	
    	//cout<<temp<<endl;

    	ll sum=0;
    	for(int i=0;i<n;i++){

    		if(s[i]=='0'){

    			ll adder=i+1;
    			ll index=i;
    			// debug(i)
    			// debug(index)
    			// debug(adder)
    			while(index<n && s[index]=='0'){

    				if(s[index]=='1'){
    					break;
    				}

    				if(temp[index]=='0'){

    				}
    				else{
    					sum+=adder;
    					temp[index]='0';
    				}
    				index+=adder;
    			}

    			//debug(sum)
    		}
    	}

    	cout<<sum<<endl;

    	t--;
    }

    return 0;
}