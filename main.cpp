#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string line;
    if (getline(cin, line)) {
        stringstream ss(line);
        vector<int> nums;
        int num;
        int max_val = 0;

        while (ss >> num) {
            nums.push_back(num);
            if (num > max_val) {
                max_val = num;
            }
        }

        for (int x : nums) {
            int spaces = max_val - x;
            cout << string(spaces, ' ') << string(x, '*') << endl;
        }
    }
    return 0;
}