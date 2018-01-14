#include <bits/stdc++.h>
using namespace std;

//Implement Function For Recursive solution

int recursiveKnapsack(int knapsack_weight[], int knapsack_value[], int n, int weight)
{
    int total_weight = 0;
    int total_value = 0;
    int temp1, temp2;

    if (n < 0 || weight <= 0)
    {
        total_value = 0;
    }
    else if (knapsack_weight[n] > weight)
    {
        total_value = recursiveKnapsack(knapsack_weight, knapsack_value, n - 1, weight);
    }
    else
    {
        temp1 = knapsack_value[n] + recursiveKnapsack(knapsack_weight, knapsack_value, n - 1, weight-knapsack_weight[n]);
        temp2 = recursiveKnapsack(knapsack_weight, knapsack_value, n - 1, weight);
        total_value = max(temp1, temp2);
    }
    return total_value;
}

int main()
{

    //Knapsack is a 2-d array consisting of weight and value
    int n, weight;
    cout << "Enter the size of knapsack" << endl;
    cin >> n;

    cout << "Enter the carrying capacity of knapsack" << endl;
    cin >> weight;

    int knapsack_weight[n], knapsack_value[n];
    cout << "Enter the weight and value of items" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> knapsack_weight[i] >> knapsack_value[i];
    }
    cout << "Maximum value : " << recursiveKnapsack(knapsack_weight, knapsack_value, n - 1, weight);
}