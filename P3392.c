#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n,m;
    scanf("%d %d",&m,&n);
    getchar();
    char s[50][50];
    for(int i=0;i<m;i++)
        scanf("%s",s[i]);
    // printf("打印读取的字符\n");

    // for(int i=0;i<m;i++) {
    //     printf("%s\n",s[i]);
    // }
    // 直接暴力枚举两个颜色(蓝、红)起始的行数
    int index1=1,index2=2;//初始化
    // 策略，固定一个不动，另一个遍历一遍后移动前一个。
    int min=2500;
    for(;index1<m-1;index1++){
        for(index2 = index1+1;index2<m;index2++){
            // 计算每种情况下要涂的块数
            int num=0;
            // 白色：
            for(int i = 0;i<index1;i++){
                for(int j = 0;j<n;j++){
                    if(s[i][j]!='W'){
                        num++;
                    }
                }
            }
            // 蓝色：
            for(int i = index1;i<index2;i++){
                for(int j = 0;j<n;j++){
                    if(s[i][j]!='B'){
                        num++;
                    }
                }
            }
            // 红色：
            for(int i = index2;i<m;i++){
                for(int j = 0;j<n;j++){
                    if(s[i][j]!='R'){
                        num++;
                    }
                }
            }
            if(num<min){
                min = num;
            }
        }

    }
    printf("%d",min);
    return 0;
}