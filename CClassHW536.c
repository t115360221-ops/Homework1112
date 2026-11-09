#include <stdio.h>

// 河內塔遞迴函式
// n: 圓盤數量, from: 起始柱, to: 目標柱, aux: 暫存過渡柱
void hanoi(int n, int from, int to, int aux) {
    // 終止條件 (Base Case)：只剩下 1 個圓盤時直接搬
    if (n == 1) {
        printf("%d -> %d\n", from, to);
        return;
    }

    // 1. 將上面的 n-1 個圓盤從 from 搬到 aux (借用 to)
    hanoi(n - 1, from, aux, to);

    // 2. 搬動最底下最大的第 n 個圓盤
    printf("%d -> %d\n", from, to);

    // 3. 將在 aux 上的 n-1 個圓盤搬到 to (借用 from)
    hanoi(n - 1, aux, to, from);
}

int main() {
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    printf("The sequence of moves involved in the Tower of Hanoi are:\n");
    hanoi(n, 1, 3, 2);

    return 0;
}
