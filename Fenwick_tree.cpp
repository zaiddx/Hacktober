// including necessary header files.
#include <bits/stdc++.h>
using namespace std;

// Template for fenwick tree.
template <typename T>
struct fenwick_tree {
    using F = std::function<T(T, T)>;
    int n;
    F f;
    std::vector<T> bit;

    // Constructor to assign space for tree.
    fenwick_tree(int n, F f = std::plus<T> ()) : n(n), f(f) {
        bit.assign(n + 1, 0);
    }

    // Utility function to update fenwick tree with values.
    void update(int idx, T value) {
        for (; idx < n; idx |= (idx + 1))
            bit[idx] = f(bit[idx], value);
    }

    // Utility function to compute answer for queries.
    T compute(int r) {
        T ans = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ans = f(ans, bit[r]);

        return ans;
    }
};

// Driver code.
int main() {
    // Uncomment the commented lines to get custom input.
    int n = 10;
    // cin >> n;
    int a[n];
    for(int i = 0 ; i < n; i++) {
        a[i] = i + 1;
        // cin >> a[i];
    }

    // The following lines of code creates a fenwick tree for sum queries.
    // min/max functions can be passed as a second optional parameter, to create
    // min/max fenwick trees respectively.
    fenwick_tree<int> ft_sum(n);
    for(int i = 0; i < n; i++) {
        ft_sum.update(i, a[i]);
    }

    // Fenwick trees can be used to compute sum/min/max queries from 0 to i
    // for any 0 <= i <= n - 1 (0 based indexing) in O(logn) time.
    cout << "sum query " << ft_sum.compute(n - 1) << '\n';

    return 0;
}