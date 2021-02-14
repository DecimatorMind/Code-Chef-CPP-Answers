//
//  main.cpp
//  Test
//
//  Created by Pranjal Bhardwaj on 12/02/21.
//

#include <iostream>
using namespace std;

int calc(int temp[],int a){
    int max = -1,index = 0;
    for(int i = 0;i < a;i++){
        if(temp[i] > max){
            max = temp[i];
            index = i;
        }
    }
    return index;
}

int find(int n,int flag[],int a){
    int min = 9999999, mark = 0;
    for(int i = 0;i < a;i++){
        if(flag[i] - n >= 0 && (flag[i] - n) < min){
            min = flag[i] - n;
            mark = i;
        }
    }
    return mark;
}

int comprog1(){
    int a,b;
    cin >> a >> b;
    int temp[a];
    for(int i = 0;i < a;i++){
        cin >> temp[i];
    }
    int flag[a],result = 0;
    for(int i = 0;i < a;i++){
        flag[i] = i+ b + 1;
    }
    for(int i = 0; i < a;i++){
        int n = calc(temp,a);
        int m = find(n +1,flag,a);
        result += (flag[m]-(n+1))*temp[n];
        temp[n] = -1;
        flag[m] = 999999;
    }
    cout << result << endl;
    return 0;
}
