#include<iostream>
#include<set>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
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

        string s;
        cin>>s;

        string desti="CODETOWN";
        set<char> s1;
        bool gone_wrong=true;

        for(int i=0;i<s.size();i++){

            if(s[i]!=desti[i]){
                bool word_vowel=false;
                bool main_vowel=false;
                

                if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                    
                    word_vowel=true;
                }

                if(desti[i]=='A' || desti[i]=='E' || desti[i]=='I' || desti[i]=='O' || desti[i]=='U'){
                    
                    main_vowel=true;
                }

                if(main_vowel==true && word_vowel==false){
                    gone_wrong=false;
                    break;
                }
                else if(main_vowel==false && word_vowel==true){
                    gone_wrong=false;
                    break;
                }
            }
        }

        if(gone_wrong){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        t--;

    }

    return 0;
}