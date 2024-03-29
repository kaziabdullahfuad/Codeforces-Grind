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

   

    	string s;
    	cin>>s;
    	ll n=s.size();
    	//char holder=52;
    	//cout<<holder<<endl;
    	// s=99223 tahole 00223 pai. now 9 ki avoid korbo naki just 223 dekhabo
    	// 9 avoid korleo laav nai 223 dekhabo just

    	// arekta test case s=9922399

    	// test=91730629 ans=1230320
    	bool non_zero=false;

    	if(n==1){

    		int x=s[0]-48;

    		if(x==9){
    			cout<<9<<endl;
    		}
    		else if(x>=5){
    			cout<<9-x<<endl;
    		}
    		else{
    			cout<<x<<endl;
    		}
    	}
    	else{

    		if(s[0]=='9'){

    			for(int i=1;i<n;i++){

    				int x=s[i]-48;
    				//cout<<x<<endl;
    				if(x>=5){
    					x=9-x;
    					s[i]=x+48;

    				}
    			}

    			cout<<s<<endl;
    		}
    		else{

    			for(int i=0;i<n;i++){

    				int x=s[i]-48;
    				//cout<<x<<endl;
    				if(x>=5){
    					x=9-x;
    					s[i]=x+48;

    				}
    			}

    			cout<<s<<endl;
    		}

    	}

    	

    return 0;
}