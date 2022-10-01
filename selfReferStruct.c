#include<stdio.h>
#include<stdlib.h>
struct point{
    int i;
    char c;
    struct point *ptr;
};
int main(){
    struct point var1;
    struct point var2;
    var1.i=65;
    var1.c='B';
    var1.ptr=NULL;

    var2.i=56;
    var2.c='M';
    var2.ptr=NULL;

    var1.ptr= &var2;
    printf("%d %c",var1.ptr->i,var1.ptr->c);
    
}