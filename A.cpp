#include<bits/stdc++.h>
using namespace std;
void solve(){
        vector<string> inp;
        string temp;
        string ans;
        int n;
        int flag  = 1;
        cin>>n;
        if(n > 0){
            cin>>ans;
            //ans = ans.substr(1);
        }
        for(int i = 1; i  < n; i++){
            cin>>temp;
            //temp  = temp.substr(1);
            int l = ans.size()-1;
            int k = temp.size()-1;
            if(flag && ans.size() >= temp.size()){
                //cout<<ans<<" "<<temp<<endl;
                while(k >= 0 && flag){
                    if(temp[k] != ans[l])
                        flag =0;
                    k--;
                    l--;
                }
            }else if(flag && ans.size() < temp.size()){
                 //cout<<ans<<" "<<temp<<endl;
                 while(l >= 0 && flag){
                    if(temp[k] != ans[l])
                        flag =0;
                    k--;
                    l--;
                }
                ans = temp;
            }
        }
        if(flag)
            cout<<ans<<endl;
        else
            cout<<"*\n";
}
int main(){

    int t;
    cin>>t;
    for(int i = 1; i <= t;i++){
        cout<<"Case #"<<i<<": ";
        solve();
    }

}