#include<stdio.h>
void krishna(int x, int y){
    int c=x+y;
    printf("%d",c);
}
int main(){
    int a,b;
    printf("enter the number");
    scanf("%d",&a);
    printf("enter the number");
    scanf("%d",&b);
    krishna(a,b);
    return 0;

}