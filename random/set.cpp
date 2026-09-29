#include <iostream>
#include <set>

int main() {
    std::set<int> my_set = {10, 20, 20, 30}; // Duplicates ignored
    my_set.insert(40);

    for (int num : my_set) {
        std::cout << num << " "; // Output: 10 20 30 40
    }
    return 0;
}   