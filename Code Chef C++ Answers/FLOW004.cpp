//
//  FLOW004.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 24/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int flow004(){
    int iter;
    cin >> iter;
    for(int i = 0;i < iter;i++){
        int n,temp = 0,flag;
        cin >> n;
        flag = n%10;
        while(n){
            temp = n%10;
            n /= 10;
        }
        cout << (temp+flag) << endl;
    }
    return 0;
}
