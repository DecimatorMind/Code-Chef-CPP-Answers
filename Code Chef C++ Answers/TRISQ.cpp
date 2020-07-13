//
//  TRISQ.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 01/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int trisq(){
    int iter;
    cin >> iter;
    for(int i = 0; i < iter; i++){
        int base;
        cin >> base;
        base -= 2;
        base = floor(base/2);
        cout << base*(base+1)/2 << endl;
    }
    return 0;
}
