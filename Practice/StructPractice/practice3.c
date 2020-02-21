#include <stdio.h>

struct rectangle{
    int width,height,area;
};
typedef struct rectangle rectangle;

int main(){
    rectangle r1={3,7,0},r2={2,5,0};
    rectangle larger;
    r1.area = r1.width * r1.height;
    r2.area = r2.width * r2.height;
    if(r1.area > r2.area)
        larger = r1;
    else 
        larger = r2;
    
    printf("더 큰 사각형의 면적은 %d 입니다.",larger.area);
    return 0;
}