#include <iostream>
#include <math.h> 
using namespace std;

int main() 
{
    int a,sum;
    cin>>a;
    sum=3;
    for (int i = 4; i < a; i++)
    {
      for (int j = 2; j < i; j++)
      {

        if(i%j==0){
          break;
        }
        else if (i==j+1)
        {
            sum+=1;
        }

        break;
      }
      
    }
    cout<<sum;
    return 0;
}