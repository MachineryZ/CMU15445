#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include <algorithm>
int main() {
    // Map of string & int i.e. words as key & there
    // occurrence count as values
    std::map<std::string, int> wordMap = {
            { "is", 6 }, { "the", 5 },
            { "hat", 9 }, { "at", 6 }
                                        };
    // Create an iterator of map
    std::map<std::string, int>::iterator it;
    // Find the element with key 'hat'
    it = wordMap.find("hat");
    // Check if element exists in map or not
    if (it != wordMap.end()) {
        // Element with key 'hat' found
        std::cout << "'hat' Found" << std::endl;
        // Access the Key from iterator
        std::string key = it->first;
        // Access the Value from iterator
        int value = it->second;
        std::cout << "key = " << key << " :: Value = " << value << std::endl;
    } else {
        // Element with key 'hat' Not Found
        std::cout << "'hat' Not Found" << std::endl;
    }
    // Find the element with key 'hello'
    it = wordMap.find("hello");
    // Check if element exists in map or not
    if (it != wordMap.end()) {
        // Element with key 'hello' found
        std::cout << "'hello' Found" << std::endl;
        // Access the Key from iterator
        std::string key = it->first;
        // Access the Value from iterator
        int value = it->second;
        std::cout << "key = " << key << " :: Value = " << key << std::endl;
    } else {
        // Element with key 'hello' Not Found
        std::cout << "'hello' Not Found" << std::endl;
    }
    return 0;
}

// g++ -std=c++11 cpp_example.cpp