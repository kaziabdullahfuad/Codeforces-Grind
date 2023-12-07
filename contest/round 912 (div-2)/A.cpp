#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){
        ll n;
        cin>>n;
        ll k;
        cin>>k;
        bool holder=true;
        vector<ll>v1;
        for(int i=0;i<n;i++){
            ll val;
            cin>>val;
            v1.push_back(val);
        }

        //ll first=v1[0];
        for(int i=1;i<v1.size();i++){

            if(v1[i]<v1[i-1]){
                holder=false;
                break;
            }
        }   

        if(k==1){

            if(holder){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
        }


    	t--;
    }
   

    return 0;
}