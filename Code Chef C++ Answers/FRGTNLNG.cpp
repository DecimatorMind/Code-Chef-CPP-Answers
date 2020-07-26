//
//  FRGTNLNG.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 24/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int frgtnlng(){
    int iter;
    cin >> iter;
    for(int i = 0;i < iter;i++){
        int n,k;
        vector<string> arr;
        cin >> n >> k;
        for (int j = 0; j < n; j++) {
            string x;
            cin >> x;
            arr.push_back(x);
        }
        vector<string> lang;
        for(int j = 0;j < k;j++){
            int temp;
            cin >> temp;
            for (int l = 0; l < temp; l++) {
                string x;
                cin >> x;
                lang.push_back(x);
            }
        }
        for(int j = 0;j < n;j++){
            int flag = 0;
            for(int l = 0;l < lang.size();l++){
                if(arr[j] == lang[l]){
                    cout << "YES" << endl;
                    break;
                } else {
                    flag += 1;
                }
            }
            if(flag == lang.size()){
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
