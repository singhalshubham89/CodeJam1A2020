#include<bits/stdc++.h>
using namespace std;
int binomialCoeff(int n, int k) 
{ 
    int res = 1; 
    if (k > n - k) 
    k = n - k; 
    for (int i = 0; i < k; ++i) 
    { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
      
    return res; 
} 

int path( vector<pair<int,int>> &ans, int rem, int i, int j){
    if(i >=0 && i <1e9 && j >= 0 && j <= i ){
        rem -= binomialCoeff(i, j);
        ans.push_back(make_pair(i+1, j+1));
        
        if(rem == 0)
        {
            return 1;
        }else if(rem < 0)
        {
            ans.pop_back();
            return 0;
        }
        if( path( ans, rem, i, j+1) ||  path( ans, rem, i+1, j)||path( ans, rem, i+1, j+1) )
            return 1;
        else{
            ans.pop_back();
            return 0;
        }
            
    }
    else
    {
            return 0;
    }
    
}

int main(){

    int t;
    cin>>t;
   

    for(int i = 1; i <= t;i++){
        cout<<"Case #"<<i<<":\n";
        int sum;
        vector<pair<int,int>> ans;
        cin>>sum;
        int flag = 0;
        path(ans, sum, 0, 0);
        for(int j = 0; j < ans.size(); j++){
            cout<<ans[j].first<<" "<<ans[j].second<<"\n";
        }
    }

}