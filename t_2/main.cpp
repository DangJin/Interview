#include <iostream>
#include <algorithm>

using namespace std;
typedef struct {
    int start_time;
    int end_time;
} schedule;

bool cmp(schedule x, schedule y) {
    if (x.end_time == y.end_time)
        return x.start_time > y.start_time;
    else return x.end_time < y.end_time;
}

int main() {
    int m;
    cin >> m;
    for (int j = 0; j < m; ++j) {
        int n;
        int count = 1;
        cin >> n;
        schedule sche_list[n];
        sort(sche_list, sche_list + n, cmp);//按照活动先后顺序排序
        for (int i = 0; i < n; ++i) {
            cin >> sche_list[i].start_time >> sche_list[i].end_time;
        }

        for (int i = 0; i < n; ++i) {
            if (sche_list[i + 1].start_time > sche_list[i].end_time) {//下一个的开始时间和上一个的结束时间比较
                count++;
            }
        }

        cout << count;

    }
    return 0;
}
