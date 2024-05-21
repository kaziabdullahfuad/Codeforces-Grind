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
#define debug(x) cout<<#x<<":"<<x<<endl;
#define all(x) (x).begin(),(x).end()
template<typename t1>
void printVector(vector<t1> v1){

	for(int i=0;i<v1.size();i++){

		cout<<v1[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    //cout<<"HELLO"<<endl;
    while(t){

    	ll a,b,c;
    	cin>>a>>b>>c;

        //cout<<a<<" "<<b<<" "<<c<<endl;
    	ll ba_diff=b-a;
    	ll cb_diff=c-b;
        //cout<<ba_diff<<" "<<cb_diff<<endl;

    	if(ba_diff==cb_diff){
    		cout<<"YES"<<endl;
    	}
    	else{

    		// jodi a multiple korte hoi
            ll for_a=b-cb_diff;
            ll ca_diff=(c-a);
            bool ca_dif=false;
            if(ca_diff%2==0){
                ca_dif=true;
                ca_diff/=2;
            }
            ll for_b=a+ca_diff;
            ll for_c=a+(2*ba_diff);

            if(for_a%a==0 && for_a>a){
                //debug(for_a)
                cout<<"YES"<<endl;
            }
            else if(for_b%b==0 && for_b>b && ca_dif==true){

                //debug(ca_diff) debug(for_b)
                 cout<<"YES"<<endl;
                
            }
            else if(for_c%c==0 && for_c>c){

                //debug(for_c)
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }


           

    	}

    	t--;
    }

    return 0;
}