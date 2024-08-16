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
    	char c;
    	cin>>c;

    	string s;
    	cin>>s;

    	if(c=='g'){
    		cout<<0<<endl;
    	}
    	else if(s[n-1]=='g'){

    		//nd baki shob r ba y age
    		// tahole proti r ba y ar kacher g ber koro

    		// 01234567 first r ar dis 4-0=4,  7-5=2. 7+1=8
    		// rrrrgrrg 4 tai hobe
    		ll max_dis=-1;

    		for(int i=0;i<n;i++){

    			if(s[i]==c){

    				ll j=i;
    				//debug(i)
    				bool found=false;

    				for(j=i;j<n;j++){

    					if(s[j]=='g'){
    						found=true;
    						break;
    					}
    				}
    				
    				if(found){
    					ll dis=j-i;
    					//debug(dis)
    					max_dis=max(max_dis,dis);
    				}
    				i=j;
    			}
    		}

    		cout<<max_dis<<endl;
    	}
    	else{

    		ll max_dis=-1;
    		// ager part to thakbei
    		// plus last green ar por jei firstr red ba yellow thakbe
    		// tar shathe first green ar distance koto
    		bool first=false;
    		ll first_index=0;
    		for(int i=0;i<n;i++){


    			if(s[i]=='g'){
    				first_index=i;
    				break;
    			}
    			
    		}

    		for(int i=0;i<n;i++){


    		
    			if(s[i]==c){

    				ll j=i;
    				//debug(i)
    				bool found=false;
    				for(j=i;j<n;j++){

    					if(s[j]=='g'){
    						found=true;
    						break;
    					}
    				}
    				if(found){
    					ll dis=j-i;
    					//debug(dis)
    					max_dis=max(max_dis,dis);
    				}
    				
    				i=j;
    			}
    		}
    		bool found=false;
    		ll index=n-1;
    		for(int i=n-1;i>=0;i--){

    			if(s[i]=='g'){
    				break;
    			}
    			else if(s[i]==c){
    				found=true;
    				index=i;
    				//break;
    			}
    		}
    		//debug(max_dis)
    		//cout<<index<<endl;
    		//cout<<first_index<<endl;
    		if(found){
    			//ll new_dis=(n-1)-index+(first_index+1);
    			ll new_dis=n-index+first_index;
    			max_dis=max(max_dis,new_dis);
    			
    		}
    		//debug(max_dis)
    		cout<<max_dis<<endl;
    	}

    	t--;
    }

    return 0;
}