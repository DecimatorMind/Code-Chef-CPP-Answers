//
//  FLOW005.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 03/02/21.
//  Copyright © 2021 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int flow005(){
    int a,b,result;
    cin >> a;
    for (int i = 0; i < a; i++) {
        result = 0;
        cin >> b;
        result += b/100;
        b %= 100;
        result += b/50;
        b %= 50;
        result += b/10;
        b %= 10;
        result += b/5;
        b %= 5;
        result += b/2;
        b %= 2;
        result += b;
        cout << result << endl;
    }
    return 0;
}
