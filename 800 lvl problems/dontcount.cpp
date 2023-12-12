//problem link:https://codeforces.com/problemset/problem/1881/A
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

    int operations=0;
    bool found=false;
    int t;
    cin>>t;
    while(t){
        int n,m;
        cin>>n>>m;
        string x;
        string s;
        cin>>x>>s;
        string holder;
        operations=0;
        for(int i=1;i<=6;i++){
            found=false;
            string holder;
            //cout<<x<<endl;
            for(int j=0;j<x.size();j++){

            holder="";
            int dist=x.size()-j;
            //cout<<dist<<endl;
            if(dist>=s.size()){
                holder.append(x,j,s.size());
                //cout<<holder<<endl;
                //cout<<holder<<endl;

                    if(holder==s){
                        found=true;
                        //cout<<"YES"<<endl;
                        break;
                    }
                }
            }
            if(found==true){
                //cout<<operations<<endl;
                //cout<<holder<<endl;
                //cout<<holder<<endl;
                break;
            }
            else{
                x+=x;
                operations++;
            }
        }
        //cout<<holder<<endl;
        if(found){
            //cout<<"YES"<<endl;
            cout<<operations<<endl;
            //cout<<"HELLO"<<endl;
            //cout<<holder<<endl;            
        }
        else{
            //cout<<"NO"<<endl;
            cout<<-1<<endl;
        }
        t--;
    }

    return 0;
}