#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n, dice[6] = {0};
    srand(unsigned(time(NULL)));
    for (int counter = 1; counter <= 6000000; counter++) {
        n = 1 + rand() % 6;
        if (n == 1) {
              dice[0]++;
        }
        if (n == 2) {
              dice[1]++;
              }
        if (n == 3) {
              dice[2]++;
              }
        if (n == 4) {
              dice[3]++;
              }
        if (n == 5) {
              dice[4]++;
              }
        if (n == 6) {
              dice[5]++;
              }
              }
        cout << "There are " << dice[0] << " one rolls.\n";
        cout << "There are " << dice[1] << " two rolls.\n";
        cout << "There are " << dice[2] << " three rolls.\n";
        cout << "There are " << dice[3] << " four rolls.\n";
        cout << "There are " << dice[4] << " five rolls.\n";
        cout << "There are " << dice[5] << " six rolls.\n";

        system("pause");
        return 0;
        }

