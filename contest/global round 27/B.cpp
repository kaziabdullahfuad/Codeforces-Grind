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

    	if(n==1 || n==3){
    		cout<<-1<<endl;
    	}
    	else{

    		if(n%2==0){

    			// 6-2=4
    			// 6=1,2,3,4
    			for(int i=1;i<=n-2;i++){

    				cout<<3;
    			}

    			cout<<66<<endl;
    		}
    		else{

    			for(int i=1;i<=n-5;i++){
    				cout<<3;
    			}

    			cout<<36366<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}