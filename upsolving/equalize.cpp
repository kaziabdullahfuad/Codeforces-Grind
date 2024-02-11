// problem link:https://codeforces.com/problemset/problem/1037/C
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

    /*
    Test Cases
    8
    01011000- a
    00110001-b
    
    Intersting test case
    15
    101010101010101
    010101010101010

    If a[i]!=b[i] and next one is not equal swap
    and change i to check i+=2.

    */

    int n;
    cin>>n;

    string a;
    cin>>a;
    string b;
    cin>>b;

    int total_diff;

    for(int i=0;i<n;i++){

    	if(a[i]!=b[i]){
    		// cout<<i<<" ";
            // cout<<a[i]<<endl;
    		total_diff++;
    	}
    }
    //cout<<"Total different pos:"<<total_diff<<endl;
    int changed=0;

    // if one of the indices is different check
    // whether adjacent index different as well
    // and is not equal to previous one
    for(int i=0;i<n-1;i++){
        //cout<<i<<" ";
    	if(a[i]!=b[i]){
    		
            if(a[i+1]!=b[i+1] && a[i]!=a[i+1]){
                changed+=1;
                // cout<<a[i]<<" "<<b[i]<<endl;
                // cout<<a[i+1]<<" "<<b[i+1]<<endl;
                i++;
            }
    	}
    }

    //cout<<"Swaps: "<<changed<<endl;

    cout<<total_diff-changed<<endl;

    return 0;
}