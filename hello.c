//
//  main.c
//  LearningC
//
//  Created by Ashish Desai on 12/23/18.
//  Copyright © 2018 Ashish Desai. All rights reserved.
//

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, const char *argv[])
{

  printf("Char   -> %ld bits\n", CHAR_BIT * sizeof('c'));
  printf("short  -> %ld bits\n", CHAR_BIT * sizeof((short)0));
  printf("int    -> %ld bits\n", CHAR_BIT * sizeof((int)0));
  printf("long   -> %ld bits\n", CHAR_BIT * sizeof(0l));
  printf("float  -> %ld bits\n", CHAR_BIT * sizeof((float)0.0));
  printf("double -> %ld bits\n", CHAR_BIT * sizeof((double)0.0));

  printf("------------------------------------------------\n");
  printf("Signed Float Max %f\n", FLT_MAX);
  printf("Signed Float Min %0.44f\n", FLT_MIN);
  printf("Signed Float Max %e\n", FLT_MAX);
  printf("Signed Float Min %0e\n", FLT_MIN);
  printf("FLT_MAX_EXP %d\n", FLT_MAX_EXP);
  printf("FLT_MIN_EXP %d\n", FLT_MIN_EXP);
  printf("FLT_RADIX %d\n", FLT_RADIX);
  printf("FLT_RADIX %.38f\n", FLT_EPSILON);
  printf("FLT_MANT_DIG %d\n", FLT_MANT_DIG);
  printf("DBL_MANT_DIG %d\n", DBL_MANT_DIG);
  printf("LDBL_MANT_DIG %d\n", LDBL_MANT_DIG); 
  return 0;
}
