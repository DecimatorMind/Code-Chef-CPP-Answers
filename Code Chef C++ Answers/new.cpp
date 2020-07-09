//
//  new.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 04/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int mainnn(){
    int iter;
    cin >> iter;
    for(int i = 0;i < iter; i++){
        int iter1,result = 0;
        cin >> iter1;
        int myarr[iter1];
        for(int j = 0; j < iter1; j++){
            int n;
            cin >> n;
            myarr[j] = n;
            if(n+n == n*n){
                result += 1;
            }
        }
        for(int i = 0;i < iter1;i++){
            cout << "====================" << endl;
            for(int j = 0; j <= i; j++){
                cout << myarr[j] << endl;
            }
        }
    }
    return 0;
}
