#include <stdio.h>
#include <iostream>
#include <string>
#include <map>

using namespace std;

typedef struct {
    string Q; long long int A;
}Question;

map <string,int> Lista;
map <string,bool> BL;

int N,M;
char buffer[256];


int main()
{
    scanf("%d %d",&N,&M);
    
    for(int i=0;i<N;i++)
    {
        string A;
        int B;
        scanf("%s %d",buffer,&B);
        A=buffer;
        
        Lista[A]=B;   
        BL[A]=true;    
    } 
    
    for(int i=0;i<M;i++)
    {       
        string A;
        
        scanf("%s",buffer);
        
        A=buffer;
        
        if(!BL[A])
        {
            printf("not found");  
        }
        else
        {
            int B;
            scanf("%d",&B);
            
            if(Lista[A]==B)
            {
                printf("ok");
            }
            else
            {
                printf("wrong");            
            }
        }
        if(i<M-1)
            printf("\n");
    }
    
    

    return 0;
}