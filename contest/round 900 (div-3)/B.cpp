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
        
        long long n;
        cin>>n;

        //cout<<n<<endl;

        int counter=1;
        int val=2;
        long long sum=0;
        //bool flag=false;
        while(n){
            
            
            sum+=val;
            //cout<<counter<<endl;
            if(counter%3==0){
                //cout<<"Inside counter:"<<sum<<endl;
                val=sum+1;
                cout<<val<<" ";
                sum=0;
                val+=1;
            }
            else{
                cout<<val<<" ";
                val+=2;
            }

            
            
            

            counter++;
            n--;
        }

        cout<<"\n";

        //cout<<counter<<endl;

        t--;
    }



    return 0;
}