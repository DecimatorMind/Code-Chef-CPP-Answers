//
//  RPD.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 15/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include<stack>
#include<vector>
#include<climits>
using namespace std;

int sumOD(int p){
    int ans = 0;
    while(p){
        ans += p%10;
        p = p/10;
    }
    return ans;
}

void solve(){
    int n;
    cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++)
    cin>>vec[i];
    
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        int product = vec[i];
        for(int j=i+1;j<n;j++){
            if(j==i)
            continue;
            
            product = vec[i]*vec[j];
            int sum = sumOD(product);
            if(sum>max)
            max = sum;
        }
    }
    cout<<max<<endl;
}

int rpd(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
