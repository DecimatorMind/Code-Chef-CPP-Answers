//
//  MATCHES.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 29/06/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int matches(){
    int iter,n1,n2,result;
    cin >> iter;
    int match[] = {6,2,5,5,4,5,6,3,7,6};
    for (int i = 0;i < iter; i++){
        int total = 0;
        cin >> n1 >> n2;
        result = n1+n2;
        while(result > 0){
            int flag = result % 10;
            total += match[flag];
            result /= 10;
        }
        cout<< total <<endl;
    }
    return 0;
}
