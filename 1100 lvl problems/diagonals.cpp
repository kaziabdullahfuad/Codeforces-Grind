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

    	ll n,k;
    	cin>>n>>k;

    	if(k==0){
    		cout<<0<<endl;
    	}
    	else if(k>=n*n){

    		cout<<(2*n)-1<<endl;
    	}
    	else{

    		ll count=0;
    		for(int i=n;i>=1;i--){

    			if(i==n){

    				if(k==i){
    					count++;
    					k-=n;
    					break;
    				}
    				else if(k<i){

    					count++;
    					break;
    				}
    				else if(k>i){

    					k-=i;
    					count++;
    				}
    			}
    			else{

    				// 4 hole 3 te ase

    				if(k==i){

    					count++;
    					break;
    				}
    				else if(k<i){

    					count++;
    					break;
    				}
    				else if(k>i){

    					k-=i;
    					count++;
    				}

    				if(k==i){

    					count++;
    					break;
    				}
    				else if(k<i){

    					count++;
    					break;
    				}
    				else if(k>i){

    					k-=i;
    					count++;
    				}
    			}
    		}

    		cout<<count<<endl;
    	}

    	t--;
    }

    return 0;
}