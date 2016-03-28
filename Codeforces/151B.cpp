#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>

typedef struct{
    char Name[21];
    int T,P,G;
}Friend;

int n;
char phone[9];

Friend Lista[100];
int MAX[4];

char LF[3][100][21];
int ind[3];

int tipo()
{
    //THE PHONE CAN BE:
    //1- TAXI
    //2- PIZZA
    //3- GIRL
    if(phone[0]==phone[1] && phone[0]==phone[3] && phone[0]==phone[4] && phone[0]==phone[6] && phone[0]==phone[7])
        return 1;

    if(phone[0]>phone[1] && phone[1]>phone[3] && phone[3]>phone[4] && phone[4]>phone[6] && phone[6]>phone[7])
        return 2;

    return 3;
}

int main()
{
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        int m;
        scanf("%d %s",&m,Lista[i].Name);
        for(int j=0;j<m;j++)
        {
            scanf("%s",phone);

            switch(tipo())
            {
                case 1:
                    Lista[i].T++;
                    break;
                case 2:
                    Lista[i].P++;
                    break;
                case 3:
                    Lista[i].G++;
                    break;
            }

        }
    }



    for(int i=0;i<n;i++)
    {
        MAX[1]=std::max(MAX[1],Lista[i].T);
        MAX[2]=std::max(MAX[2],Lista[i].P);
        MAX[3]=std::max(MAX[3],Lista[i].G);
    }

    for(int i=0;i<n;i++)
    {
        if(Lista[i].T == MAX[1])
        {
            memcpy(LF[0][ind[0]],Lista[i].Name,21);
            ind[0]++;
        }
        if(Lista[i].P == MAX[2])
        {
            memcpy(LF[1][ind[1]],Lista[i].Name,21);
            ind[1]++;
        }
        if(Lista[i].G == MAX[3])
        {
            memcpy(LF[2][ind[2]],Lista[i].Name,21);
            ind[2]++;
        }
    }

    printf("If you want to call a taxi, you should call: ");

    for(int i=0;i<ind[0];i++)
    {
        printf("%s",LF[0][i]);
        if(i+1<ind[0])
        {
            printf(", ");
        }
        else
        {
            printf(".");
        }
    }


    printf("\nIf you want to order a pizza, you should call: ");

    for(int i=0;i<ind[1];i++)
    {
        printf("%s",LF[1][i]);
        if(i+1<ind[1])
        {
            printf(", ");
        }
        else
        {
            printf(".");
        }
    }

    printf("\nIf you want to go to a cafe with a wonderful girl, you should call: ");

    for(int i=0;i<ind[2];i++)
    {
        printf("%s",LF[2][i]);
        if(i+1<ind[2])
        {
            printf(", ");
        }
        else
        {
            printf(".");
        }
    }



    return 0;
}