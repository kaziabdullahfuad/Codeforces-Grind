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

    // string x="eforc";
    // string s="force";

    // string holder;
    // //holder.append(x,6,5);
    // cout<<holder<<endl;
    // if(holder==s){
    //     cout<<"YES"<<endl;
    // }
    // else{
    //     cout<<"NO"<<endl;
    // }

    // for(int i=0;i<3;i++){

    //     cout<<x<<endl;
    //     x+=x;
    // }
    //string holder;
    //holder.append(x,3,42); 
    //cout<<holder<<endl;
    // string mango="abcde";
    // string ango;
    // ango.append(mango,1,3);
    // cout<<ango<<endl;

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
        for(int i=1;i<=5;i++){
            found=false;
            string holder;
            cout<<x<<endl;
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
            cout<<"NO"<<endl;
        }
        t--;
    }
    

    // for(int i=0;i<x.size();i++){
    //     bool found=true;

    //     int dist=x.size()-i;

    //     if(dist>=s.size()){

    //         int hold=i;
    //         int use=i;
    //         for(int j=0;j<s.size();j++){

    //             if(x[hold]!=s[j]){
    //                 found=false;
    //                 break;
    //             }
    //             hold++;
    //         }
    //         if(found==true){
    //             cout<<"YES"<<endl;
    //             int len=use+5;
    //             cout<<use<<endl;
    //             for(int test=use;test<len;test++){
    //                 cout<<x[test]<<" ";
    //             }
    //         }
    //     }
    //     else{
    //         found=false;
    //     }
    // }

    // int sum=12;
    // int max_val=4;

    // do{
    // 	if(sum>max_val)
    // 		max_val=sum;

    // 	sum=0;
    // 	cout<<sum<<endl;
    // 	cout<<max_val<<endl;

    // 	cin>>sum;
    // }
    // while(sum>max_val);

    return 0;
}