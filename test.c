#include <stdio.h>

int main(){

        int num = 0;

        int sum_pre = 0;

        int sum_post = 0;

        sum_pre = (++num)+(++num)+(++num);

        printf("num : %d\n", num);

        sum_post = (num++)+(num++)+(num++);


        printf("post : %d\n", sum_post);

        printf("pre : %d\n", sum_pre);




        return 0;

}