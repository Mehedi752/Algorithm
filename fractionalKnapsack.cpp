#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int value, weight;
    double valuePerWeight;
};

bool compare(Item a, Item b) {
    return a.valuePerWeight > b.valuePerWeight;
}

double fractionalKnapsack(int W, vector<int> &weights, vector<int> &values) {
    int n = weights.size();
    vector<Item> items(n);

    for (int i = 0; i < n; i++) {
        items[i] = {values[i], weights[i], (double)values[i] / weights[i]};
    }

    sort(items.begin(), items.end(), compare);

    double maxValue = 0.0;

    for (const auto &item : items) {
        if (W >= item.weight) {
            maxValue += item.value;
            W -= item.weight;
        } else {
            maxValue += item.valuePerWeight * W;
            break;
        }
    }

    return maxValue;
}

int main() {
    vector<int> values = {60, 100, 120};
    vector<int> weights = {10, 20, 30};
    int W = 50;

    cout << "Maximum value in knapsack: " << fractionalKnapsack(W, weights, values) << endl;

    return 0;
}
