#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int r1, r2, r3, sum1 = 0, sum2 = 0, i;
  char name[30], str1[] = "Heads", str2[] = "Tails";

  printf("Who are you?\n");
  printf(">");
  scanf("%s", name);
  printf("Hello, %s!\n", name);

  srand(time(NULL));
  r1 = rand() % 2 + 1;
  r2 = rand() % 2 + 1;
  r3 = rand() % 2 + 1;

  printf("Tossing a coin...\n");
  if(r1 == 1){
    printf("Round 1: %s\n", str1);
    sum1++;
  }
  else{
    printf("Round 1: %s\n", str2);
    sum2++;
  }
  if(r2 == 1){
    printf("Round 2: %s\n", str1);
    sum1++;
  }
  else{
    printf("Round 2: %s\n", str2);
    sum2++;
  }
  if(r3 == 1){
    printf("Round 3: %s\n", str1);
    sum1++;
  }
  else{
    printf("Round 3: %s\n", str2);
    sum2++;
  }
  printf("Heads: %d, Tails: %d\n", sum1, sum2);

  if(sum1 > sum2){
    printf("%s won!\n", name);
  }
  else{
    printf("%s lost!\n", name);
  }
}
