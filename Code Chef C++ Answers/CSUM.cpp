//
//  CSUM.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 16/10/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int csum(){
    int a;
    cin >> a;
    for(int j = 0;j < a;j++){
        int b,c;
        cin >> b >> c;
        int temp[b];
        for(int i = 0;i < b;i++){
            cin >> temp[i];
        }
        int flag = 0;
        for(int i = 0;i < b;i++){
            for(int j = i+1;j < b;j++){
                if(temp[i] + temp[j] == c){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1){
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }
    return 0;
}
