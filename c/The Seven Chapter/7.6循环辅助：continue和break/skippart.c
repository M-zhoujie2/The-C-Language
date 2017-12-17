//
// Created by zhoujie on 2017/12/17.
//

//程序清单7.9 skippart.c 程序
//skippart.c -- 使用continue跳过部分循环
#include <stdio.h>
#include <stdlib.h>
int main (void) {
    const float MIN = 0.0F;
    const float MAX = 100.0f;

    float score;
    float total = 0.0f;
    int n = 0;
    float min = MAX;
    float max = MIN;

    printf("Enter the first score (q to quit): ");
    while (scanf("%f", &score) == 1) {
        if (score < MIN || score > MAX) {
            printf("%0.1f is an invalid value. Try again: ", score);
            continue; //跳转至while循环的测试条件
        }
        printf("Accepting %0.1f:\n", score);
        min = (score < min) ? score : min;
        max = (score > max) ? score : max;
        total += score;
        n++;
        printf("Enter next score (q to quit): ");
    }
    if (n > 0) {
        printf("Average of %d scores is %0.1f.\n", n, total / n);
        printf("Low = %0.1f, high = %0.1f\n", min, max);
    }
    else
        printf("No valid scores were entered.\n");
    return EXIT_SUCCESS;
}
