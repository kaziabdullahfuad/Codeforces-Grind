#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
#include<typeinfo>
#include<set>
using namespace std;
#define ll long long
#define endl "\n"
template<typename T1>
void printVector(vector<T1> v1){

    for(auto x:v1){
        cout<<x<<" ";
    }
    cout<<endl;
}
template<typename T2>
void print2dvec(vector<vector<T2>> v2){

    for(auto row: v2){

        for(auto col: row){
            //cout<<col<<" ";
            cout<<col;
        }
        cout<<endl;
    }
}
void StringCreate(string s,vector<char> holder,vector<bool> con,vector<vector<char>>&result){

    if(s.size()==holder.size()){

        result.push_back(holder);
    }
    
        
    for(int i=0;i<s.size();i++){

        if(con[i]==false){
            holder.push_back(s[i]);
            con[i]=true;
        }
        else{
            continue;
        }

        StringCreate(s,holder,con,result);

        holder.pop_back();
        con[i]=false;
    }
    
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int n=s.size();

    //cout<<s<<endl;
    sort(s.begin(),s.end());
    //cout<<s<<endl;
    //cout<<n*(n-1)<<endl;

    vector<bool> con(n,false);

    vector<char> holder;

    vector<vector<char>> result;

    StringCreate(s,holder,con,result);

    //print2dvec(result);

    // Use a set to store unique vectors
    set<vector<char>> uniqueSet;

    // Iterate through the original vector and insert each inner vector into the set
    for (const auto& innerVector : result) {
        uniqueSet.insert(innerVector);
    }

    //set<vector<char>>::iterator itr;

    cout<<uniqueSet.size()<<endl;
   
  for (const auto& uniqueVector : uniqueSet) {
        for (char ch : uniqueVector) {
            cout << ch;
        }
        cout<<endl;
    }



    return 0;
}