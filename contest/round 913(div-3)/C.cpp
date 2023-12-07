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
    unordered_map<char,int>m1;

    while(t){

        int n;
        cin>>n;

        string s;
        cin>>s;

        for(int i=0;i<n;i++){
            m1[s[i]]++;
        }

        
    }

    return 0;
}