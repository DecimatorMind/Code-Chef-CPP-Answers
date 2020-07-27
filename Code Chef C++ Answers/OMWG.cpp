//
//  OMWG.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 23/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int omwg(){
    int iter;
    cin >> iter;
    for (int i = 0; i < iter; i++) {
        int n,m;
        cin >> n >> m;
        cout << 2*n*m-n-m << endl;
    }
    return 0;
}
