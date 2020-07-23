//
//  CCOOK.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 19/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int ccook(){
    int iter,flag,a1,a2,a3,a4,a5;
    cin >> iter;
    for (int i = 0; i < iter; i++) {
        cin >> a1 >> a2 >> a3 >> a4 >> a5;
        flag = a1 + a2 + a3 + a4 + a5;
        switch (flag) {
            case 0:
                cout << "Beginner" << endl;
                break;
            case 1:
                cout << "Junior Developer" << endl;
                break;
            case 2:
                cout << "Middle Developer" << endl;
                break;
            case 3:
                cout << "Senior Developer" << endl;
                break;
            case 4:
                cout << "Hacker" << endl;
                break;
            case 5:
                cout << "Jeff Dean" << endl;
                break;
        }
    }
    return 0;
}
