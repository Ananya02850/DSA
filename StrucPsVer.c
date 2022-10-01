#include<stdio.h>
struct point{
    int x;
    int y;
};
void fun(struct point p){
    printf("%d %d \n",p.x,p.y);
}

int main(){
struct point p1 ={45, 89};
struct point p2 ={23, 76};
fun(p1);
fun(p2);
return 0;

}