/*
    sum_avg.c : Calculates sum and average from given values
    Kyriakos, 9/9/2022
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int val_num;    // Holds number of user values
    float sum;
    float average;

    // Asks user to give number of values and the values
    printf("Give the number of values: ");
    scanf("%d", &val_num);
    if(val_num <= 0) {
        fprintf(stderr, "Error: Zero or negative number\n");
        exit(1);
    }
    float values[val_num];
    for(int i = 0; i < val_num; i++) {
        printf("Give value %d: ", i+1);
        scanf("%f", &values[i]);
    }

    // Displays the given values
    printf("You gave %d values: ", val_num);
    for(int i = 0; i < val_num; i++) {
        printf("%.1f ", values[i]);
    }
    printf("\n");

    // Sum calculation
    sum = 0;
    for(int i = 0; i < val_num; i++) {
        sum += values[i];
    }
    printf("Sum: %.1f\n", sum);

    // Average calculation
    average = sum / val_num;
    printf("Average: %.1f\n", average);

    return 0;
}
