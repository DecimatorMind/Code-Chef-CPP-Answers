//
//  DWNLD.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 31/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int dwnld(){
    int iter {};
    cin >> iter;
    for (int i = 0; i < iter; i++){
        int n,k,result {};
        cin >> n >> k;
        for (int j = 0; j < n; j++) {
            int t,d;
            cin >> t >> d;
            if(t-k >= 0){
                result += (t-k)*d;
                k = 0;
            } else if(k == 0){
                result += t*d;
            } else {
                k -= t;
            }
        }
        cout << result << endl;
    }
    return 0;
}
