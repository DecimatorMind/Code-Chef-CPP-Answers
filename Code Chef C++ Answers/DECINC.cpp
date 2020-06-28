//
//  new.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 26/06/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int decinc(void){
    int input = 0;
    cin >> input;
    if(input%4 == 0){
        cout<< input + 1 << endl;
    } else {
        cout<< input - 1 << endl;
    }
    return 0;
}
