#include <bits/stdc++.h>
using namespace std;

void explainVector() {
    // ==========================================
    // 1. INITIALIZATION & INSERTION
    // ==========================================
    vector<int> v;
    v.push_back(1);    // Adds 1 to the end
    v.emplace_back(2); // Faster element insertion at the end
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);    // Vector 'v' is now: {1, 2, 3, 4, 5}

    // ==========================================
    // 2. VECTOR OF PAIRS
    // ==========================================
    vector<pair<int, int>> v_pair;
    v_pair.push_back({1, 2});   // Normal pair insertion
    v_pair.emplace_back(1, 2);  // Implicitly creates the pair without curly braces

    // ==========================================
    // 3. ALTERNATIVE DECLARATIONS
    // ==========================================
    vector<int> v3(5, 100); // Creates {100, 100, 100, 100, 100}
    vector<int> v4(5);      // Creates {0, 0, 0, 0, 0} (Default initialised to 0)
    vector<int> v2(v3);     // Copies content of v3 into v2

    // ==========================================
    // 4. PRINTING / ITERATORS
    // ==========================================
    // Printing using a classic iterator loop
    cout << "--- Printing v using iterators ---" << endl;
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    cout << "\n\n";

    // Printing a vector of pairs using range-based loop
    cout << "--- Printing v_pair ---" << endl;
    for (auto it : v_pair) {
        cout << "{" << it.first << ", " << it.second << "} ";
    }
    cout << "\n\n";

    // ==========================================
    // 5. DELETION (ERASE)
    // ==========================================
    cout << "--- Deleting from v ---" << endl;
    // v is originally: {1, 2, 3, 4, 5}
    v.erase(v.begin() + 1); // Deletes element at index 1 (the '2') -> {1, 3, 4, 5}

    // Erase a range: [start, end) -> Deletes index 1 and index 2
    v.erase(v.begin() + 1, v.begin() + 3); // Removes '3' and '4' -> Final v: {1, 5}
    
    for (auto it : v) {
        cout << it << " ";
    }
    cout << "\n\n";

    // ==========================================
    // 6. INSERTION AT SPECIFIC POSITIONS
    // ==========================================
    cout << "--- Inserting into vi ---" << endl;
    vector<int> vi(2, 100);           // Initial vi: {100, 100}
    vi.insert(vi.begin(), 300);       // Inserts 300 at start -> {300, 100, 100}
    vi.insert(vi.begin() + 1, 2, 10); // Inserts two 10s at index 1 -> {300, 10, 10, 100, 100}

    for (auto it : vi) {
        cout << it << " ";
    }
    cout << "\n\n";

    // ==========================================
    // 7. SIZE & POP_BACK
    // ==========================================
    cout << "--- Size and Pop Back ---" << endl;
    cout << "Size of vi vector is: " << vi.size() << endl; // Prints 5

    // vi is currently: {300, 10, 10, 100, 100}
    vi.pop_back(); // Removes the very last element (the last 100)

    for (auto it : vi) {
        cout << it << " "; // Prints: 300 10 10 100
    }
    cout << endl;
}

int main() {
    explainVector();
    return 0;
}
