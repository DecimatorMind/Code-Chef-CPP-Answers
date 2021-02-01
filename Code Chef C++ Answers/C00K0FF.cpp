//
//  C00K0FF.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 31/01/21.
//  Copyright © 2021 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int a;
    cin >> a;
    while(a--){
        int b;
        cin >> b;
        bool cakewalk = false,easy = false,simple = false,medium = false,hard = false;
        while(b--){
            string c;
            cin >> c;
            if(c == "easy"){
                if(easy == false){
                    easy = true;
                } else {
                    continue;
                }
            }
            if (c == "simple"){
                if(simple == false){
                    simple = true;
                } else {
                    continue;
                }
            }
            if (c == "cakewalk"){
                if(cakewalk == false){
                    cakewalk = true;
                } else {
                    continue;
                }
            }
            if (c == "easy-medium" or c == "medium"){
                if(medium == false){
                    medium = true;
                } else {
                    continue;
                }
            }
            if (c == "medium-hard" or c == "hard"){
                if(hard == false){
                    hard = true;
                } else {
                    continue;
                }
            }
        }
        if(cakewalk and easy and simple and medium and hard){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
