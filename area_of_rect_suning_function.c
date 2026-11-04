#include<stdio.h>
void rect();
int main(){
    int length,breath;
    printf("enter the length");
    scanf("%d",&length);
    printf("enter the breath");
    scanf("%d",&breath);
    rect(length,breath);
    return 0;
}
void rect(int l, int b){
    int area;
    area=l*b;
    printf("%d is the area of rectangle",area);
    return ;

}
