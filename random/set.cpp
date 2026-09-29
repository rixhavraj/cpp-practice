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

/*
In C++, a set is a container that stores unique elements automatically sorted in ascending order.  To iterate through a set, the most common and modern approach is using a range-based for loop, which simplifies syntax by eliminating the need for manual iterator management. 

Range-Based For Loop Example
This method is preferred for its readability and safety, as it automatically handles the iteration from the beginning to the end of the container. 
*/