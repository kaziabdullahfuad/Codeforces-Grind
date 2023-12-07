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

    string holder="ajoasdsab";

     if(holder[8]>=97 && holder[8]<=122){

        holder.erase(,2);

     }

     cout<<holder<<endl;

    return 0;
}