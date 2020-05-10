#include <iostream>
using namespace std;

int main() {
    double epsilon = 1;
    while (true) {
        if (epsilon + 1 <= 1) {break;}
        epsilon = epsilon / (double)2;
    }
    epsilon = epsilon * 2;
    cout << "Calculated epsilon value: " << epsilon << endl;
    return 0;
}
