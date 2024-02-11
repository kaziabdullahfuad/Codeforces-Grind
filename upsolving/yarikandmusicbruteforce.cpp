// problem link:https://codeforces.com/contest/1899/problem/D
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
         vector<ll> holder;

        for(int i=0;i<n;i++){
            cin>>v1[i];
            holder.push_back(pow(2,v1[i]));
            
        }

        for(auto x:holder)
            cout<<x<<" ";

        cout<<endl;
        ll count=0;

        for(int i=0;i<n-1;i++){
            

            for(int j=i+1;j<n;j++){
                
                //cout<<holder[i]<<" "<<holder[j]<<endl;
                //cout<<i<<" "<<j<<endl;
                ll first=pow(holder[i],holder[j]);
                ll second=pow(holder[j],holder[i]);
                //cout<<first<<" "<<second<<endl;
                if(first==second){
                    cout<<holder[i]<<" "<<holder[j]<<endl;
                    cout<<first<<" "<<second<<endl;
                    count++;
                }

            }
            //cout<<endl;
        }

       cout<<"TOTAL COUNT: "<<count<<endl;


        t--;
    }
   	

    return 0;
}