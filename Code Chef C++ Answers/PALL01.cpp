//
//  PALL01.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 24/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int pall01(){
    int iter;
    cin >> iter;
    for (int i = 0; i < iter; i++) {
        string s,temp;
        cin >> s;
        temp = s;
        reverse(s.begin(),s.end());
        if(temp == s){
            cout << "wins" << endl;
        } else {
            cout << "loses" << endl;
        }
    }
    return 0;
}
