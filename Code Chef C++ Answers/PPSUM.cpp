//
//  PPSUM.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 05/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int ppsum(){
    int iter;
    cin >> iter;
    for(int i = 0;i < iter; i++){
        int n1, n2;
        cin >> n1 >> n2;
        int sum = 0;
        for(int j = 0;j < n1;j++){
            sum = 0;
            for(int k = n2; k >= 0; k--){
                sum += k;
            }
            n2 = sum;
        }
        cout << sum << endl;
    }
    return 0;
}
