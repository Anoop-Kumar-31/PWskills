#include <iostream>
#include <vector>

using namespace std;

// Function to display the towers
void displayTowers(const vector<char>& T1, const vector<char>& T2, const vector<char>& T3) {
    cout << "T1 ";
    for (char block : T1) {
        cout << block << " ";
    }
    cout << endl;

    cout << "T2 ";
    for (char block : T2) {
        cout << block << " ";
    }
    cout << endl;

    cout << "T3 ";
    for (char block : T3) {
        cout << block << " ";
    }
    cout << endl;
    cout << endl;
}

// Function to move a block from source tower to destination tower
void moveBlock(vector<char>& source, vector<char>& dest) {
    if (!source.empty()) {
        char block = source.back();
        if (dest.empty() || block < dest.back()) {
            dest.push_back(block);
            source.pop_back();
        } else {
            cout << "Invalid move! Blocks cannot be placed in descending order." << endl;
        }
    } else {
        cout << "Invalid move! Source tower is empty." << endl;
    }
}

int main() {
    vector<char> T1 = {'A', 'B', 'C'};
    vector<char> T2;
    vector<char> T3;

    displayTowers(T1, T2, T3);

    while (T3 != vector<char>{'A', 'B', 'C'}) {
        int source, dest;

        cout << "Enter source tower (1, 2, or 3): ";
        cin >> source;

        cout << "Enter destination tower (1, 2, or 3): ";
        cin >> dest;

        if (source < 1 || source > 3 || dest < 1 || dest > 3) {
            cout << "Invalid tower number! Please enter a valid tower number." << endl;
            continue;
        }

        switch (source) {
            case 1:
                moveBlock(T1, (dest == 2) ? T2 : T3);
                break;
            case 2:
                moveBlock(T2, (dest == 1) ? T1 : T3);
                break;
            case 3:
                moveBlock(T3, (dest == 1) ? T1 : T2);
                break;
        }

        displayTowers(T1, T2, T3);
    }

    cout << "Congratulations! You solved the Tower of Hanoi puzzle." << endl;

    return 0;
}