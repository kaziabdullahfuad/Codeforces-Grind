#include<iostream>
#include<set>
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


    string s="12";
    // string holder="";
    // char first=s[0];
    // char second=s[1];
    // //holder+=first+second;
    // holder=holder+first+second;
    // cout<<holder<<endl;
    //ll val;
    ll val=stoi(s);
    cout<<val<<endl;
    // int t;
    // cin>>t;

    // while(t){

    //     int n;
    //     cin>>n;

    //     vector<int> v1(n);

    //     for(int i=0;i<n;i++){
    //         cin>>v1[i];
    //     }

    //     for(auto x:v1){
    //         cout<<x<<" ":
    //     }

    //     cout<<endl;

    //     t--;
    // }

    // set<int> s1;
    // vector<int> v1={3,1,0,1};

    // ll n;
    // cin>>n;

    // vector<pair<ll,ll>> v1; // paair

    // for(ll i=0;i<n;i++){

    //     ll val;
    //     cin>>val;
    //     // v1.push_back(make_pair(val,i));
    //     v1.push_back({val,i});
    // }

    // // for(auto x:v1){
    // //     cout<<x.first<<" "<<x.second<<endl;
    // // }

    // sort(v1.begin(),v1.end());

    // reverse(v1.begin(),v1.end());

    // for(auto x:v1){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    // ll hold=n;
    // vector<ll> keep(n);
    // for(int i=0;i<n;i++){

    //     keep[v1[i].second]=i+1;
    //     hold--;
    // }

    // for(auto x:keep){
    //     cout<<x<<" ";
    // }


    // int len=v1.size();

    // // // will show wrong since 0 is available later on
    // // for(int i=0;i<len;i++){
    // //     if(i!=v1[i]){
    // //         cout<<"not present: "<<i<<endl;
    // //         break;
    // //     }
    // // }

    // // use set insetead
    // for(int i=0;i<len;i++){
    //     //s1.insert(i);
    //     s1.insert(v1[i]);
    // }

    // for(int i=0;i<=len;i++){

    //     set<int>::iterator it;
    //     it=s1.find(i);
    //     //cout<<i<<endl;
    //     if(it==s1.end()){
    //         cout<<"The mex value is "<<i<<endl;
    //     }
        
    // }



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

    // int operations=0;
    // bool found=false;
    // int t;
    // cin>>t;
    // while(t){
    //     int n,m;
    //     cin>>n>>m;
    //     string x;
    //     string s;
    //     cin>>x>>s;
    //     string holder;
    //     for(int i=1;i<=5;i++){
    //         found=false;
    //         string holder;
    //         cout<<x<<endl;
    //         for(int j=0;j<x.size();j++){

    //         holder="";
    //         int dist=x.size()-j;
    //         //cout<<dist<<endl;
    //         if(dist>=s.size()){
    //             holder.append(x,j,s.size());
    //             //cout<<holder<<endl;
    //             //cout<<holder<<endl;

    //                 if(holder==s){
    //                     found=true;
    //                     //cout<<"YES"<<endl;
    //                     break;
    //                 }
    //             }
    //         }
    //         if(found==true){
    //             //cout<<operations<<endl;
    //             //cout<<holder<<endl;
    //             //cout<<holder<<endl;
    //             break;
    //         }
    //         else{
    //             x+=x;
    //             operations++;
    //         }
    //     }
    //     //cout<<holder<<endl;
    //     if(found){
    //         //cout<<"YES"<<endl;
    //         cout<<operations<<endl;
    //         //cout<<"HELLO"<<endl;
    //         //cout<<holder<<endl;            
    //     }
    //     else{
    //         cout<<"NO"<<endl;
    //     }
    //     t--;
    // }
    

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