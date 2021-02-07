//
//  HDIVISR.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 07/02/21.
//  Copyright © 2021 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int hdivisr(){
    int a,b = 10;
    cin >> a;
    while(b > 0){
        if(a%b == 0){
            cout << b << endl;
            break;
        } else {
            b--;
        }
    }
}
