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
    	vector<ll> v1(n);
    	ll sum=0;
    	map<ll,ll> m1;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		sum+=v1[i];
    		m1[v1[i]]++;
    	}
    	ll ans=0;
    	ll tri=0;
    	ll square=0;
    	ll penta=0;
    	ll hexagon=0;
    	ll heptagon=0;
    	ll octagon=0;
    	ll nona=0;
    	ll deca=0;
    	for(auto x:m1){
    		//cout<<x.first<<" "<<x.second<<endl;
    		if(x.second==3 && tri==0){
    			ans++;
    			tri++;
    		}
    		else if(x.second==4){
    			
    			if(square==0){
    				ans++;
    				square++;
    			}
    			else if(tri==0){
    				ans++;
    				tri++;
    			}
    		}
    		else if(x.second==5){
    			
    			// pentagon
    			if(penta==0){
    				ans++;
    				penta++;
    			}
    			else if(square==0){
    				ans++;
    				square++;
    			}
    			else if(tri==0){
    				ans++;
    				tri++;
    			}
    		}
    		else if(x.second==6){
    			
    			if(hexagon==0){
    				ans++;
    				hexagon++;
    			}
    			else if(penta==0){
    				ans++;
    				penta++;
    			}
    			else if(square==0){
    				ans++;
    				square++;
    			}
    			else if(tri==0){
    				ans++;
    				tri++;
    			}

    		}
    		else if(x.second==7){
    			if(heptagon==0){
    				ans++;
    				heptagon++;
    			}
    			else if(hexagon==0){
    				ans++;
    				hexagon++;
    			}
    			else if(penta==0){
    				ans++;
    				penta++;
    			}
    			else if(square==0){
    				ans++;
    				square++;
    			}
    			else if(tri==0){
    				ans++;
    				tri++;
    			}
    		}
    		else if(x.second==8){
    			
    			if(octagon==0){
    				ans++;
    				octagon++;
    			}
    			else if(heptagon==0){
    				ans++;
    				heptagon++;
    			}
    			else if(hexagon==0){
    				ans++;
    				hexagon++;
    			}
    			else if(penta==0){
    				ans++;
    				penta++;
    			}
    			else if(square==0){
    				ans++;
    				square++;
    			}
    			else if(tri==0){
    				ans++;
    				tri++;
    			}
    		}
    		else if(x.second==9){
    			//cout<<"EKHANE ASCHE"<<endl;
    			if(nona==0){
    				ans++;
    				//debug(ans)
    				nona++;
    			}
    			else if(octagon==0){
    				ans++;
    				octagon++;
    			}
    			else if(heptagon==0){
    				ans++;
    				heptagon++;
    			}
    			else if(hexagon==0){
    				ans++;
    				hexagon++;
    			}
    			else if(penta==0){
    				ans++;
    				penta++;
    			}
    			else if(square==0){
    				ans++;
    				square++;
    			}
    			else if(tri==0){
    				ans++;
    				tri++;
    			}
    			//debug(ans)
    		}
    		else if(x.second>=10){
    			if(deca==0){
    				ans++;
    				deca++;
    			}
    			else if(nona==0){
    				ans++;
    				nona++;
    			}
    			else if(octagon==0){
    				ans++;
    				octagon++;
    			}
    			else if(heptagon==0){
    				ans++;
    				heptagon++;
    			}
    			else if(hexagon==0){
    				ans++;
    				hexagon++;
    			}
    			else if(penta==0){
    				ans++;
    				penta++;
    			}
    			else if(square==0){
    				ans++;
    				square++;
    			}
    			else if(tri==0){
    				ans++;
    				tri++;
    			}
    		}

    	}
    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}