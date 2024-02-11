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

    	ll n,k;
    	cin>>n>>k;

    	if(n%2==0 || n%k==0){
    		cout<<"YES"<<endl;
    	}
    	else{

    		if(k%2==0){

    			cout<<"NO"<<endl;
    		}
    		else{
    			cout<<"YES"<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}