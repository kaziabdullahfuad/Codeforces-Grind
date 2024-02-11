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

        string holder;

        int win_rate=(n/2)+1;
        // if n=5 then win rate=3
        // first 2 P P W W W baki 3 ta jitar jonno ja lage
        int baki=n-win_rate;
        int need_win=win_rate;
        
        for(int i=0;i<n;i++){

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

    	t--;
    }

    return 0;
}