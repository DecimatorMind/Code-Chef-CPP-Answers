//
//  ZCOSCH.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 02/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int zcosch(){
    int rank;
    cin >> rank;
    if (rank >= 1 and rank <= 50){
        cout << 100 << endl;
    } else if (rank >= 51 and rank <= 100){
        cout << 50 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
