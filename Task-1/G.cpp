#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    int count = 0;

    for (int i = 0; i < h; i++) {
        string s;
        cin >> s;

        for (int j = 0; j < w; j++) {
            if (s[j] == 'o') {
                if (count == 0) {
                    x1 = i;
                    y1 = j;
                }
                else {
                    x2 = i;
                    y2 = j;
                }
                count++;
            }
        }
    }

    cout << abs(x1 - x2) + abs(y1 - y2);

    return 0;
}