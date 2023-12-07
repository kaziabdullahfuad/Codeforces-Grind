#include<iostream>
#include <cctype>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
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
    unordered_map<char,int> m1;

    while(t){

        string s;
        cin>>s;

        string holder;

        
        //YetAnotherBrokenKeyboard->YetnotherrokenKeoard
        // got-> YettherrokenKeoard
        for(int i=0;i<s.size();i++){

            if(s[i]=='b'){

                if(holder.size()>=1){

                    for(int j=holder.size()-1;j>=0;j--){

                        if(holder[j]>=97 && holder[j]<=122){
                            if(j==0){
                                holder.erase(j,1);
                                break;
                            }
                            else{
                            holder.erase(j,1);
                            break;
                            }

                            
                        }
                        
                    }
                }
            }
            else if(s[i]=='B'){

                for(int j=holder.size()-1;j>=0;j--){

                    if(holder[j]>=65 && holder[j]<=90){
                        
                        if(j==0){
                            holder.erase(j,1);
                            break;
                        }
                    else{
                        holder.erase(j,1);
                        break;
                    }
                        
                    }
            }
        }
            else{
                holder.push_back(s[i]);
            }


            //cout<<holder<<endl;
        }

        
        


        cout<<holder<<endl;

    	t--;
    }

    return 0;
}