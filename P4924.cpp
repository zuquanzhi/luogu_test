#include <bits/stdc++.h>
using namespace std;

// 顺时针旋转矩阵
void rotateClockwise(vector<vector<int>>& matrix, int x, int y, int r) {
    // 计算子矩阵大小
    int n = 2 * r + 1;
    // 创建一个临时矩阵用于存储旋转后的子矩阵
    vector<vector<int>> subMatrix(n, vector<int>(n));
    // 将原矩阵中以(x, y)为中心、大小为(2r+1)x(2r+1)的子矩阵顺时针旋转90度存储到临时矩阵中
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            subMatrix[j][n - i - 1] = matrix[x - r + i][y - r + j];
        }
    }
    // 将旋转后的子矩阵重新存回原矩阵中
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[x - r + i][y - r + j] = subMatrix[i][j];
        }
    }
}

// 逆时针旋转矩阵
void rotateCounterClockwise(vector<vector<int>>& matrix, int x, int y, int r) {
    // 计算子矩阵大小
    int n = 2 * r + 1;
    // 创建一个临时矩阵用于存储旋转后的子矩阵
    vector<vector<int>> subMatrix(n, vector<int>(n));
    // 将原矩阵中以(x, y)为中心、大小为(2r+1)x(2r+1)的子矩阵逆时针旋转90度存储到临时矩阵中
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            subMatrix[n - j - 1][i] = matrix[x - r + i][y - r + j];
        }
    }
    // 将旋转后的子矩阵重新存回原矩阵中
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[x - r + i][y - r + j] = subMatrix[i][j];
        }
    }
}

int main() {
    int n, m;
    // 输入方阵大小n和魔法施放次数m
    cin >> n >> m;
    // 创建一个大小为(n+1)x(n+1)的矩阵，并初始化为从1到n^2的连续整数
    vector<vector<int>> matrix(n + 1, vector<int>(n + 1));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            matrix[i][j] = (i - 1) * n + j;
        }
    }
    // 循环处理每次魔法施放
    for (int i = 0; i < m; ++i) {
        int x, y, r, z;
        // 输入施放位置(x, y)、施放半径r和旋转方向z
        cin >> x >> y >> r >> z;
        // 根据旋转方向调用不同的旋转函数
        if (z == 0) {
            rotateClockwise(matrix, x, y, r);
        } else {
            rotateCounterClockwise(matrix, x, y, r);
        }
    }
    // 输出旋转后的矩阵
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
