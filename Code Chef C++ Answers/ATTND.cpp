//
//  ATTND.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 14/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int attnd(){
    int iter;
    cin >> iter;
    for(int i = 0;i<iter;i++){
        int n;
        cin >> n;
        string names[2*n];
        for(int j = 0;j<n;j++){
            int temp = 0;
            string first, second;
            cin >> first >> second;
            names[temp] = first;
            names[temp + 1] = second;
        }
        int flag = 0, l;
        for(int k = 0;k < 2*n;k += 2){
            for(l = 0;l<k;l++){
                if(names[k] != names[l]){
                    flag += 1;
                }
            }
            if(flag == l){
                cout << names[k] << " " <<  names[k+1] << endl;
            }
        }
    }
    return 0;
}
