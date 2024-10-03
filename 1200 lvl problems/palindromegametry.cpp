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

    	// is a palindrome and containst at least 1 zero
    	string s;
    	cin>>s;

    	// starting a palindrome so you have to spend
    	// if it's not a palindrome
    	//cout<<s<<endl;
    	if(n==1){
    		cout<<"BOB"<<endl;
    	}
    	else if(n%2==0){
    		cout<<"BOB"<<endl;
    	}
    	else{

    		int one=0;
    		int zero=0;

    		for(int i=0;i<n;i++){

    			if(s[i]=='0'){
    				zero++;
    			}
    			else{
    				one++;
    			}
    		}

    		if(one==0){

    			cout<<"ALICE"<<endl;
    		}
    		else{
    			cout<<"BOB"<<endl;
    		}
    	}


    	t--;
    }

    return 0;
}