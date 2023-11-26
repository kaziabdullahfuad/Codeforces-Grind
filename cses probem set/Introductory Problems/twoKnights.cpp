#include<iostream>
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

    ll n;
    cin>>n;

    for(ll i=1;i<=n;i++){

        // find the total number of combinatios that can be placed of two knights
        ll combi=(i*i)*(i*i-1)/2;
        //cout<<combi<<endl;

        //find the number of positions where they attack each other
        ll attacking_num=(i-1)*(i-2)*4;
        //cout<<attacking_num<<endl;

        // total combinations minus attacking position
        // equals number of positions where two knights
        // do not attack each other
        ll non_attacking=combi-attacking_num;
        cout<<non_attacking<<endl;
    }

    return 0;
}