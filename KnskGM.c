#include <stdio.h>
#include <stdlib.h>

// Structure to represent items
struct Item {
    int value;
    int weight;
};

// Function to compare items based on value-to-weight ratio
int compare(const void *a, const void *b) {
    double ratioA = (double)(((struct Item*)a)->value) / (((struct Item*)a)->weight);
    double ratioB = (double)(((struct Item*)b)->value) / (((struct Item*)b)->weight);
    return ratioB > ratioA ? 1 : -1;
}

// Greedy function to solve Knapsack problem
double knapsackGreedy(int capacity, struct Item items[], int n) {
    // Sort items based on value-to-weight ratio
    qsort(items, n, sizeof(items[0]), compare);

    double totalValue = 0.0;
    int currentWeight = 0;

    // Iterate through sorted items
    for (int i = 0; i < n; i++) {
        if (currentWeight + items[i].weight <= capacity) {
            // Include the whole item if it fits
            currentWeight += items[i].weight;
            totalValue += items[i].value;
        } else {
            // Include a fraction of the item if it doesn't fit completely
            double remainingWeight = capacity - currentWeight;
            totalValue += (remainingWeight / items[i].weight) * items[i].value;
            break;
        }
    }

    return totalValue;
}

int main() {
    struct Item items[] = {{60, 10}, {100, 20}, {120, 30}};
    int n = sizeof(items) / sizeof(items[0]);
    int capacity = 50;

    double result = knapsackGreedy(capacity, items, n);

    printf("Maximum value in Knapsack = %lf\n", result);

    return 0;
}
