#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5; // 定义最大数组大小

struct node {
    int head; // 朝向，0表示朝内，1表示朝外
    string name; // 职业名称
} a[MAXN]; // 定义结构体数组

int n, m, x, y;

int main() {
    cin >> n >> m; // 输入玩具小人数量和指令数量

    // 输入每个玩具小人的信息
    for (int i = 0; i < n; i++) {
        cin >> a[i].head >> a[i].name;
    }

    int now = 0; // 当前所在位置

    // 依次处理每条指令
    for (int i = 0; i < m; i++) {
        cin >> x >> y; // 输入指令信息

        // 根据当前玩具小人的朝向和指令，更新当前位置
        if (a[now].head == 0) { // 若朝向圈内
            if (x == 0) { // 向左数
                now = (now - y + n) % n; // 更新当前位置
            } else { // 向右数
                now = (now + y) % n; // 更新当前位置
            }
        } else { // 若朝向圈外
            if (x == 0) { // 向左数
                now = (now + y) % n; // 更新当前位置
            } else { // 向右数
                now = (now - y + n) % n; // 更新当前位置
            }
        }
    }

    // 输出最终所在位置的玩具小人的职业名称
    cout << a[now].name << endl;

    return 0;
}
