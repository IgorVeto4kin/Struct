#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <iso646.h>
#define XYECOC main
int fib(int q);

struct girl {
char name[20];
unsigned int age;
char phone_num[25];
char vk_page[30];
};




int refib(int q);
int XYECOC()
{

    struct girl C01_219[4] = {"Volobueva_Vasya", 97, "+7-916-234-45-67", "@huesosina666",
                              "Vika", 95, "89163215512", "@qwertyuiop",
                              "lubov", 10, "1234567890", "@...........",
                              "Angelina", 18, "0987654321", "@starosta_rayona_ebatb"};

    for(int i =0; i<4; i++){
    printf("%-10s\t%5d\t%-10s\t%-15s\n", C01_219[i].name, C01_219[i].age, C01_219[i].phone_num, C01_219[i].vk_page);
    }









    int a;
    scanf("%d", &a);
    printf("%d", refib(a));
    return 0;
}

int fib(int q){
int l1 = 1, l2 = 1, l3, l4;
if (q==1 || q==2){
return 1;
}
else {
for (int i =2; i<q; i++){

l3=l1+l2;
l4 = l3+l2;
l1=l2;
l2=l3;
l3=l4;
}

return l3;
}
}
int refib(int q){
if (q==1|| q==2 || q==0){
return 1;
}
else{
return(refib(q-1)+refib(q-2)+refib(q-3));
}
}
