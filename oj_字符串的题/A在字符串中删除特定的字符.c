# include <stdio.h>
int main()
{
    char arr1[100]={0};
    char arr2[100]={0};
    char arr[100]={0};
    int count=0; 
    int i=0,j=0;  
    fgets(arr1,sizeof(arr1),stdin); 
    while(arr1[i]!='\0')
    {   
        if(arr1[i]=='\n')
        {
            arr1[i]='\0';
            break;
        }
        i++;
    }
    fgets(arr2,sizeof(arr2),stdin);
     while(arr2[j]!='\0')
    {       
        if(arr2[j]=='\n')
        {
            arr2[j]='\0';
            break;
        }
        j++;
    }
    for(int k=0;arr1[k]!='\0';k++)
    {
        int found=0;
        for(int a=0;arr2[a]!='\0';a++)
        {
            if(arr1[k]==arr2[a])
            {
                found=1;
                break;
            }
        }
        if(!found)
        {
            arr[count]=arr1[k];
            count++;
        }
    }
    arr[count]='\0';
    printf("%s\n",arr); 
    return 0;
}