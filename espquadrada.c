#include <stdio.h>
#include <stdlib.h>

void espiral(int n)
{
    int x = 0;
    int y = 0;
    for(int i = 0; i < n; ++i){
      
      if(x==0 && y==0)//0
        y++;
        
      else if(y > 0 && x==0 && abs(x)!=abs(y) && abs(y)>abs(x))
        x--;

      else if(y > 0 && x < 0 && abs(x)==abs(y))
        y--;

      else if(y==0 && x < 0 && abs(x)!=abs(y) && abs(x)>abs(y))
        y--;

      else if(y < 0 && x < 0 && abs(x)==abs(y))
        x++;

      else if(y < 0 && x==0 && abs(x)!=abs(y) && abs(y)>abs(x))
        x++;

      else if(y < 0 && x > 0 && abs(x)==abs(y))
        y++;
      
      else if(y==0 && x > 0 && abs(x)!=abs(y) && abs(x)>abs(y))
        y++;

      else if(y > 0 && x > 0 && abs(x)==abs(y))
        y++;

      else if(y > 0 && x > 0 && abs(x)!=abs(y) && abs(y)>abs(x))
        x--;
        
      else if(y > 0 && x < 0 && abs(x)!=abs(y) && abs(y)>abs(x))
        x--;
      
      else if(y > 0 && x < 0 && abs(x)!=abs(y) && abs(y)<abs(x))
        y--;

      else if(y < 0 && x < 0 && abs(x)!=abs(y) && abs(y)<abs(x))
        y--;

      else if(y < 0 && x < 0 && abs(x)!=abs(y) && abs(y)>abs(x))
        x++;
      
      else if(y < 0 && x > 0 && abs(x)!=abs(y) && abs(y)>abs(x))
        x++;

      else if(y < 0 && x > 0 && abs(x)!=abs(y) && abs(y)<abs(x))
        y++;
      
      else if(y > 0 && x > 0 && abs(x)!=abs(y) && abs(y)<abs(x))
        y++;

    }
    printf("(%d,%d)",x,y);
}

int main() {
  
  int entrada = 0;
  
  scanf("%d",&entrada);

  espiral(entrada);
  
  return 0;
}