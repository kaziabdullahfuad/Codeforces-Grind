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

    while(t){

    	// n=rows , m=columns
    	ll n,m;
    	cin>>n>>m;

    	vector<vector<char>> v1(n,vector<char>(m,'0'));

    	for(int i=0;i<n;i++){

    		for(int j=0;j<m;j++){
    			//cout<<v1[i][j]<<" ";
    			cin>>v1[i][j];
    		}
    		
    	}

    	// for(int i=0;i<n;i++){

    	// 	for(int j=0;j<m;j++){
    	// 		cout<<v1[i][j]<<" ";
    			
    	// 	}
    	// 	cout<<endl;
    	// }

    	if((v1[0][0]==v1[n-1][m-1]) || (v1[0][m-1]==v1[n-1][0])){
    		cout<<"YES"<<endl;
    	}
    	else{

    		// first ar left re opposite banaite pari ki na
    		bool found=false;
    		char right_diag=v1[n-1][m-1];
    		char first_diag=v1[0][0];
    		//debug(right_diag)
    		bool right_paisi=false;
    		bool niche_paisi=false;

    		ll row=0;
    		for(int i=1;i<m;i++){

    			//cout<<v1[row][i]<<" ";
    			if(v1[row][i]==right_diag){
    				right_paisi=true;
    				break;
    			}
    		}

    		ll col=0;

    		for(int i=1;i<n;i++){

    			if(v1[i][col]==right_diag){
    				niche_paisi=true;
    				break;
    			}
    		}
    		//debug(right_paisi) debug(niche_paisi)

    		bool right_diag_upore=false;
    		bool right_diag_left=false;

    		// right diag left theke shuru
    		row=n-1;
    		for(int i=0;i<m-1;i++){

    			if(v1[row][i]==first_diag){
    				right_diag_left=true;
    				break;
    			}
    		}

    		// right diag ar upor theke
    		col=m-1;
    		for(int i=n-2;i>=0;i--){
    			//cout<<v1[i][col]<<endl;
    			if(v1[i][col]==first_diag){
    				right_diag_upore=true;
    				break;
    			}

    		}

    		char upor_dan_diag=v1[0][m-1];
    		//cout<<upor_dan_diag<<endl;
    		bool upor_dan_diagcol_paisi=false;
    		bool upor_dan_diagright_paisi=false;
    		// row ta age kori upor theke
    		for(int i=0;i<n-1;i++){
    			//cout<<v1[i][0]<<endl;

    			if(v1[i][0]==upor_dan_diag){
    				upor_dan_diagcol_paisi=true;
    				break;
    			}
    		}

    		for(int i=1;i<m;i++){
    			//cout<<v1[n-1][i]<<endl;
    			if(v1[n-1][i]==upor_dan_diag){
    				upor_dan_diagright_paisi=true;
    				break;
    			}
    		}

    		char baam_nich_diag=v1[n-1][0];
    		//cout<<n-1<<" "<<0<<endl;
    		//cout<<baam_nich_diag<<endl;

    		bool baam_nich_danleftpaisi=false;
    		bool baam_nich_dan_nichepaisi=false;

    		for(int i=0;i<m-1;i++){

    			//cout<<v1[0][i]<<endl;
    			//cout<<0<<" "<<i<<endl;
    			if(v1[0][i]==baam_nich_diag){
    				baam_nich_danleftpaisi=true;
    				break;
    			}
    		}

    		for(int i=1;i<n;i++){
    			//cout<<i<<" "<<m-1<<endl;
    			//cout<<v1[i][m-1]<<endl;
    			if(v1[i][m-1]==baam_nich_diag){
    				baam_nich_dan_nichepaisi=true;
    				break;
    			}
    		}

    		if(right_paisi && niche_paisi){
    			cout<<"YES"<<endl;
    		}
    		else if(right_diag_upore && right_diag_left){
    			cout<<"YES"<<endl;
    		}
    		else if(upor_dan_diagcol_paisi && upor_dan_diagright_paisi){
    			cout<<"YES"<<endl;
    		}
    		else if(baam_nich_danleftpaisi && baam_nich_dan_nichepaisi){
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