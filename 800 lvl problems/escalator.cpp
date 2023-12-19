// problem link:https://codeforces.com/problemset/problem/1851/A
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

        //n- people
        // m- steps
        // k- height difference between neighboring steps
        // H= vlads height
        int n,m,k,H;
        cin>>n>>m>>k>>H;

        vector<int> v1(n);

        for(int i=0;i<n;i++){
            cin>>v1[i];
        }

        int start_height=k;
        int last_height=m*k;
        int maxheight_diff=(last_height-start_height);

        // cout<<start_height<<" "<<last_height<<endl;
        // cout<<maxheight_diff<<endl;

        int count=0;
        for(int i=0;i<v1.size();i++){

            int people_height_diff=abs(H-v1[i]);

            if(people_height_diff<=maxheight_diff && people_height_diff!=0){

                if(people_height_diff%k==0){
                    count++;
                }
            }
        }

        cout<<count<<endl;


    	t--;
    }

    return 0;
}