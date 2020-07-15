//
//  GIFTSRC.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 14/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int giftsrc(){
    int iter;
    cin >> iter;
    for(int i = 0;i<iter;i++){
        int n,x = 0,y = 0,temp = 2;
        cin >> n;
        for(int j = 0;j < n;j++){
            char c;
            cin >> c;
            switch(c){
                case 'L':
                    if(temp != 1){
                        x -= 1;
                        temp = 1;
                    }
                    break;
                case 'R':
                    if(temp != 1){
                        x += 1;
                        temp = 1;
                    }
                    break;
                case 'U':
                    if(temp != 0){
                        y += 1;
                        temp = 0;
                    }
                    break;
                case 'D':
                    if(temp != 0){
                        y -= 1;
                        temp = 0;
                    }
                    break;
            }
        }
        cout << x << " " << y << endl;
    }
    return 0;
}
