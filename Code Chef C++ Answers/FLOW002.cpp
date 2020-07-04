//
//  new.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 03/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int flow002(){
    int iter;
    cin >> iter;
    for(int i = 0;i<iter;i++){
        int n1,n2;
        cin >> n1 >> n2;
        cout << n1 % n2 << endl;
    }
    return 0;
}
