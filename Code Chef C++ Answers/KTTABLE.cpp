//
//  KTTABLE.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 21/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int kttable(){
    int iter;
    cin >> iter;
    while(iter--){
        int n {},a {},result {};
        cin >> n;
        int temp[n], flag[n];
        for(int i = 0;i < n;i++){
            int x;
            cin >> x;
            temp[i] = x-a;
            a = x;
        }
        for(int i = 0;i < n;i++){
            int x;
            cin >> x;
            flag[i] = x;
        }
        for(int i = 0;i < n;i++){
            if(temp[i] >= flag[i]){
                result += 1;
            }
        }
        cout << result << endl;
    }
    return 0;
}
