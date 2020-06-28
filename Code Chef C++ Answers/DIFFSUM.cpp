//
//  DIFFSUM.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 28/06/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int diffsum(void){
    int n1, n2;
    cin >> n1 >> n2;
    if(n1 > n2){
        cout << (n1-n2) << endl;
    } else {
        cout << (n1+n2) << endl;
    }
    return 0;
}
