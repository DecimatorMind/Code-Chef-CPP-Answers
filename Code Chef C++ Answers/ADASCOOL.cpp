//
//  new.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 04/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int adascool(){
    int iter;
    cin >> iter;
    for(int i = 0; i < iter; i++){
        int n1,n2;
        cin >> n1 >> n2;
        if(n1*n2 % 2 == 0){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
