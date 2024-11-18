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

    	//debug(n)
    	if(n==2 || n==3 || n==4){
    		cout<<-1<<endl;
    	}
    	else{

    		if(n==5){

    			cout<<2<<" "<<4<<" "<<5<<" "<<3<<" "<<1<<endl;
    		}
    		else if(n==6){

    			cout<<2<<" "<<4<<" "<<6<<" "<<3<<" "<<1<<" "<<5<<endl;
    		}
    		else{

    			for(int i=n;i>=2;i--){

    				if(i%2==0){
    					cout<<i<<" ";
    				}
    			}
    			cout<<7<<" ";

    			for(int i=1;i<=n;i++){

    				if(i%2==1 && i!=7){
    					cout<<i<<" ";
    				}
    			}
    			cout<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}