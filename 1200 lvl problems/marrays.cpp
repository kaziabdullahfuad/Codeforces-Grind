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

    	ll n,m;
    	cin>>n>>m;
    	vector<ll> v1(n);
    	map<ll,ll> m1;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		m1[v1[i]%m]++;
    	}
    	
    	//printVector(v1);

    	

    	ll till=m/2;
    	ll count=0;
    	for(int i=0;i<=till;i++){

    		if(i==0){

    			if(m1.find(i)!=m1.end()){

    				n-=m1[i];
    				count++;
    			}
    		}
    		else{

    			//cout<<i<<" "<<m-i<<endl;
    			if(m1.find(i)!=m1.end()){

    				// atar opposite ase ki na
    				ll rem=m-i;
    				// remain can be equals to i itself

    				if(rem==i){
    					//cout<<"HERE "<<i<<" "<<rem<<endl;
    					count++;
    					n-=m1[i];
    				}
    				else if(m1.find(rem)!=m1.end()){

    					if(m1[i]==m1[rem]){

    						count++;
    						n-=m1[i]*2;
    					}
    					else{
    						// ekta choto ekta boro

    						ll min_val=min(m1[i],m1[rem]);

    						if(min_val==1){

    							count++;
    							n-=3;
    						}
    						else{
    							// 1 ar beshi
    							count++;
    							n-=(min_val+1)+min_val;
    						}
    					}
    				}
    			}
    		}

    		//cout<<i<<" "<<n<<" "<<count<<endl;
    	}

    	//cout<<n<<endl;
    	count+=n;
    	cout<<count<<endl;

    	t--;
    }

    return 0;
}