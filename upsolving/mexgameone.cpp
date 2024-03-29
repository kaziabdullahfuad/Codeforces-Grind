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
// Comparator function to sort pairs 
// according to second value 
bool cmp(pair<string, int>& a, 
        pair<string, int>& b) 
{ 
    return a.second < b.second; 
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
    	set<ll> s1;
    	map<ll,ll> m1;

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		s1.insert(v1[i]);
    		m1[v1[i]]++;
    	}
    	
    	// array ar mex amni ber koro
    	ll arraymex;

    	for(int i=0;i<=n;i++){

    		if(s1.find(i)==s1.end()){
    			arraymex=i;
    			break;
    		}
    	}

    	if(arraymex==0){
    		cout<<0<<endl;
    	}
    	else{

    		// first a nibo then delete hobe
            // so 2 ta thakle always nite parbo jeta katbe oitai nibo
            // ex 00 11 22 0 nilam pore 1 katle 1 nibo tarpor 2 katle 2 nibo
            // arekt ex: 0 1 so ekta thakle duita ekta 0 nibo 1 shathe shathe kata

            ll mex;
            ll holder;
            bool missing=false;
            bool ekpaisi=false;
            for(int i=0;i<=n;i++){

                if(m1[i]==0){
                    missing=true;
                    mex=i;
                    break;
                }
                else if(m1[i]==1){
                    ekpaisi=true;
                    holder=i;
                    break;
                }
            }

            if(missing){
                cout<<mex<<endl;
            }
            else{


                holder++;
                //debug(holder)

                for(int i=holder;i<=n;i++){

                if(m1[i]==0){
                    missing=true;
                    mex=i;
                    break;
                }
                else if(m1[i]==1){
                    ekpaisi=true;
                    mex=i;
                    break;
                }
            }
            cout<<mex<<endl;


            }

    	}


    	t--;
    }

    return 0;
}