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

    	//cout<<"Bismillah"<<endl;

    	ll n,d;
    	cin>>n>>d;

    	vector<ll> ans;
    	ans.push_back(1);

    	for(int i=3;i<=9;i+=2){

    		int r=1; 
    		int val=d;
    		bool found=true;
    		//debug(i)
    		while(val%i){

    			val*=10ll;
    			val+=d;
    			r++;

    			if(r>=i+1){
    				found=false;
    				break;
    			}
    		}

    		if(found){

    			//debug(r)

    			if(n>=r){
    				ans.push_back(i);
    			}
    			else{

    				// calculate the factorial
    				ll fact=1;
    				for(int i=1;i<=n;i++){

    					fact*=i;
    				}
    				//debug(fact)
    				if(fact%r==0){
    					ans.push_back(i);
    				}

    			}
    		}
    	}

    	printVector(ans);



    	t--;
    }

    return 0;
}