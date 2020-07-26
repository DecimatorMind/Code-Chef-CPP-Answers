//
//  JDELAY.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 24/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int jdelay(){
    int iter;
    cin >> iter;
    for(int i = 0;i < iter;i++){
        int n,result = 0;
        cin >> n;
        for (int j = 0; j < n; j++) {
            int a,b;
            cin >> a >> b;
            if(abs(a-b) > 5){
                result += 1;
            }
        }
        cout << result << endl;
    }
    return 0;
}
