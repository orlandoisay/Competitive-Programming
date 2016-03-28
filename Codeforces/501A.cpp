#include <bits/stdc++.h>

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    
    int e,f;
    
    e=std::max((a*3)/10,a-(a*c)/250);
    f=std::max((b*3)/10,b-(b*d)/250);
    
    if(e>f)printf("Misha");
    if(e<f)printf("Vasya");
    if(e==f)printf("Tie");
    
    return 0;
}