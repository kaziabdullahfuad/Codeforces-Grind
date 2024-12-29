#include<iostream>
#include<numeric>
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

    while(t){

    	//cout<<"Bismillah"<<endl;

    	string s;
    	cin>>s;

    	ll n=s.size();

    	// idea is je always 1 to n hobei so purata nibo ekta
    	// left most bit ar zero gula ke 1 kora mane 1 gula baam a nawa

    	cout<<1<<" "<<n<<" ";
    	// mane all 1's?
    	bool found=false;
    	
    	ll max_count=0;
    	ll l1,r1;
    	string max_string="0";
    	for(int i=0;i<n;i++){

    		if(s[i]=='0'){

    			// try korbo ata fill up kora jai ki na
    			// segment koita
    			ll seg=n-i;

    			for(int j=0;j<n;j++){

    				if(s[j]=='1'){

    					// segment 
    					ll the_seg=n-j;

    					if(the_seg>=seg){
    						// debug(seg)
    						// debug(the_seg)
    						// debug(i)
    						//debug(j)	
    						found=true;
    						ll count=0;
    						ll temp=i;
    						ll go_till=j+seg;
    						string hold;
    						//debug(go_till)
    						for(int k=j;k<go_till;k++){
    							//debug(k)
    							if(s[temp]!=s[k]){
    								count++;
    								hold+="1";
    							}
    							else{
    								hold+="0";
    							}
    							temp++;
    						}
    						// debug(count)
    						// if(count>max_count){
    						// 	max_count=count;
    						// 	l1=j+1;
    						// 	r1=j+seg;
    						// }
    						//debug(hold)

    						if(hold>max_string){
    							max_string=hold;
    							l1=j+1;
    							r1=j+seg;
    						}
    					}
    				}


    			}	

    			
    			if(found){
    				break;
    			}
    			// else{

    			// 	// mane ki shob 1 naki?
    			// }

    		}


    	}

    	//debug(found)
    	if(found){

    		cout<<l1<<" "<<r1<<endl;
    	}
    	else{
    		cout<<1<<" "<<1<<endl;
    	}

    	t--;
    }

    return 0;
}