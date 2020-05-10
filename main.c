/* main.c - Calculate the average of three numbers.

   Copyright (c) 2020, Rafael Vieira de Santana  rafael_vieira@usp.br
   
   This file is part of Average Calculator
   
   Average Calculator is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>

/* This function returns the arithmentic mean of a, b and c.*/

float average(float a, float b, float c)
{
  return (a+b+c)/3; /*The function calculates the sum of a, b and c, then divides it by 3.*/
}

/* This program outputs the average of three values. */

int main()
{
  float v1, v2, v3;   /* Input variables. */ 
  float result;       /* Output variable. */

  v1 = 10;
  v2 = 20;
  v3 = 60; 
  
  result = average (v1, v2, v3);
  
  printf("The average of the values:\n\n - %.2f;\n - %.2f;\n - %.2f.\n\nis %.2f.\n", v1, v2, v3, result);

  return 0 ;
}
