//
//  THREEFR.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 24/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int threefr(){
    int iter;
    cin >> iter;
    for(int i = 0;i<iter;i++){
        int a,b,c;
        cin >> a >> b >> c;
        if(a-b-c == 0 or b-c-a == 0 or c-a-b == 0){
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}
