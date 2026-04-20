#include <iostream>
using namespace std;

void removePests(int &pestCount, int amount) { pestCount -= amount; }
void printCount(const string &label, const int &pestCount) {
    cout << label << ": " << pestCount << endl;
}
void inspectSource(const string &label, const int *source) {
    cout << label << ": " << *source << endl;
}
void sprayTrackedSource(int *const source, int amount) { *source -= amount; }

int main() {
    int ratCount = 12;
    int cockroachCount = 25;

    int *infestationSource = &ratCount;

    // 1. print both counts
    printCount("Rat", ratCount);
    printCount("Cockroach", cockroachCount);

    // 2. remove 3 rats
    removePests(ratCount, 3);

    // 3. inspect current source
    inspectSource("Client complain", infestationSource);

    // 4. spray current source by 4
    sprayTrackedSource(infestationSource, 4);

    // 5. move pointer to cockroachCount
    infestationSource = &cockroachCount;

    // 6. inspect again
    inspectSource("New complain", infestationSource);

    // 7. spray current source by 10
    sprayTrackedSource(infestationSource, 10);

    // 8. print final counts
    printCount("Rat", ratCount);
    printCount("Cockroach", cockroachCount);

    return 0;
}
