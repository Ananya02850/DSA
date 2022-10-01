#include<stdio.h>
struct charset{
    char s;
    int i;
};

void fun(char* s, int* i ){
    printf("Enter the character and the intiger: ");
    scanf("%c %d", s, i);
}
int main(){
struct charset mr;
fun(&mr.s,&mr.i);
printf("the values are: %c %d",mr.s, mr.i);
return 0;

}