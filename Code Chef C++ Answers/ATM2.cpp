//
//  ATM2.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 19/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int atm2(){
    int iter;
    cin >> iter;
    for(int i = 0;i< iter;i++){
        int n,k;
        cin >> n >> k;
        for(int j = 0; j< n; j++){
            int a;
            cin >> a;
            if(a <= k){
                cout << 1;
                k -= a;
            } else {
                cout << 0;
            }
        }
        cout << "\n" ;
    }
    return 0;
}
