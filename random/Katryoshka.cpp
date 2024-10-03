// Problem Link-> https://codeforces.com/problemset/gymProblem/101856/K
#include<iostream>
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

     
  
    freopen("katryoshka.in","r",stdin);

    //freopen("output.txt", "w", stdout);
  
	

    int t;
    cin>>t;
    int l=1;
    while(t){

    	ll eye,mouth,body;
    	cin>>eye>>mouth>>body;

    	ll total=0;
    	// case 3 1e,1m,1b
    	ll first_min=min(eye,mouth);
    	first_min=min(first_min,body);

    	eye-=first_min;
    	mouth-=first_min;
    	body-=first_min;
    	total+=first_min;

    	// case-1 2e,1b
    	ll second_min=min((eye/2),body);
    	total+=second_min;

    	cout<<"Case "<<l<<": ";
    	cout<<total<<endl;
    	l++;
    	t--;
    }

    return 0;
}