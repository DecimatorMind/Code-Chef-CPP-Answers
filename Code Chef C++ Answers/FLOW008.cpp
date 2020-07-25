//
//  FLOW008.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 24/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int flow008(){
    int iter;
    cin >> iter;
    for(int i = 0;i < iter;i++){
        int n;
        cin >> n;
        if (n < 10) {
            cout << "Thanks for helping Chef!" << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
