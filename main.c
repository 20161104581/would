//
//  main.c
//  would
//
//  Created by 20161104581 on 17/6/7.
//  Copyright © 2017年 20161104581. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a[10];
    int i,s,j;
    for(i=1;i<=10;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=1;i<=9;i++)
        for(j=1;j<11-i;j++)
        
            if(a[j]>a[j+1])
            {
                s=a[j];
                a[j]=a[j+1];
                a[j+1]=s;
            }
    for(i=1;i<=10;i++)
    printf("%d\n",a[i]);
    return 0;
}



