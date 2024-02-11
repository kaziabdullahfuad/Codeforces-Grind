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

        // rock hole paper r->p
        // paper hole scissor p->s
        /// scissor hole rock s->r

        int n;
        cin>>n;
        string s;
        cin>>s;


        int win_rate=(n/2)+1;
        // if n=5 then win rate=3
        // first 2 P P W W W baki 3 ta jitar jonno ja lage
        int baki=n-win_rate;
        int need_win=win_rate;
        //cout<<baki<<" "<<need_win<<endl;

        int i=0;
        string holder;

        for(i;i<baki;i++){

            if(s[i]=='R'){
                holder.push_back('P');
                need_win--;
            }
        }
        // cout<<holder<<endl;
        // cout<<need_win<<endl;
        // cout<<i<<endl;
        int left=win_rate-need_win;
        //cout<<left<<endl;
        int go_to=i+left;
        for(i;i<go_to;i++){
            if(s[i]=='R'){
                holder.push_back('P');
                need_win--;
            }
            else{
                holder.push_back('P');
            }
        }
       
       if(need_win==0){

            for(i;i<n;i++){

                holder.push_back('P');
            }
            cout<<holder<<endl;
       }
       else{

            for(i;i<n;i++){

                    if(s[i]=='R'){
                    holder.push_back('P');
                }
                else if(s[i]=='P'){
                    holder.push_back('S');
                }
                else if(s[i]=='S'){
                    holder.push_back('R');
                }
            }
            cout<<holder<<endl;
       }



    	t--;
    }

    return 0;
}