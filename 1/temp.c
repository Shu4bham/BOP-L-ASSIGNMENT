
// #include <stdio.h>
// int main()
// {
//     int i = 10;
//     if ((i / 5)*1.0 == 2)
//     {
//         printf("%d  ", i * 5);
//         printf("%f", i*1.0);
//     }
//     else
//     {
//         printf("bkk bsdk");
//     }

//     return 0;
// }
//7. to know whether the given three points lie on a line or not
#include <stdio.h>
#include<math.h>

int main()
{
    float x1,x2,x3,y1,y2,y3,s1_2,s2_3;
    
    printf("Enter the coordinates of first point:\n");
    scanf("%f%f",&x1,&y1);
    printf("Enter the coordinates of seond point:\n");
    scanf("%f%f",&x2,&y2);
    printf("Enter the coordinates of third point:\n");
    scanf("%f%f",&x3,&y3);
    s1_2=(y2-y1)/(x2-x1);
    s2_3=(y3-y2)/(x3-x2);
    if(s1_2==s2_3)
    printf("The three points lie on same line i.e. collinear");
    else
        printf("The three points do not lie on same line");
        return 0;
}