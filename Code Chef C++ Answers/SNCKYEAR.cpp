//
//  SNCKYEAR.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 30/06/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int snckyear(){
    int iter;
    cin >> iter;
    int snackdown[] = {2010,2015,2016,2017,2019};
    for(int i = 0; i < iter ; i++){
        int n;
        int flag = 0;
        cin >> n;
        for (int i : snackdown){
            if (i == n ){
                cout << "HOSTED" << endl;
                break;
            } else {
                flag  += 1;
            }
        }
        if(flag == 5){
            cout << "NOT HOSTED" << endl;
        }
    }
    return 0;
}
