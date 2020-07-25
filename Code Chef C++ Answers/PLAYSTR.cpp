//
//  PLAYSTR.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 25/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int playstr(){
    int iter;
    cin >> iter;
    for(int i = 0;i<iter;i++){
        int n , flag = 0,temp = 0;
        cin >> n;
        for (int j = 0; j < n; j++) {
            char c;
            cin >> c;
            if(c == '1'){
                flag += 1;
            };
        }
        for (int j = 0; j < n; j++) {
            char c;
            cin >> c;
            if(c == '1'){
                temp += 1;
            };
        }
        if(flag == temp){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
