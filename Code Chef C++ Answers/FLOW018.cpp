//
//  FLOW018.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 24/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int flow018(){
    int iter;
    cin >> iter;
    for (int i = 0; i < iter; i++) {
        int n,result = 1;
        cin >> n;
        while(n){
            result *= n;
            n--;
        }
        cout << result << endl;
    }
    return 0;
}
