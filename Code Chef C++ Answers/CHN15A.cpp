//
//  new1.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 07/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int chn15a(){
    int iter , result = 0,n, k , m;;
    cin >> iter;
    for(int i = 0;i < iter; i++){
        cin >> n >> k;
        for(int j = 0;j < n;j++){
            cin >> m;
            m += k;
            if(m%7 == 0){
                result += 1;
            }
        }
        cout << result << endl;
    }
    return 0;
}
