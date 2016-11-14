//
//  main.cpp
//  Numbers WIthout Consecutive 1s in binary representation
//
//  Created by Zijian Xie on 2016/11/13.
//  Copyright © 2016年 Jason Xie. All rights reserved.

//  Given a number n, find total number of numbers from 0 to 2^n-1 which do not have consecutive 1s in their binary representation.

#include <iostream>
#include <vector>
using namespace std;
//fibonacci problem
//分析为什么这个地方f(n) = f(n-1) + f(n-2)
// 比如我们已经产生到了n-2, n-1，对于n，首先我们多出来的那位要么是0，要么是1，如果加0，对于n-1的数，随便加一个0都可以，所以有f(n-1)，对于加1，就必须多带一个0进来来隔离，也就是多加2位，所以是f(n-2)
int dp(int n){
    if(n == 1) return 2;
    if(n == 2) return 3;
    int a = 2, b = 3;
    int k = n - 2;
    while(k){
        int cur = a + b;
        a = b;
        b = cur;
        k--;
    }
    return b;
}


int main(){
    int n = 4;
    cout<<dp(n)<<endl;
    return 0;
}
