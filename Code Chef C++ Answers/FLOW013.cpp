//
//  FLOW013.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 24/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int flow013(){
    int iter;
    cin >> iter;
    for (int i = 0; i < iter; i++) {
        int a,b,c;
        cin >> a >> b >> c;
        if(a+b+c == 180){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
