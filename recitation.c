#include <stdio.h>
#include <string.h>

char* declaredAfter();

char* declaredBefore() {
  char* ret = "this function was defined before";
  return ret;
}

int main() {
  printf("%s\n%s", declaredBefore(), declaredAfter());
  return (0);
}

char* declaredAfter() {
  char* ret = "this function was defined after";
  return ret;
}
