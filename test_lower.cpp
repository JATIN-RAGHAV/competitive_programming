



#include<bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
        std::vector<int> a{1,2,3,3,3,4,5};
        auto lw = std::lower_bound(a.begin(),a.end(),3);
        auto up = std::upper_bound(a.begin(),a.end(),3);
        cout<<lw-a.begin()<<'\n';
        cout<<up-a.begin()<<'\n';
}
