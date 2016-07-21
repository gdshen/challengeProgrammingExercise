//
// Created by Guodong Shen on 7/21/16.
//

#include <iostream>
#include <vector>

using namespace std;

int fact(int n) {
    if (n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int MAX_N = 50;
vector<int> memo((unsigned long) (MAX_N + 1), 0);

int fibNonRecursive(int n) {
    if (n <= 1) return n;
    if (memo[n] == 0) {
        memo[n] = fibNonRecursive(n - 1) + fibNonRecursive(n - 2);
    }
    return memo[n];

}

int main() {
    cout << fact(4) << endl;
    cout << fib(5) << endl;
    cout << fib(5) << endl;
    cout << fibNonRecursive(5) << endl;
    cout << fibNonRecursive(6) << endl;
    cout << "Hello, world\n";
}