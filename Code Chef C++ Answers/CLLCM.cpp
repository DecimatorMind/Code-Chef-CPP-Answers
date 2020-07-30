//
//  CLLCM.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 24/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int cllcm(){
    int iter;
    cin >> iter;
    for (int i = 0; i < iter; i++){
        int n,flag = 0;
        vector<int> arr;
        cin >> n;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        for(int x : arr){
            if(x%2 == 0){
                flag = 0;
                break;
            } else {
                flag += 1;
            }
        }
        if(flag == 0){
            cout << "NO" << endl;
        } else if(flag == n){
            cout << "YES" << endl;
        }
    }
    return 0;
}
