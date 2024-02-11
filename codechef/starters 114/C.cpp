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
    	map<ll,ll> m1;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		m1[v1[i]]=i;
    	}


        // two pointer technique
    	
        if(v1[0]==n){
            cout<<n-1<<endl;
        }
        else{

            int l=0;
            int r=1;
            ll count=0;
            while(l<=r && r<n){

                if(v1[r]>v1[l]){
                    l=r;
                    r++;
                }
                else{
                    count++;
                    r++;
                }
            }

            cout<<count<<endl;
        }

    	

    	t--;
    }

    return 0;
}