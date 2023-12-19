// problem link:https://codeforces.com/problemset/problem/1862/B
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

        int n;
        cin>>n;
        vector<int> v1(n); // lets say 4,6,3
        //cout<<"Initial sequence size: "<<n<<endl;
        for(int i=0;i<n;i++){
            cin>>v1[i];
            //cout<<v1[i]<<" ";
        }
        // cout<<endl;
        vector<int> holder;
        holder.push_back(v1[0]);
        for(int i=0;i<v1.size()-1;i++){

            if(v1[i]<v1[i+1]){
                
                holder.push_back(v1[i+1]);
            }
            else{
                int diff=v1[i]-v1[i+1];
                if(diff==0){
                    holder.push_back(v1[i+1]);
                    //holder.push_back(v1[i+1]);
                }
                else{
                //holder.push_back(diff);
                holder.push_back(v1[i+1]);
                holder.push_back(v1[i+1]);
                }
            }
        }
        //cout<<"Got: "<<holder.size()<<endl;
        cout<<holder.size()<<endl;
        for (vector<int>::iterator i = holder.begin(); i != holder.end(); ++i)
        {
            cout<<*i<<" ";
        }
        cout<<endl;

    	t--;
    }

    return 0;
}