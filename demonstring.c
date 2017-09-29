#include <string.h>

int main() {

  char str1[] = "AaBb";
  char str2[] = "AABB";
  char str3[] = "aAbB";
  char str4[] = "aabb";

  printf("strcmp: 'AaBb' compared to 'AABB': %d/n", strcmp( * str1, * str2));
  printf("strcmp: 'AABB' compared to 'aabb': %d\n", strcmp( * str2, * str4));
  printf("strncmp: '[a]AbB' compared to '[a]abb': %d\n", strncmp( * str3, * str4, 1));
  printf("strncmp: '[A]aBb' compared to '[a]AbB': %d\n", strncmp( * str1, * str3, 1));
  
  return 0;
}

