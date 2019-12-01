#include "../src/utils.h"
#include<stdio.h>
int test_utils()
{
  /*
  test cases for ternary_to_decimal
  */
  /*
  '0' returns zero
  */
  int number = ternary_to_decimal("0", 1);
  if(number != 0)
  {
    fprintf(stderr, "%s\n", "\"0\" does not return 0");
  }
  else
  {
    fprintf(stderr, "%s\n", "\"0\" returns 0");
  }
  /*
  '++-0-' should return 98
  */
  number = ternary_to_decimal("++-0-", 5);
  if(number != 98)
  {
    fprintf(stderr, "%s%d%s\n", "\"++-0-\" does not return 98. Returns ", number, " instead");
  }
  else
  {
    fprintf(stderr, "%s\n", "\"++-0-\" returns 98");
  }
  printf("%d\n", ternary_to_decimal("---------", 9));
  return 0;
}

int main()
{
  return test_utils();
}