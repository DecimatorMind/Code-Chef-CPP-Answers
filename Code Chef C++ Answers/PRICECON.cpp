//
//  PRICECON.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 26/06/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;
int pricecon(void) {
    int iterations;
    cout<<"Enter a number"<<endl;
    cin>>iterations;
    for(int i = 0; i<iterations ;i++){
        int t = 0,k = 0, total = 0, revenue = 0;
        cin>>t>>k;
        for(int j = 0;j<t;j++){
            int f;
            cin>>f;
            total += f;
            if(f > k){
                revenue += k;
            } else {
                revenue += f;
            }
        }
        cout<<(total-revenue)<<endl;
    }
    return 0;
}
