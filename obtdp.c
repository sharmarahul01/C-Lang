#include <stdio.h>
#include <limits.h>

// Function to calculate the sum of frequencies in a given range
int sum(int freq[], int i, int j);

// Function to find the minimum cost of constructing a binary search tree
int optimalBST(int keys[], int freq[], int n) {
    int cost[n][n];

    // Initialize the cost matrix
    for (int i = 0; i < n; i++)
        cost[i][i] = freq[i];

    // Fill the cost matrix
    for (int L = 2; L <= n; L++) {
        for (int i = 0; i <= n - L + 1; i++) {
            int j = i + L - 1;
            cost[i][j] = INT_MAX;

            for (int r = i; r <= j; r++) {
                int c = ((r > i) ? cost[i][r - 1] : 0) +
                        ((r < j) ? cost[r + 1][j] : 0) +
                        sum(freq, i, j);

                if (c < cost[i][j])
                    cost[i][j] = c;
            }
        }
    }

    return cost[0][n - 1];
}

// Function to calculate the sum of frequencies in a given range
int sum(int freq[], int i, int j) {
    int s = 0;
    for (int k = i; k <= j; k++)
        s += freq[k];
    return s;
}

int main() {
    int keys[] = {10, 12, 16, 21};
    int freq[] = {4, 2, 6, 3};
    int n = sizeof(keys) / sizeof(keys[0]);

    printf("Cost of Optimal BST is %d", optimalBST(keys, freq, n));

    return 0;
}
