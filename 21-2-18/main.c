//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#ifndef I
//#define I
//
//#include<stdio.h>
//
//#endif // I
//#error sf
//#include<string.h>
//#include<errno.h>
//#include<stdio.h>
//int main()
//{
//    printf("%s",strerror(errno));
//    return 0;
//}
//#include<stdio.h>
//#define s(a,b) a##b
//int main()
//{
//    s(in,t) b=0;
//    printf("%d",b);
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<ctype.h>
//int main()
//{
//    int len=0,zhi,i,shu=0;
//    char *arr=(char*)malloc(len+1);
//    char tmp;
//    while((tmp=getchar())!='\n')
//    {
//        if(tmp=='E')
//        {
//            scanf("%d",&zhi);
//            continue;
//        }
//        arr[len]=tmp;
//        len++;
//        arr=(char*)realloc(arr,len+1);
//        if(isdigit(tmp))
//            shu++;
//    }
//    arr[len]='\0';
//    if(zhi<0)
//    {
//        if(arr[0]=='-')
//            printf("-");
//        printf("0.");
//        zhi=-zhi;
//        zhi--;
//        while(zhi)
//        {
//            printf("0");
//            zhi--;
//        }
//        for(i=1;arr[i];i++)
//        {
//            if(arr[i]!='.')
//                printf("%c",arr[i]);
//        }
//    }
//    else if(zhi==0)
//    {
//            printf("1");
//    }
//    else
//    {
//        if(arr[0]=='-')
//            printf("-");
//        if(shu-1>zhi)
//        {
//            for(i=1;arr[i];i++)
//            {
//                if(arr[i]!='.')
//                    printf("%c",arr[i]);
//                if(i-2==zhi)
//                    printf(".");
//            }
//        }
//        else
//        {
//            for(i=1;arr[i];i++)
//            {
//                if(arr[i]!='.')
//                    printf("%c",arr[i]);
//            }
//            for(i=0;i<zhi-shu+1;i++)
//            {
//                printf("0");
//            }
//        }
//    }
//    return 0;
//}
