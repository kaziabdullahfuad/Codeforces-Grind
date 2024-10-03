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

    	ll a,b;
    	cin>>a>>b;

    	if(a%2==0 && b%2==0){
    		cout<<"YES"<<endl;
    	}
    	else if(a%2==0 && b%2==1){
    		//cout<<"EKHANE"<<endl;
    		
    		// even banai felo 2 ta pair diye
    		if(a==0){
    			cout<<"NO"<<endl;
    		}
    		else{

    			cout<<"YES"<<endl;
    		}
    	}
    	else if(a%2==1 && b%2==0){
    		cout<<"NO"<<endl;
    	}
    	else if(a%2==1 && b%2==1){
    		cout<<"NO"<<endl;
    	}
    	else{

    		ll total=(a*1)+(b*2);
    		//cout<<total<<endl;
    		//cout<<"EKHANE"<<endl;
    		if(total%2==0){
    			cout<<"YES"<<endl;
    		}
    		else{
    			cout<<"NO"<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}