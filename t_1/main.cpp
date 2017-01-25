#include <iostream>

using namespace std;
int main() {
    int w, h;
    cin >> w >> h;
    int pic_arr[w][h];
    for (int i = 0; i < w; ++i) {
        for (int j = 0; j < h; ++j) {
            cin >> pic_arr[i][j];
        }
    }

    for (int i = 0; i < w; ++i) {
        for (int j = 0; j < h; ++j) {
            cout << pic_arr[i][j];
        }
        cout << "\n";
    }
    return 0;
}