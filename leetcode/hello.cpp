#include <bits/stdc++.h>
using namespace std;


int minimumCost(vector<int>& nums, int k) {
    int M = 1e9+7;
    long long cc{};
    int cr{k};
    for(int c : nums){
        if(cr < c){
            int times = (cr - c + k - 1)/k;
            cc += times;
            cr += k*times;
        }
        cr-=c;
    }
    return cc*(cc+1)/2;
}

int main(){
}

