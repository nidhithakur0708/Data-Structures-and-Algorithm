/*
C++ STL - Standard Template Library
1. Algorithms
2. Containers
3. Functions
4. Iterators

Topic Covered: Pairs (Utility Container)
*/

#include <bits/stdc++.h>
using namespace std;

void explainPair() {
    // ==========================================
    // 1. BASIC PAIR DECLARATION
    // ==========================================
    // Defines a single composite unit holding two values
    pair<int, int> a = {1, 3};
    
    // Access elements using .first and .second
    cout << "--- Basic Pair ---" << endl;
    cout << a.first << " " << a.second << endl; // Prints: 1 3
    cout << "\n";

    // ==========================================
    // 2. NESTED PAIRS
    // ==========================================
    // Stores more than two elements by embedding a pair inside a pair
    pair<int, pair<int, int>> p = {1, {3, 4}};
    
    cout << "--- Nested Pair ---" << endl;
    // p.first accesses 1
    // p.second.first accesses 3
    // p.second.second accesses 4
    cout << p.first << " " << p.second.second << " " << p.second.first << endl; // Prints: 1 4 3
    cout << "\n";

    // ==========================================
    // 3. ARRAY OF PAIRS
    // ==========================================
    // Useful for grouping coordinate pairs or connected data points together
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    
    cout << "--- Array of Pairs ---" << endl;
    // Access individual indices like a regular array, then use pair syntax
    cout << "Value at index 1 second element: " << arr[1].second << endl; // Prints: 5
    cout << "\n";
}

int main() {
    explainPair();
    return 0;
}
