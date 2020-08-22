//
//  VILLINE.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 21/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int villine(){
    int iter,m,c,temp {},flag {};
    cin >> iter;
    cin >> m >> c;
    while(iter--){
        int x,y,a;
        cin >> x >> y >> a;
        if(m*x + c - y > 0){
            temp += a;
        } else {
            flag += a;
        }
    }
    cout << max(flag,temp) << endl;
    return 0;
}
