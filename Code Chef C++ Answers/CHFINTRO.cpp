//
//  test1.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 12/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int chfintro(){
    int iter,n;
    cin >> iter >> n;
    for(int i = 0;i < iter;i++){
        int temp;
        cin >> temp;
        if(temp >= n){
            cout << "Good boi" << endl;
        } else {
            cout << "Bad boi" << endl;
        }
    }
    return 0;
}
