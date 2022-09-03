#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
createarray(int arr[3][3])
{
    int n=9;
    int num[n],i,j;
    for(i=0;i<9;i++)     // These 1-9 number will be in th matrix
    num[i]=i+1;

    int lastIndex=n-1,index=0;

    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
  {
    if(lastIndex>=0)
    { 
       arr[i][j]=num[index];     
       index++;
    }             
  }
    }
}
showarray(int arr[3][3])
{
    printf("\033[0;33m");
    int i,j;
    system("cls");

    printf("First Player : O\n\nSecond Player : X\n");
    printf("\nPress E  or  e  in case of Game Draw to exit the Game\n\n");
    printf("-------------------");
    for(i=0;i<3;i++)
    {
        printf("\n|  ");
    for(j=0;j<3;j++)
    {
        if(arr[i][j]==79)
        printf("O  |  ");
        else
        if(arr[i][j]==88)
        printf("X  |  ");
        else
       printf("%d  |  ",arr[i][j]);
    }
    printf("\n-------------------");

    }
}

winner(int arr[3][3])
{
    int i,j;
    for(i=0;i<1;i++)
    for(j=0;j<1;j++)
    {
        if(  ((arr[i][j]==79)&&(arr[i][j+1]==79)&&(arr[i][j+2]==79)) || ((arr[i+1][j]==79)&&(arr[i+1][j+1]==79)&&(arr[i+1][j+2]==79) )
        ||((arr[i+2][j]==79)&&(arr[i+2][j+1]==79)&&(arr[i+2][j+2]==79) )||((arr[i][j]==79 )&&(arr[i+1][j]==79 )&&(arr[i+2][j]==79))
        ||((arr[i][j+1]==79 )&&(arr[i+1][j+1]==79 )&&(arr[i+2][j+1]==79) )  || ((arr[i][j+2]==79 )&&(arr[i+1][j+2]==79 )&&(arr[i+2][j+2]==79) )          
        ||((arr[i][j]==79 )&&(arr[i+1][j+1]==79 )&&(arr[i+2][j+2]==79) )||((arr[i][j+2]==79 )&&(arr[i+1][j+1]==79 )&&(arr[i+2][j]==79)) )
        {
            printf("\nPlayer First is Winner");
            exit(0);
        }

        else

        if(((arr[i][j]==88)&&(arr[i][j+1]==88)&&(arr[i][j+2]==88))||((arr[i+1][j]==88)&&(arr[i+1][j+1]==88)&&(arr[i+1][j+2]==88) )
        ||((arr[i+2][j]==88)&&(arr[i+2][j+1]==88)&&(arr[i+2][j+2]==88) )||((arr[i][j]==88 )&&(arr[i+1][j]==88 )&&(arr[i+2][j]==88))
        ||((arr[i][j+1]==88 )&&(arr[i+1][j+1]==88 )&&(arr[i+2][j+1]==88) )  || ((arr[i][j+2]==88 )&&(arr[i+1][j+2]==88 )&&(arr[i+2][j+2]==88) )          
        ||((arr[i][j]==88 )&&(arr[i+1][j+1]==88 )&&(arr[i+2][j+2]==88) )||((arr[i][j+2]==88 )&&(arr[i+1][j+1]==88 )&&(arr[i+2][j]==88))  )                       
        {
            printf("\nPlayer Second is Winner");
            exit(0);
        }
       /* else
        if( (  ((arr[i][j]=!79)&&(arr[i][j+1]=!79)&&(arr[i][j+2]=!79)) || ((arr[i+1][j]=!79)&&(arr[i+1][j+1]=!79)&&(arr[i+1][j+2]=!79) )
        ||((arr[i+2][j]=!79)&&(arr[i+2][j+1]=!79)&&(arr[i+2][j+2]=!79) )||((arr[i][j]=!79 )&&(arr[i+1][j]=!79 )&&(arr[i+2][j]=!79))
        ||((arr[i][j+1]=!79 )&&(arr[i+1][j+1]=!79 )&&(arr[i+2][j+1]=!79) )  || ((arr[i][j+2]=!79 )&&(arr[i+1][j+2]=!79 )&&(arr[i+2][j+2]=!79) )          
        ||((arr[i][j]=!79 )&&(arr[i+1][j+1]=!79 )&&(arr[i+2][j+2]=!79) )||((arr[i][j+2]=!79 )&&(arr[i+1][j+1]=!79 )&&(arr[i+2][j]=!79)) )  && (((arr[i][j]==88)&&(arr[i][j+1]==88)&&(arr[i][j+2]==88))||((arr[i+1][j]==88)&&(arr[i+1][j+1]==88)&&(arr[i+1][j+2]==88) )
        ||((arr[i+2][j]=!88)&&(arr[i+2][j+1]=!88)&&(arr[i+2][j+2]=!88) )||((arr[i][j]=!88 )&&(arr[i+1][j]=!88 )&&(arr[i+2][j]=!88))
        ||((arr[i][j+1]=!88 )&&(arr[i+1][j+1]=!88 )&&(arr[i+2][j+1]=!88) )  || ((arr[i][j+2]=!88 )&&(arr[i+1][j+2]=!88 )&&(arr[i+2][j+2]=!88) )          
        ||((arr[i][j]=!88 )&&(arr[i+1][j+1]=!88 )&&(arr[i+2][j+2]=!88) )||((arr[i][j+2]=!88 )&&(arr[i+1][j+1]=!88 )&&(arr[i+2][j]=!88))  )   )
        {
            printf("### GAME DRAW ###");
        }*/
    }
}


int enterkey()
{
    int c;
    c=getch();
    return c;   
}
printX(int *p)
{
    *p=88;
}
printO(int *p)
{
    *p=79;
}
turnO(int arr[3][3],int t)
{
    int i,j;
    system("cls");
    printf("First Player : O\nSecond Player : X\n");
    printf("-------------------");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
        if(arr[i][j]==t)
        {
            printO(&arr[i][j]);
        }

    }
    showarray(arr);
}

turnX(int arr[3][3],int t)
{
    int i,j;
    system("cls");
    printf("First Player : O\nSecond Player : X\n");
    printf("-------------------");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
        if(arr[i][j]==t)
        {
            printX(&arr[i][j]);
        }
    }
    showarray(arr);
}    

int main()
{
    int arr[3][3];

    createarray(arr);
    showarray(arr);
    while(winner(arr)){
    printf("\nHey, Player! Choose Your Sign ( O or X )= ");
    int x=enterkey();
     int t,i,j;

    switch(x)
   {
    case 79:
    printf("O");
    printf("\nEnter your turn:");
    fflush(stdin);
    scanf("%d",&t);
    fflush(stdin);
    turnO(arr,t);

    break;

    case 88:
    printf("X");
    printf("\nEnter your turn:");
    fflush(stdin);
    scanf("%d",&t);
    fflush(stdin);
    turnX(arr,t);
    break;

           case 69:                  // ascii of E

            case 101:                 // ascii of e
                        printf("\033[0;34m");
                        printf("#### GAME DRAW ####");
                       printf("\a\a\a\a\a\a\n     Thanks for Playing ! \n\a");
                        exit(0);
                        default :
                        printf("\033[0;34m");
                        printf(" **INVALID INPUT**\n\n");
                        break;

   }
    }
    
    return 0;
}