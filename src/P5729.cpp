#include <bits/stdc++.h>
int main() {
    int w, x, h, q;
    std::cin >> w >> x >> h >> q;

    // 初始化三维数组，表示每个小方块是否存在
    std::vector<std::vector<std::vector<bool>>> cube(w, std::vector<std::vector<bool>>(x, std::vector<bool>(h, true)));

    // 处理每次切割操作
    for (int i = 0; i < q; ++i) {
        int x1, y1, z1, x2, y2, z2;
        std::cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        for (int xi = x1 - 1; xi < x2; ++xi) {
            for (int yi = y1 - 1; yi < y2; ++yi) {
                for (int zi = z1 - 1; zi < z2; ++zi) {
                    cube[xi][yi][zi] = false;
                }
            }
        }
    }

    // 计算剩余的小方块数量
    int remaining = 0;
    for (int xi = 0; xi < w; ++xi) {
        for (int yi = 0; yi < x; ++yi) {
            for (int zi = 0; zi < h; ++zi) {
                if (cube[xi][yi][zi]) {
                    ++remaining;
                }
            }
        }
    }

    std::cout << remaining << std::endl;
    return 0;
}