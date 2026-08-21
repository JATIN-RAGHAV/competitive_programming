
#include <cstdio>
#include <set>
int main(){
    std::set<int> st{};
    auto it = st.begin();
    
    printf("equal: %d",it == st.end());
    fflush(stdout);

    it++;

    printf("Hello\n");
    fflush(stdout);
}
