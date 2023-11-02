//Ans to the Question No: 1(A)
        
        C
        CC
        CCC
        CCCC
        CCCCC

//Ans to the Question No: 1(C)

#include<stdio.h>
int main()
{
int sum=0;
int cnt=0;

for(;;)
{
    int x;
    scanf("%d",&x);
    if(x<0)break;

    if(x%5==0 || x%7==0)continue;

    sum+=x;
    cnt++;
}

printf("Sum = %d\n",sum);
printf("Average = %lf",sum*1.0/cnt);
}

//Ans to the Question No: 1(C)

#include<stdio.h>
int main()
{

int t;
scanf("%d",&t);
while(t--)
{
    int n;
    scanf("%d",&n);

    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cnt++;
        }
    }

    if(cnt==2)
    {
        printf("Prime number\n");
    }
    else
    {
        printf("Not a Prime number\n");
    }
}

}

//Ans to the Question No: 2(A)

    (i): 1 2 3 4 5
    (ii): 
        int magic(int n)
        {
            return (n*(n+1))/2;
        }

//Ans to the Question No: 2(B) OR

        #include<stdio.h>
        void bubble_sort(int arr[],int n)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n-1;j++)
                {
                    if(arr[j]>arr[j+1])
                    {
                        int temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
                }
            }
        }

        int main()
        {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

        //bubble sort

        bubble_sort(arr,n);

        for(int i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        }

//Ans to the Question No: 3(A)

#include<stdio.h>
int main()
{
    int arr[12]={0};

    arr[0]=1;
    arr[1]=4;
    arr[2]=7;
    arr[3]=10;

    for(int i=0;i<12;i++)
    {
        printf("%d ",arr[i]);
    }
}


//Ans to the Question No: 4(B)

//Question:
    // #include<stdio.h>
    // #include<string.h>
    // int main()
    // {
    // char s1[]="IIUC",s2[]="CSE",s3[10];
    // printf("%s\n",strcat(s2,s1));
    // printf("%d\n",strlen(s2));
    // printf("%s\n",strlwr(s2));
    // printf("%s\n",strcpy(s3,s2));
    // }

//Output

        CSEIIUC
        7
        cseiiuc
        cseiiuc
