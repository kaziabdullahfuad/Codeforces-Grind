#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;
void printVector(vector<int>v1){
    
    vector<int>::iterator it;

    for(it=v1.begin();it!=v1.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
void print2dvec(vector<vector<int>> v2){
    
    for(auto row:v2){

        for(auto col:row){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;

    while(t){
        
        int n,k;
        cin>>n>>k;
        

        vector<int> v1(n);
        bool flag=false;  

        for(int i=0;i<n;i++){
            cin>>v1[i];
        }

        for(int i=0;i<n;i++){

            if(v1[i]==k){
                flag=true;
                break;
            }
        }

        if(flag==true){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }


        t--;
    }

    return 0;
}