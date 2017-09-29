#include <string.h>

int main() {

  char str1[] = "AabcdefAabc";
  char str2[] = "Aabc";
  
  printf("strchr (value): 'AabcdefAabc', 'A': %c\n",  * strchr( str1, 'A'));
  printf("strchr (pointer): 'AabcdefAabc', 'A': %d\n", strchr( str1, 'A'));
  printf("strstr (value of index 0): 'AabcdefAabc', 'Aabc': %c\n", * strstr( str1,  str2));
  printf("strstr (pointer): 'AabcdefAabc', 'Aabc': %d\n", strstr( str1,  str2));
  
  return 0;
}

