#include <stdio.h>
#include <string.h>

int main(void){
  char num1[10], num2[10], op[10], ans[10];

  scanf("%s %s %s", num1, op, num2);

  strcpy(ans, "nao sei bisho");
  if(!strcmp(op, "mais")){
    if(!strcmp(num1, "um")){
      if(!strcmp(num2, "um")){
	strcpy(ans, "dois");
      }
    }
  }
  else if(!strcmp(op, "menos")){
    if(!strcmp(num1, "um")){
      if(!strcmp(num2, "um")){
	strcpy(ans, "zero");
      }
    }
  }
  else if(!strcmp(op, "vezes")){
    if(!strcmp(num1, "um")){
      if(!strcmp(num2, "um")){
	strcpy(ans, "um");
      }
    }
  }
  printf("Resposta: %s\n", ans);
  
  return 0;
}
