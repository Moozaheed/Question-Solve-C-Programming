//        Spring 2022

//Ans to the Question No: 1(A)
    
        0 2
        0 1
        0 0
        1 2
        1 1
        1 0
        2 2
        2 1
        2 0

//Ans to the Question No: 1(B)

    if a=8 and n=30:

        Sum = 8
        Sum = 19
        Sum = 33
        Sum = 50
        Sum = 23
        Sum = 49
        Sum = 78 

    if continue is replaced with break:

        Sum = 8
        Sum = 19
        Sum = 33
        Sum = 50


//Ans to the Question No: 1(C)

#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    n--;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
        

// Ans to the Question No: 1(D)

#include<stdio.h>
int main()
{

int n;
scanf("%d",&n);
int sum=0,cnt=0;
for(int i=1;i<=n;i++)
{
    int x;
    scanf("%d",&x);

    if(x<0)
    {
        break;
    }
    if(x%3==0 || x%5==0)
    {
        continue;
    }
    sum+=x;
    cnt++;
}
printf("Sum = %d\n",sum);
printf("Average = %lf\n",sum/(cnt*1.0));

}


// Ans to the Question No: 1(D) OR

#include<stdio.h>
int main()
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
    printf("Prime");
}
else
{
    printf("Not Prime");
}

}





//Ans to the Question No: 2(A)

double process(int a,float b,float c)
{

}

void drawcircle(int a,int b,double c)
{

}


//Ans to the Question No: 2(B)

    i) Code: 
                #include <stdio.h>
                int x=30;
                int fun1()
                {
                    x=x+15;
                    return x;
                }
                int fun2()
                {
                    int x=20;
                    return x;
                }
                int fun3()
                {
                    x=x-10;
                    return x;
                }
                int main()
                {
                    int x=5;
                    printf("x = %d\n",x);
                    printf("x = %d\n",fun1());
                    printf("x = %d\n",fun2());
                    printf("x = %d\n",fun3()); 
                }

    Output: 
                x = 5
                x = 45
                x = 20
                x = 35


    ii)Code: 

                #include <stdio.h>
                int x,q=1;
                void ctg(int x)
                {
                    static int j=1;
                    x*=j;
                    printf("x = %d\n",x);
                    j++;
                }

                int main()
                {
                    int i;
                    for(i=2;i<=5;i++)
                    {
                        ctg(i*i+q);
                        q++;
                    }
                }

    Output:
            x = 5
            x = 22
            x = 57
            x = 116


//Ans to the Question No: 2(C)

    Code:
            #include <stdio.h>
            void rec(int n)
            {
                if(n==0)return;
                printf("%d",n%2);
                rec(n/2);
            }

            int main()
            {
                // My ID is : C231534
                // So, x=4 ---> 2x=24
                rec(24);
            }


    Output: 00011


//Ans to the Question No: 2(D)

#include<stdio.h>

int multiple(int a,int b)
{
    if(a%b==0)return 1;
    else return 0;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=multiple(a,b);
    printf("%d",c);
}



//Ans to the Question No: 2(D) OR

#include<stdio.h>

int factors(int a)
{
    int sum=0;

    for(int i=2;i<n;i++)
    {
        if(a%i==0)
        {
            sum+=i;
        }
    }

    return sum;
}

int main()
{
    int a,b;
    scanf("%d",&a);
    int c=factors(a);
    printf("%d",c);
}



//Ans to the Question No: 3(A)

#include<stdio.h>
int main()
{

    //My ID is C201096

int arr[20]={2,0,1,0,9,6};

for(int i=1;i<6;i++)
{
    arr[i]+=arr[i-1];
}

for(int i=0;i<6;i++)
{
    printf("%d ",arr[i]);
}


}

//Ans to the Question No: 3(B)

#include<stdio.h>
int main()
{
 
int arr[5][5];
 
//Array Input
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        scanf("%d",&arr[i][j]);
    }
 
}
 
//Input Q
int q;
scanf("%d",&q);
q--;    // 0 based indexing er jonno
 
 
//Row Sum
int rowsum=0;
for(int i=0;i<5;i++)
{
    rowsum+=arr[q][i];
}
 
//Col Sum
int colsum=0;
for(int i=0;i<5;i++)
{
    colsum+=arr[i][q];
}
 
printf("Row Sum = %d\n",rowsum);
printf("Col Sum = %d\n",colsum);

}


//Ans to the Question No: 3(B) OR

#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n][n];
 
//Array Input
 
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        scanf("%d",&arr[i][j]);
    }
 
}
 
//Main Diagonal
int sum1=0;
for(int i=0;i<n;i++)
{
    sum1+=arr[i][i];
}
 
//Second Diagonal
int sum2=0;
for(int i=0;i<n;i++)
{
    sum2+=arr[i][n-i-1];
}
 
printf("Main Daigonal = %d\n",sum1);
printf("Second Daigonal = %d\n",sum2);
 
}

//Ans to the Question No: 3(C)
//   Question:
    // #include<stdio.h>
    // #include<string.h>
    // int main()
    // {
    //    char s1[8]="IIUC",s2[8]="CSE",s3[8]="1121";
    //    printf("%d\n",strlen(s1));
    //    printf("%s\n",strcpy(s1,s2));
    //    printf("%s\n",strcat(s2,s3));
    //    printf("%s\n",strrev(s2));
    // }

//Output:

        4
        CSE
        CSE1121
        1211ESC


//Ans to the Question No: 3(D)

#include<stdio.h>
#include<string.h>
int main()
{
   char s1[1000];
   scanf("%s",&s1);
   int f=0;
   for(int i=0;i<strlen(s1);i++)
   {
    if(s1[i]!=s1[0])
    {
        f=1;
    }
   }
   if(f==1)
   {
    printf("Not Identical");
   }
   else
   {
    printf("Identical");
   }
}

//Ans to the Question No: 3(D) OR

#include<stdio.h>
#include<string.h>
int main()
{
   char str[10];
   scanf("%s",&str);

   printf("Age = %c%c, ",str[0],str[1]);
   
   if(str[2]=='T')
   {
    printf("Texpayer, ");
   }
   else
   {
    printf("Not a Texpayer, ");
   }

   if(str[3]=='L')
   {
    printf("Landowner");
   }
   else
   {
    printf("Not a Landowner");
   }
}

//Ans to the Question No: 4(D)

#include<stdio.h>
#include<string.h>
struct Player
{
    char name[24];
    char country[16];
    int runs;
    double average;
};

int main()
{
    Player arr[10];

    for(int i=0;i<10;i++)
    {
        scanf("%s",&arr[i].name);
        scanf("%s",&arr[i].country);
        scanf("%d",&arr[i].runs);
        scanf("%lf",&arr[i].average);
    }

    double mx=0;
    char ans[24];
    for(int i=0;i<10;i++)
    {
        if(arr[i].average>mx)
        {
            mx=arr[i].average;
            strcpy(ans,arr[i].name);
        }
    }
    printf("%s",ans);
}


//Ans to the Question No: 4(D) OR

#include<stdio.h>
#include<string.h>
struct CT
{
    char id[10];
    char name[100];
    int ct1_marks;
    int ct2_marks;
};


int maxx(int a,int b)
{
    if(a<b)return b;
    else return a;
}


int main()
{

    int n;
    scanf("%d",&n);

    CT arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%s",&arr[i].id);
        scanf("%s",&arr[i].name); 
        scanf("%d",&arr[i].ct1_marks);
        scanf("%d",&arr[i].ct2_marks);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\n",maxx(arr[i].ct1_marks,arr[i].ct2_marks));
    }

}