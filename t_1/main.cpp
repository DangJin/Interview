#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int k = 0; k < n; ++k) {
        int w, h;
        cin >> w >> h;
        //验证输入数据的合法性
        int pic_arr[w][h];
        for (int i = 0; i < w; ++i) {
            for (int j = 0; j < h; ++j) {
                cin >> pic_arr[i][j];
            }
        }

        //正向置零
        for (int i = 0; i < w; ++i) {
            for (int j = 0; j < h; ++j) {
                if (pic_arr[i][j] != 0) {       /// 置零
                    pic_arr[i][j] = 0;
                } else if (pic_arr[i][j] == 0) {    /// 停止置零
                    break;
                }
            }
        }

        //逆向置零
        for (int i = w - 1; i >= 0; i--) {
            for (int j = h - 1; j >= 0; j--) {
                if (pic_arr[i][j] != 0) {       /// 置零
                    pic_arr[i][j] = 0;
                } else if (pic_arr[i][j] == 0) {    /// 停止置零
                    break;
                }
            }
        }

        for (int i = 0; i < w; ++i) {
            for (int j = 0; j < h; ++j) {
                cout << pic_arr[i][j];
            }

            cout << "\n";
        }
    }
    return 0;
}