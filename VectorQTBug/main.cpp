#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    int searchValue = 35;

    auto it = std::lower_bound(vec.begin(), vec.end(), searchValue);

    // Check if iterator is valid before dereferencing
    if (it != vec.end() && *it == searchValue) {
        std::cout << "Found value: " << *it << "\n";
    } else {
        std::cout << "Value not found. Inserting " << searchValue << " at position.\n";
        vec.insert(it, searchValue);
    }

    for (int val : vec)
        std::cout << val << " ";
    std::cout << "\n";

    return 0;
}


// #include <iostream>
// #include <vector>
// #include <algorithm>

// int main() {
//     std::vector<int> programRefs = {10, 20, 30};
//     int shaderPeerId = 40;

//     // lower_bound returns iterator to first element >= shaderPeerId
//     auto it = std::lower_bound(programRefs.begin(), programRefs.end(), shaderPeerId);

//
//     std::cout << "Found: " << *it << std::endl;

//     return 0;
// }
