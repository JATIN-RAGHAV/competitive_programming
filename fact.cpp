#include <cmath>
#include <iostream>

bool is_prime(int i){
        int fact = 0;
        for(int x = 1;x<=std::sqrt(i);x++){
                if(!(i%x)){
                        fact++;
                        if(x != std::sqrt(i)){
                                fact++;
                        }
                }
        }
        return fact == 2;
}
int main(){
        int i = 2;
        long long p = 1;
        long long range = 1e18;
        while(p<range){
                if(is_prime(i)){
                        p *= i;
                }
                i++;
        }
        std::cout<<i<<"\n";
}
