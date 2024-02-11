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

        vector<string> v1(3);

        for(int i=0;i<3;i++){
            cin>>v1[i];
        }

        // for(auto x:v1){
        //     cout<<x<<endl;
        // }

        bool a_nai=false;
        bool b_nai=false;
        bool c_nai=false;
        for(int i=0;i<3;i++){
            int a=0;
            int b=0;
            int c=0;
            for(int j=0;j<3;j++){
                //cout<<v1[i][j]<<" ";
                if(v1[i][j]=='A'){
                    a++;
                }
                else if(v1[i][j]=='B'){
                    b++;
                }
                else if(v1[i][j]=='C'){
                    c++;
                }
            }
            //cout<<a<<" "<<b<<" "<<c<<endl;
            //cout<<endl;
            if(a==0){
                a_nai=true;
                break;
            }
            else if(b==0){
                b_nai=true;
                break;
            }
            else if(c==0){
                c_nai=true;
                break;
            }
        }

        if(a_nai){
            cout<<"A"<<endl;
        }
        else if(b_nai){
            cout<<"B"<<endl;
        }
        else if(c_nai){
            cout<<"C"<<endl;
        }

        t--;
    }

    return 0;
}