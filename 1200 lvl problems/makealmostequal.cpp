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
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	// all ai are distinct so we good for n=2
    	
    	if(n==2){

    		// duita hole max value ar one beshi
    		// tahole baki oi dui value tai thakbe

    		ll max_val=max(v1[0],v1[1]);

    		cout<<max_val+1ll<<endl;
    	}
    	else{

    		// lets see odd and even koita
    		// if even and odd ase tahole simply we take 2
    		// since 2->0,1 porjonto so even gula zero and odd gula 1

    		ll even=0;
    		ll odd=0;

    		for(int i=0;i<n;i++){

    			if(v1[i]%2==0){
    				even++;
    			}
    			else{
    				odd++;
    			}
    		}

    		if(even==0 || odd==0){
    			// all odds
    			// all even hole 4 hobe karon
    			// 4->0,1,2,3 and even value gula 0 ba 2 te mod hobe
    			// jemon 4,6,8,12 hocche 0,2,0,2

    			// abar all odd hole then o 4 hobe karon
    			// value gula 1 ba 3 hobe jemon
    			// 3,5,7,13 hole-> 3,1,3,1
    			//cout<<even<<" "<<odd<<endl;
    			//cout<<4<<endl;
    			// now ager idea te vul ase
    			// amon o hote pare je 4 ar shob gula single value
    			// such as 4,8,12 tahole shob 0 ashbe
    			// kintu 8 ar khetre ata mod korle ashbe 4,0,4
    			ll ans=4;
    			//cout<<"HERE"<<endl;
    			for(ll i=2;i<=62;i++){
    				bool found=false;
    				ans=(1ll<<i);
    				set<ll> s1;
    				//debug(ans)
    				for(int j=0;j<n;j++){

    					//debug(v1[j])
    					ll mod_val=v1[j]%ans;
    					//debug(mod_val)
    					s1.insert(mod_val);

    				}

    				if(s1.size()==2){
    					found=true;


    				}
    				if(found){
    					break;
    				}
    			}
    			//debug(ans)
    			cout<<ans<<endl;
    		}
    		else{

    			// even and odd duitai ase

    			// simply 2 ans
    			cout<<2<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}