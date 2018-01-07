//
// Created by zhoujie on 2017/12/26.
//

//程序清单12.1 hiding.c 程序
//hiding,c -- 块中的变量
#include <stdio.h>
#include <stdlib.h>
int main () {
    int x = 30; //原始的x

    printf("x in outer block: %d at %p\n", x, &x);
    {
        int x = 77; //新的x，隐藏了原始的x
        printf("x in inner block: %d at %p\n", x, &x);
    }
    printf("x in outer block: %d at %p\n", x, &x);
    while (x++ < 33) { //原始的x
        printf("x in while loop: %d at %p\n", x, &x);
        int x = 100;   //新的x，隐藏了原始的x
        x++;
        printf("x in while loop: %d at %p\n", x, &x);
    }
    printf("x in outer block: %d at %p\n", x, &x);
    return EXIT_SUCCESS;
}