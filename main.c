#include <stdio.h>
#include <stdlib.h>
#include <self_made.h>
#define 输出(a, ...) printf(a "\n",##__VA_ARGS__);
typedef int 整数;
#define 无 void
#define 返回 return
#define 次循 for
#define 循 while
#define 为 =
#define 等 ==
#define 若 if
#define 不然 else
#define 大 >
#define 小 <
#define 破 break
#define 乘以 *
#define 除以 /
无 乘法口诀表()
{
    for (整数 i = 1; i < 10; ++i) {
        for (整数 j = 1; j <=i ; ++j) {
            printf("%d*%d=%d  ",i,j,i*j);
        }
        输出();
    }
}
整数 获取位数(整数 数)
{
    整数 位数 为 1;
    整数 暂存数 为 数;
    循 (1)
    {
        若 (数 / 10  大 0 )
        {
            位数++;
        }
        不然 破;
        数 为 数/10;
    }
    返回 位数;
}
整数 是否回文(整数 数) {
    整数 位数 为 获取位数(数);
    整数 暂存 为 1;
    整数 低位 为 1;
    次循 (整数 数1 为 1; 数1 小 位数; 数1++)
    {
        暂存 为 暂存 乘以 10;
    }
    循(数 大 10)
    {
        若(数 除以 暂存 等 数 %10 )
        {
            数 为 数 % 暂存;
            数 为 数 除以 10;
            暂存 为 暂存 除以 100;
        }不然 返回 0;
    }
    返回 1;
}
整数 是否回文完数(整数 数)
{
    若 (是否回文(数))
    {
        整数 数1,总共,暂存;
        暂存 为 0;
        再次:
        次循(  数1=2;数1 乘以 数1 <= 数; 数1++ ) {
            若 (数 % 数1 等 0)
            {
                若(暂存 等 0)
                    暂存 为 数;
                数 为 数 除以 数1;
                输出("因数：%d",数1);
                总共 为 总共+数1;
                goto 再次;
            }
        }输出("因数：%d",数);
        总共 为 总共 +数+1;
        输出("总共数：%d",总共);
        若 (总共 等 暂存 && 暂存 大 0)
        {
            返回 1;
        }不然 返回 0;
    }
    不然 返回 0;
}
struct Student{
    int studentlID;//学号
    float score;//成绩
    struct student *next;
}



整数 main() {
    system("chcp 65001");
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int s1 = 1, s2 = 1, i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j) {
                s1 = s1 * arr[i][j];
            } else {
                s2 = s2 * arr[i][j];
            }
        }
    }

    printf("%d, %d\n", s1, s2);
    乘法口诀表();
    输出("是否回文：%d" , 是否回文(11211));
    是否回文完数(464);
    \U0000662f\U00005426\U000056de\U00006587\U00005b8c\U00006570(626 );
    返回 0;
}
