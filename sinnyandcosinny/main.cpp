//Abel Anand
#include <iostream>
#include <vector>
#include <math.h>
#define _USE_MATH_DEFINES
using namespace std;
int main() {
    vector<float> sinev;
    vector<float> cosinev;
    for (float i = 0; i < 359; i++) {
        sinev.push_back(sin((i+1)*M_PI/180.0));
    }
    for (float i = 0; i < 359; i++) {
        cosinev.push_back(cos((i+1)*M_PI/180.0));
    }
    bool quit = false;
    while (!quit) {
        int choice;
        int num;
        cout << "Sine(1) or Cosine(1) or End(3)\n";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter the degree to find the Sine\n";
                cin >> num;
                cout << sinev.at(num + 1) << endl;
                break;
            case 2:
                cout << "Enter the degree to find the Cosine\n";
                cin >> num;
                cout << cosinev.at(num + 1) << endl;
            case 3:
                quit = true;
                break;
            default:
                cout << "I'm tired of you not entering a correct value\n";
        }
            }
}
