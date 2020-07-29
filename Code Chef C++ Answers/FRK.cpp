//
//  FRK.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 24/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int frk(){
    int iter,result = 0;
    cin >> iter;
    for(int i = 0;i<iter;i++){
        string s;
        cin >> s;
        for(int j = 0;j < s.size()-1;j++){
            if(s[j] == 'c' && s[j+1] == 'h'){
                result += 1;
                break;
            } else if(s[j] == 'h' && s[j+1] == 'e'){
                result += 1;
                break;
            } else if(s[j] == 'e' && s[j+1] == 'f'){
                result += 1;
                break;
            }
        }
    }
    cout << result << endl;
    return 0;
}
