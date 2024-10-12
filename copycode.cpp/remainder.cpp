//using remainder and typing type coversion
#include <iostream>
#include <cmath> // For ceil function
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N, X; // Group size and cost per subscription
        cin >> N >> X;

        // Calculate the number of subscriptions needed
        int subscriptions = ceil(static_cast<double>(N) / 6);

        // Calculate the total cost
        int total_cost = subscriptions * X;

        cout << total_cost << endl;
    }

    return 0;
}
