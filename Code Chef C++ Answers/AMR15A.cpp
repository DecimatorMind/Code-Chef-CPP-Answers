//
//  AMR15A.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 13/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int amr15a(){
    int iter, even = 0 , odd = 0;
    cin >> iter;
    for(int i = 0; i<iter;i++){
        int n;
        cin >> n;
        if(n%2 == 0){
            even += 1;
        } else {
            odd += 1;
        }
    }
    if(even > odd){
        cout << "READY FOR BATTLE" << endl;
    } else {
        cout << "NOT READY" << endl;
    }
    return 0;
}
