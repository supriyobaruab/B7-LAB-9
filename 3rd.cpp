#include <iostream>
using namespace std;
void findMinimumNotes(int amount) {
    int notes[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int noteCount[10] = {0};
    for (int i = 0; i < 10; i++) {
        if (amount >= notes[i]) {
            noteCount[i] = amount / notes[i];
            amount -= noteCount[i] * notes[i];
            }
    }
    cout << "Minimum number of notes required: " << endl;
    for (int i = 0; i < 10; i++) {
            if (noteCount[i] != 0) {
            cout << notes[i] << " taka: " << noteCount[i] << endl;


            }
        }

    cout <<"Address of notes "<<" " <<&notes << endl;
    cout <<"Address of noteCount "<<" " <<&noteCount << endl;
}
    int main() {
        int amount = 1586;
        cout << "Amount: " << amount << " taka" << endl;
        findMinimumNotes(amount);
        cout <<"Address of Amount "<<" " <<&amount << endl;
        return 0;
    }
