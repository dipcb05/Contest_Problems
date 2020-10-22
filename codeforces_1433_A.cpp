//Boring Apartments
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    scanf("%d", &t);
    while(t--)
    {
        int a, b, sum = 0;    
        scanf("%d", &a);
        if(a > 1000)
          {
              b = a / 1000;
              sum = b*10;
          }
        else if(a > 100 && a < 1000)
          {
              b = a / 100;
              sum = (b-1)*10 + 6;
          }
        else if(a > 10 && a < 100)
          {
              b = a / 10;
              sum = (b-1)*10 + 3;
          }
        else if(a < 10)
          {
              if(a == 1)
                sum = 1;
              else 
                {
                  sum = (a-1)*10 + 1;    
                }
          }
        printf("%d\n", sum);
        sum = 0;
    }
    return 0;    
}
