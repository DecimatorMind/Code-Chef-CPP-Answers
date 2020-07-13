//
//  CHOPRT.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 29/06/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int choprt(){
    int iter,n1,n2;
    cin >> iter;
    for(int i = 0; i < iter ;i++){
        cin >> n1 >> n2;
        if(n1 > n2){
            cout << ">" << endl;
        } else if (n1 < n2){
            cout << "<" << endl;
        } else {
            cout << "=" <<endl;
        }
    }
    return 0;
}
