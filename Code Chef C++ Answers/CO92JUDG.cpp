//
//  CO92JUDG.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 23/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int co92judg(){
    int iter;
    cin >> iter;
    for (int i = 0; i< iter; i++) {
        int n,ma,mb,flag = 0,temp = 0;
        vector<int> a,b;
        cin >> n;
        cin >> ma;
        a.push_back(ma);
        flag += ma;
        for (int j = 0; j <n-1; j++){
            int x;
            cin >> x;
            if(x>ma){
                ma = x;
            }
            a.push_back(x);
            flag += x;
        }
        cin >> mb;
        b.push_back(mb);
        temp += mb;
        for (int j = 0; j < n-1; j++){
            int x;
            cin >> x;
            if(x>mb){
                mb = x;
            }
            b.push_back(x);
            temp += x;
        }
        flag -= ma;
        temp -= mb;
        if(flag < temp){
            cout << "Alice" << endl;
        } else if(temp < flag){
            cout << "Bob" << endl;
        } else {
            cout << "Draw" << endl;
        }
    }
    return 0;
}
