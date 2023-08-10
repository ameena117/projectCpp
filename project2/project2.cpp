#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countNotStartA(const string& file) {
    ifstream inputFile(file);
    if (!inputFile.is_open()) {
        cerr << "Failed to open the file." << endl;
        return -1;
    }

    string line;
    int count = 0;

    while (getline(inputFile, line)) {
        if ( line[0] != 'A') {
            count++;
        }
    }

    inputFile.close();
    return count;
}

int main() {
    string file = "STORY.txt";
    cout << countNotStartA(file) << endl;
    return 0;
}
