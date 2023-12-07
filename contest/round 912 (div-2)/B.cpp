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

        vector<vector<ll>> v1;
        int n;
        cin>>n;


        for(int i=0;i<n;i++){

            vector<ll> holder;

            for(int j=0;j<n;j++){
                ll val;
                cin>>val;
                holder.push_back(val);
            }

            v1.push_back(holder);
        }

        for(auto row:v1){

            for(auto col:row){
                cout<<col<<" ";
            }
            cout<<endl;
        }
        

    	t--;
    }
   

    return 0;
}