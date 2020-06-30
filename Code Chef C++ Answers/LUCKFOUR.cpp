//
//  new.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 30/06/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int luckfour(){
    int iter,result;
    cin >> iter;
    for(int i = 0;i < iter;i++){
        int n , temp;
        result = 0;
        cin >> n;
        while( n > 0){
            temp = n%10;
            n /= 10;
            if(temp == 4){
                result += 1;
            }
        }
        cout << result << endl;
    }
    return 0;
}
