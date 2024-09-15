#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;  // number of test cases
    cin >> t;

    while (t--) {
        int n;  // number of rows
        cin >> n;
        vector<int> result;

        for (int i = 0; i < n; i++) {
            string row;
            cin >> row;  // input the row as a string

            // Find the column where the '#' appears (0-based index, so add 1 for 1-based)
            for (int j = 0; j < 4; j++) {
                if (row[j] == '#') {
                    result.push_back(j + 1);  // store the 1-based index of the column
                    break;
                }
            }
        }

        // Output the result in reverse order (from bottommost to topmost)
        for (int i = result.size() - 1; i >= 0; i--) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

