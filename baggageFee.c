#include <stdio.h>

//define the function here
int baggage() {
    int weight;
    int cost = 0;

    scanf("%d", &weight);

    if (weight > 23) {
        cost = (weight - 23) * 12;
    }

    printf("%d", cost);
    return cost;
}
int main() {
    baggage();

    return 0;
}