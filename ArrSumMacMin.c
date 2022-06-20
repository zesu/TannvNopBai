#include <stdio.h>
    int main()
    {
        int ary[10];
        int i,total,hight;
        float avg=0;
        int min=0;
        printf("\n Nhập điểm của lớp:\n:");
        for (i=0;i<10;i++)
        {
            scanf("%d",&ary[i]);

        }
        hight=ary[0];
       
        min=ary[0];
        for (i=0;i<10;i++)
        {
            if(ary[i]>hight) hight=ary[i];
            total+=ary[i];
             avg= (float)total/10;
            if(min > ary[i] ) min=ary[i];
      
        }

// tim mac -min
  
           printf("\n Giá trị Max= ; %d\n",hight);
            printf("\n Giá tri min=: %d\n",min);
           printf("\n Giá trị TB= ; %f\n",avg);
            printf("\n Giá tri tổng=: %d\n",total);
    }
