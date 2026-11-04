#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();
int main(){
    goodmorning();
    return 0;
}
void goodmorning(){
    printf("good morning krishna\n");
    goodafternoon();
}
void goodafternoon(){
    printf("good afternoon anil\n");
    goodnight();
}
void goodnight(){
    printf("good night sunita\n");
}