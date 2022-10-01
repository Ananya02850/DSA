#include<stdio.h>
#include<stdlib.h>
struct point{
    int x;
    int y;
};
void print(struct point arr[]){
    int i;
    for(i=0;i<2;i++){
        printf("%d %d \n",arr[i].x,arr[i].y);
    }
}
int main(){
struct point arr[2]={ {2,3},{5,6}};
print(arr);
return 0;
}