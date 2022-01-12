#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b&&b>c) printf("max:%d\nmid:%d\nmin:%d",a,b,c);
    if (b>c&&c>a) printf("max:%d\nmid:%d\nmin:%d",b, c, a);
    if (c>a&&a>b) printf("max:%d\nmid:%d\nmin:%d",c, a, b);
}
