#include<iostream>
using namespace std;
#include <stdlib.h>
int main()
{
int i,j,target,numsSize;
int returnSize[2],num[100];
cin >> numsSize;
for(i=0;i<numsSize;i++)
{
  cin >> num[i];
}
cout << "enter target";
cin >> target;

    for(i=0;i<numsSize;i++)
    {
        for(j=i+1;i<numsSize;j++)
        {
           if((*num+i)+(*num+j)==target)
               returnSize[0]=i;
            returnSize[1]=j;
               
        }
    }
    for(i=0;i<2;i++)
    cout << returnSize;

}
    