#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;
    while (t--) {
        long long n, a, b, c; // Total distance and distances per day
        cin >> n >> a >> b >> c;
        
        long long sum = a + b + c; // Total distance in 3 days
        long long complete_cycles = n / sum; // Number of full 3-day cycles
        long long total_covered = complete_cycles * sum; // Distance covered in full cycles
        
        int day = complete_cycles * 3; // Total days from full cycles
        
        // Check remaining distance after full cycles
        if (total_covered < n) {
            if (total_covered + a >= n) {
                day += 1;
            } else if (total_covered + a + b >= n) {
                day += 2;
            } else {
                day += 3;
            }
        }
        
        cout << day << endl; // Output the result
    }
    return 0;
}
