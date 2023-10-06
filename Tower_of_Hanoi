#include <iostream>
using namespace std;

class TowerOfHanoi {
public:
    TowerOfHanoi(int numDisks) {
        this->numDisks = numDisks;
    }

    void solve() {
        moveTower(numDisks, 'A', 'C', 'B');
    }

private:
    int numDisks;

    void moveTower(int disks, char source, char destination, char auxiliary) {
        if (disks == 1) {
            cout << "Move disk 1 from " << source << " to " << destination << endl;
            return;
        }

        moveTower(disks - 1, source, auxiliary, destination);
        cout << "Move disk " << disks << " from " << source << " to " << destination << endl;
        moveTower(disks - 1, auxiliary, destination, source);
    }
};

int main() {
    int numDisks;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Welcome to the Tower of Hanoi"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout << "Enter the number of disks: ";
    cin >> numDisks;

    TowerOfHanoi toh(numDisks);
    toh.solve();

    return 0;
}
