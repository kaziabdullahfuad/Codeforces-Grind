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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

        ll n;
        cin>>n;
        string s;
        cin>>s;
        //cout<<s<<endl;

        if(n==1 || n==2 ||n==3){
            cout<<s<<endl;
        }
        else if(n==4){

            string holder;

            for(int i=0;i<n;i++){

                holder.push_back(s[i]);
                if(i==1){
                    holder.push_back('.');
                }
            }
            cout<<holder<<endl;
        }
        else{

            string holder;
            for(int i=0;i<n;i++){
                //cout<<i<<endl;
                if(s[i]=='b' || s[i]=='c' || s[i]=='d'){

                    int go_to=i+2;
                    //cout<<"GO TO VALUE: "<<go_to<<endl;
                    if(go_to<n){

                        for(int j=i;j<=go_to;j++){
                            holder.push_back(s[j]);
                        }

                        // vowels a or e
                        if(s[go_to+1]=='a' || s[go_to+1]=='e'){
                            holder.pop_back();
                            holder.push_back('.');
                            i=go_to-1;
                        }
                        else{
                            holder.push_back('.');
                            i=go_to;
                        }
                        //cout<<holder<<endl;
                }
                else{

                    go_to-=1;

                    holder.push_back(s[i]);
                    holder.push_back(s[i+1]);
                    break;
                }

                }
            }

            //cout<<"THE SIZE: "<<holder.size()<<endl;
            if(holder[holder.size()-1]=='.'){
                holder.pop_back();
            }

            //cout<<"MAIN: "<<holder<<endl;
            
            cout<<holder<<endl;

        }

        t--;
    }

    return 0;
}