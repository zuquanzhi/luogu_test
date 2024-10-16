#include <bits/stdc++.h>
using namespace std;

// 旋转 90 度
vector<vector<int>> rotate90(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    vector<vector<int>> result(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            result[j][n - 1 - i] = matrix[i][j];
        }
    }
    return result;
}

// 旋转 180 度
vector<vector<int>> rotate180(const vector<vector<int>>& matrix) {
    return rotate90(rotate90(matrix));
}

// 旋转 270 度
vector<vector<int>> rotate270(const vector<vector<int>>& matrix) {
    return rotate90(rotate180(matrix));
}

// 水平翻转
vector<vector<int>> reflect(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    vector<vector<int>> result(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            result[i][n - 1 - j] = matrix[i][j];
        }
    }
    return result;
}

// 比较两个矩阵是否相等
bool is_equal(const vector<vector<int>>& matrix1, const vector<vector<int>>& matrix2) {
    int n = matrix1.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix1[i][j] != matrix2[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> original(n, vector<int>(n));
    vector<vector<int>> target(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> original[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> target[i][j];
        }
    }

    if (is_equal(rotate90(original), target)) {
        cout << 1 << endl;
    } else if (is_equal(rotate180(original), target)) {
        cout << 2 << endl;
    } else if (is_equal(rotate270(original), target)) {
        cout << 3 << endl;
    } else if (is_equal(reflect(original), target)) {
        cout << 4 << endl;
    } else if (is_equal(rotate90(reflect(original)), target) ||
               is_equal(rotate180(reflect(original)), target) ||
               is_equal(rotate270(reflect(original)), target)) {
        cout << 5 << endl;
    } else if (is_equal(original, target)) {
        cout << 6 << endl;
    } else {
        cout << 7 << endl;
    }

    return 0;
}