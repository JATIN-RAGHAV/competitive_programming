#include <bits/stdc++.h>
using namespace std;

string play(multiset<long long>& A, multiset<long long> &B) {
        bool aliceTurn = true;
        while (!A.empty() && !B.empty()) {

                if (aliceTurn) {
                        long long x = *A.rbegin();
                        long long y = *B.rbegin();
                        B.erase(B.find(y));
                        if (y > x) {
                                B.insert(y - x);
                        }

                        if (B.empty()) return "Alice";
                } 
                else {
                        long long x = *B.rbegin();
                        long long y = *A.rbegin();

                        A.erase(A.find(y));
                        if (y > x) {
                                A.insert(y - x);
                        }

                        if (A.empty()) return "Bob";
                }
                aliceTurn = !aliceTurn;
        }
        return "";
}

int main() {
        int t;
        cin >> t;
        while (t--) {
                int n, m;
                cin >> n >> m;

                multiset<long long> A, B;
                long long x;

                for (int i = 0; i < n; i++) {
                        cin >> x;
                        A.insert(x);
                }

                for (int i = 0; i < m; i++) {
                        cin >> x;
                        B.insert(x);
                }

                cout << play(A, B) << "\n";
        }
        return 0;
}
