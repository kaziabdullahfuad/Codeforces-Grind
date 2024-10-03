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
    	
    	string s;
    	cin>>s;
    	vector<ll> v2(n+1);
    	//printVector(v2);
    	//printVector(v1);
    	//cout<<s<<endl;
    	map<ll,ll> m1;
    	for(int i=0;i<n;i++){

    		if(s[i]=='0'){

    			// tahole dekhte hobe ata theke reachable konta
    			set<ll> s1;
    			//debug(v1[i])
    			if(i+1==v1[i]){

    				// nijer dike targeted
    				v2[i+1]++;
    				m1[v1[i]]++;
    			}
    			else{

    				ll go_to=v1[i];
    				//debug(go_to)
    				ll count=0;
    				bool map_ase=false;
    				while(true){

    					//cout<<go_to<<" "<<v1[go_to-1]<<endl;
    					if(m1[v1[i]]>0){
    						map_ase=true;
    						break;
    					}
    					else if(s1.find(v1[go_to-1])!=s1.end()){
    						// mane pawa gese
    						break;
    					}
    					else{

    						// pawa jai nai
    						v2[v1[go_to-1]]++;
    						s1.insert(v1[go_to-1]);
    						if(s[go_to-1]=='0'){
    							//cout<<v1[go_to-1]<<" "<<s[go_to-1]<<endl;
    							count++;
    						}
    						go_to=v1[go_to-1];
    					}
    				}

    				if(!map_ase){

    					for(auto x:s1){

    						//cout<<x<<" ";
    						m1[x]=count;
    					}
    					//cout<<endl;
    				}

    				
    			}    			



    		}
    	}

    	// cout<<endl;
    	// printVector(v2);

    	for(int i=0;i<n;i++){

    		//cout<<v2[v1[i]]<<" ";
    		cout<<m1[v1[i]]<<" ";
    	}

    	cout<<endl;


    	t--;
    }

    return 0;
}