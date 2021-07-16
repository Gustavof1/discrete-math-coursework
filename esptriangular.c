#include <stdio.h>
#include <stdlib.h>

void espiral(int n)
{
    int x = 0;
    int y = 0;
    int marca_canto_direita = 0;
    int marca_canto_esquerda = 0;
  
    for(int i = 0; i < n; ++i){
      
      if(x==0 && y==0)
        x++;

      else if(x > 0 && y<0 && abs(x)!=abs(y) && abs(x)>abs(y) && abs(x)-abs(y)>2)
        x--,y++;

      else if(x > 0 && y > 0 && abs(x)!=abs(y) && abs(x)>abs(y))
        x--,y++;

      else if(x > 0 && y > 0 && abs(x)!=abs(y) && abs(x)<abs(y))
        x--,y++;
        
      else if(x < 0 && y > 0 && abs(x)!=abs(y) && abs(x)>abs(y))
        x--,y--;

      else if(x < 0 && y > 0 && abs(x)!=abs(y) && abs(x)<abs(y))
        x--,y--;
        
      else if(n==1)
        x--,y++,marca_canto_direita++;

      else if(x==0 && y > 0 && abs(x)!=abs(y) && abs(x)<abs(y))
        x--,y--;

      else if(x < 0 && y==0 && abs(x)!=abs(y) && abs(x)>abs(y))
        x--,y--;
        
      else if(x < 0 && y < 0 && abs(x)!=abs(y) && abs(x)>abs(y) && marca_canto_esquerda==1 && abs(x)-abs(y)>1)
        x--,y--,marca_canto_esquerda--;
        
      else if(x < 0 && y < 0 && abs(x)!=abs(y) && abs(x)>abs(y) && marca_canto_esquerda==0)
        x++,marca_canto_esquerda++;
        
      else if(x < 0 && y < 0 && abs(x)!=abs(y) && abs(x)>abs(y) && abs(x)-abs(y)==1)
        x++; 

      else if(x < 0 && y < 0 && abs(x)==abs(y))
        x++;

      else if(x==0 && y < 0 && abs(x)!=abs(y) && abs(x)<abs(y))
        x++;
        
      else if(x > 0 && y < 0 && abs(x)==abs(y))
        x++;
        
     else if(n==8)
        x++,marca_canto_direita--;

      else if(x > 0 && y < 0 && abs(x)!=abs(y) && abs(x)>abs(y) && marca_canto_direita==1 && abs(x)-abs(y)>1)
        x++,marca_canto_direita--;
        
      else if(x > 0 && y < 0 && abs(x)!=abs(y) && abs(x)>abs(y) && marca_canto_direita==0 && abs(x)-abs(y)>1)
        x--,y++,marca_canto_direita++;

      else if(x > 0 && y < 0 && abs(x)!=abs(y) && abs(x)>abs(y) && abs(x)-abs(y)==1)
        x++; 

      else if(x > 0 && y==0 && abs(x)!=abs(y) && abs(x)>abs(y))
        x--,y++;
        
       else if(x > 0 && y<0 && abs(x)!=abs(y) && abs(x)>abs(y) && abs(x)-abs(y)>2)
        x--,y++;
      
      else if(x > 0 && y > 0 && abs(x)==abs(y))
        x--,y++;

      else if(x==0 && y > 0 && abs(x)!=abs(y) && abs(x)<abs(y))
        x--,y--;

      else if(x < 0 && y > 0 && abs(x)==abs(y))
        x--,y--;

      else if(x < 0 && y==0 && abs(x)!=abs(y) && abs(x)>abs(y))
        x--,y--;

      else if(x < 0 && y < 0 && abs(x)!=abs(y) && abs(x)<abs(y))
        x++;

      else if(x > 0 && y < 0 && abs(x)!=abs(y) && abs(x)<abs(y))
        x++;

      else if(x > 0 && y < 0 && abs(x)!=abs(y) && abs(x)>abs(y) && marca_canto_esquerda==1)
        x++;
    }
    printf("(%d,%d)",x,y);
}

int main() {
  
  int entrada = 0;
  
  scanf("%d",&entrada);
  

  espiral(entrada);
  
  return 0;
}