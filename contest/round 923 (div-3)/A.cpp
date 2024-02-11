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

    	ll n;
    	cin>>n;
    	vector<char> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	if(n==1){

    		if(v1[0]=='B'){
    			cout<<1<<endl;
    		}
    		else{
    			cout<<0<<endl;
    		}
    	}
    	else{

    		ll first=0;
    		ll right=n-1;
    		bool f_found=false;
    		bool r_found=false;

    		for(int i=0;i<n;i++){

    			if(v1[i]=='B'){
    				f_found=true;
    				first=i;
    				break;
    			}
    		}

    		for(int i=n-1;i>=0;i--){

    			if(v1[i]=='B'){
    				r_found=true;
    				right=i;
    				break;
    			}
    		}

    		if(f_found==false && r_found==false){
    			cout<<0<<endl;
    		}
    		else if(first==right){

    			cout<<1<<endl;
    		}
    		else{

    			cout<<right-first+1<<endl;
    		}

    	}

    	t--;
    }

    return 0;
}