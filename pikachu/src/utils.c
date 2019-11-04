#include<string.h>
#include <stdlib.h>

char *convert(char *buffer, int len, int *program_length)
{
  /*
    conver PI PI PIKA PIKACHU like string
    to - - 0 + to store in it machine memory
  */
  int i = 0, l = 1;
  char *program = malloc(sizeof(char) * l);

  char * tok = strtok(buffer, " ");
  while(tok != NULL)
  {
    if( strcmp(tok, "PI") == 0)
    {
      program[i] = '-';
    }
    else
    {
        if(strcmp(tok, "PIKA") == 0)
        {
          program[i] = '0';
        }
        else
        {
          if(strcmp(tok, "PIKACHU") == 0)
          {
            program[i] = '+';
          }
          else
          {
            free(program);
            return NULL;
          }
        }
    }
    i++;
    if(i == l)
    {
      l = l * 2;
      program = realloc(program, l * sizeof(char));
    }
    tok = strtok(NULL, " ");
  }
  * program_length = i;
  return program;
}

int ternary_to_decimal(char *ternary_number, int len)
{
  int i;
  int decimal_number = 0;
  for(i = 0; i < len; i++)
  {
    int t;
    if(ternary_number[i] == '-')
    {
      t = -1;
    }
    else
    {
      if(ternary_number[i] == '+')
      {
        t = 1;
      }
      else
      {
          t = 0;
      }
    }
    decimal_number = decimal_number * 3 + t;
  }
  return decimal_number;
}
