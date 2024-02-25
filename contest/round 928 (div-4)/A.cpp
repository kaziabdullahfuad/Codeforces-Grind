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

    	int a_val=0;
    	int b_val=0;

    	for(int i=0;i<s.size();i++){

    		if(s[i]=='A'){
    			a_val++;
    		}
    		else{
    			b_val++;
    		}
    	}

    	if(a_val>=b_val){

    		cout<<"A"<<endl;
    	}
    	else{
    		cout<<"B"<<endl;
    	}

    	t--;
    }

    return 0;
}