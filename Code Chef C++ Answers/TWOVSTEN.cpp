//
//  twovsten.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 10/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int twovsten(){
    int iter;
    cin >> iter;
    for(int i = 0;i<iter;i++){
        int n;
        cin >> n;
        if(n % 10 == 0){
            cout << 0 << endl;
            continue;
        } else if(n%10 == 5){
            cout << 1 << endl;
            continue;
        } else {
            cout << -1 << endl;
            continue;
        }
    }
    return 0;
}
