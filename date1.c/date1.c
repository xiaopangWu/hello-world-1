/* Prints a date in legal form */
#include <stdio.h>

int main(void)
{
  int month, day, year,week;

  printf("Enter date (mm/dd/yy): ");
  scanf("%d /%d /%d", &month, &day, &year);/*&取地址符*/ 

  printf("Dated this %d", day);
  switch (day) {
    case 1: case 21: case 31:
      printf("st"); break;
    case 2: case 22:
      printf("nd"); break;
    case 3: case 23:
      printf("rd"); break;
    default: printf("th"); break;/*break:跳出switch语句，执行其后面的语句*/ 
  }
  printf(" day of ");
    switch (month) {
    case 1:  printf("January");   break;
    case 2:  printf("February");  break;
    case 3:  printf("March");     break;
    case 4:  printf("April");     break;
    case 5:  printf("May");       break;
    case 6:  printf("June");      break;
    case 7:  printf("July");      break;
    case 8:  printf("August");    break;
    case 9:  printf("September"); break;
    case 10: printf("October");   break;
    case 11: printf("November");  break;
    case 12: printf("December");  break;
  }

  printf(", 20%.2d.", year);/*%.2d用于显示年份的最后两位数*/ 
  if( month==1 || month==2)/*判断相反情况*/ 
  {
  	month = month+12;/*基姆拉尔森公式中一、二月要看做十三、十四月计算*/ 
  }
  week = (day+2*month+3*(month+1)/5+year+year/4-year/100+year/400+1)%7;/*基姆拉尔森计算公式*/
  switch(week)
  {
  	case 0: printf("Sunday"); break;
	case 1: printf("Monday"); break;
    case 2: printf("Tuesday"); break;
    case 3: printf("Wednesday"); break;
    case 4: printf("Thursday"); break;
    case 5: printf("Friday"); break;
    case 6: printf("Saturday"); break;
    /*switch语句中不一定要有default分支*/ 
  }
  return 0;
}

