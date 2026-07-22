//--- #include
#include <string>
#include <cstdio>

//--- #define
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RETURN "\033[0m"

//--- int main() {...}
int main() {
  printf("\r%sTEXTUAL%s\n", RED, RETURN);
  printf("\r%sTEXTUAL%s\n", YELLOW, RETURN);
  printf("\r%sTEXTUAL%s\n", GREEN, RETURN);
  printf("\r%sTEXTUAL%s\n", BLUE, RETURN);

  return 0;
}
