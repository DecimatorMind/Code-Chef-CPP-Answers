//
//  CHN09.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 23/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int chn09(){
    int iter;
    cin >> iter;
    for(int i = 0; i<iter;i++){
        string s;
        int a = 0,b = 0;
        cin >> s;
        for(char c : s){
            if(c == 'a'){
                a += 1;
            } else {
                b += 1;
            }
        }
        if(a < b){
            cout << a << endl;
        } else {
            cout << b << endl;
        }
    }
    return 0;
}
