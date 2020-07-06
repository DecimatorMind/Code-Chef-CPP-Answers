//
//  new.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 04/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int fsqrt(){
    int iter;
    cin >> iter;
    for(int i = 0; i < iter; i++){
        int n;
        float temp;
        cin >> n;
        while(true){
            temp = sqrt(n);
            if( int(temp) == temp ){
                cout << int(temp) << endl;
                break;
            } else {
                n -= 1;
            }
        }
    }
    return 0;
}
