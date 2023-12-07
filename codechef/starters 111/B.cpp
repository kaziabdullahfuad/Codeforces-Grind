#include<iostream>
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
    
    while(t){

        int x,y,z;
        cin>>x>>y>>z;

        int total_students=x*y;

        if(z>(total_students/2)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    	t--;
    }

    return 0;
}