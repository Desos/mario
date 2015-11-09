#include<stdio.h>
#include<cs50.h>
#include<math.h>
#include<string.h>


int main(void)
{
    int height;
    do
    {
        printf("Height:");
        height = GetInt();
    }while(height<0||height>=24);
    
    
    if(height==0)
    return 0;
    
    char hash[24] = {'#','\0'} ;
    char space[25];
    
    
    for(int i=0;i<height+1;i++)
    {
        space[i] = ' ';
    }
    
    space[height-1]= 0;
    
    for(int i=0;i<height;i++)
    {
        printf("%s%s  %s\n",space,hash,hash);
        strcat(hash,"#");
        space[height-2-i]= 0;
    }
    
    return 0;
}
