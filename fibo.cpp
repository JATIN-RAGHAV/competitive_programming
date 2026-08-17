
#include <iostream>
#include <vector>
int main(){
    int arr[3]{0,1,0};
    std::vector<int> res;
    int c = 2;
    while(res.size()<5){
        arr[c%3] = arr[(c-1)%3] + arr[(c-2)%3];
        if(arr[c%3]%3==0){
            res.push_back(arr[c%3]);
        }
        c++;
    }
    for(int x:res){
        std::cout<<x<<" ";
    }
    std::cout<<std::endl;
    return 0;
}
