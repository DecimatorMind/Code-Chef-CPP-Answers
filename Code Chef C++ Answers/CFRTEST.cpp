//
//  CFRTEST.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 25/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int cfrtest(){
    int iter;
    cin >> iter;
    for (int i = 0; i < iter; i++) {
        int n,flag = 0;
        vector<int> arr;
        cin >> n;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            for (int k = 0; k < arr.size(); k++) {
                if(x == arr[k]){
                    flag -= 1;
                    break;
                }
            }
            arr.push_back(x);
            flag += 1;
        }
        cout << flag << endl;
    }
    return 0;
}
