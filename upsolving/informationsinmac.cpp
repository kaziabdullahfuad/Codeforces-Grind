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
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	//printVector(v1);
    	
    	set<ll> s1;

    	for(int i=0;i<n;i++){
    		s1.insert(v1[i]);
    	}

    	// first missing value ta
    	ll mex=0;
    	for(ll i=0;i<=n;i++){

    		if(s1.find(i)==s1.end()){
    			mex=i;
    			break;
    		}
    	}

    	//debug(mex)

    	// at least duita segment a mex-1 thakte hobe
    	ll baki=2;

    	if(mex!=0){
    		baki=n/mex;
    	}
    	

    	if(baki<2){
    		cout<<-1<<endl;
    	}
    	else{

    		set<ll> s2;
    		ll temp;
    		for(int i=0;i<n;i++){

    			if(v1[i]<mex){
    				s2.insert(v1[i]);
    			}

    			if(s2.size()==mex){
    				temp=i;
    				break;
    			}
    		}
    		//debug(temp)
    		//cout<<s2.size()<<endl;
    		baki=n-temp-1;
    		//debug(baki)

    		if(baki<mex){
    			cout<<-1<<endl;
    		}
    		else{

    			bool found=false;
    			temp++;
    			set<ll> s3;
    			for(int i=temp;i<n;i++){

    				if(v1[i]<mex){
    					s3.insert(v1[i]);
    				}

    				if(s3.size()==mex){
    					found=true;
    					break;
    				}
    			}

    			if(found){

    				//temp--;
    				cout<<2<<endl;
    				//debug(temp)
    				cout<<1<<" "<<temp<<endl;

    				cout<<++temp<<" "<<n<<endl;
    				// for(int i=0;i<=temp;i++){
    				// 	cout<<v1[i]<<" ";
    				// }
    				// cout<<endl;
    				// temp++;

    				// for(int i=temp;i<n;i++){
    				// 	cout<<v1[i]<<" ";
    				// }
    				// cout<<endl;

    			}
    			else{
    				cout<<-1<<endl;
    			}
    		}



    	}

    	t--;
    }

    return 0;
}