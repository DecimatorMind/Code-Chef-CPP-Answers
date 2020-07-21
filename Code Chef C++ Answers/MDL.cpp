//
//  MDL.cpp
//  Code Chef C++ Answers
//
//  Created by Pranjal Bhardwaj on 15/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int mdl(){
    int iter;
    cin >> iter;
    for(int i = 0;i<iter;i++){
        int n,n1,n2,arr[2];
        cin >> n >> n1 >> n2;
        arr[0] = n1;
        arr[1] = n2;
        for(int j = 0;j < n-2;j++){
            int temp;
            cin >> temp;
            if((temp > arr[0] && temp < arr[1]) || (temp < arr[0] && temp > arr[1])){
                continue;
            } else {
                if(temp > arr[0] && temp > arr[1]){
                    if(arr[0]>arr[1]){
                        arr[0] = arr[1];
                        arr[1] = temp;
                    } else {
                        arr[1] = temp;
                    }
                } else {
                    if(arr[0] < arr[1]){
                        arr[0] = arr[1];
                        arr[1] = temp;
                    } else {
                        arr[1] = temp;
                    }
                }
            }
        }
        cout << arr[0] << " " << arr[1] << endl;
    }
    return 0;
}
