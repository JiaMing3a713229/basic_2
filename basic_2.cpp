/* 
題目名稱:請撰寫程式讓使用者輸入出生年月日並輸出
製作:呂家明 
修改/完成日期:2019/4/7 
*/
#include<stdio.h> //載入標頭檔 
#include<stdlib.h>

int main(void){
	int year,month,day;      //建立int變數year,month,day 
	
	printf("請輸入出生年份");
	scanf("%d",&year);       //輸入year變數 
	printf("請輸入出生月份");
	scanf(" %d", &month);      //輸入month變數  
	printf("請輸入出生日期");
	scanf(" %d", &day);        //輸入day變數  
	printf("你的生日是:%d年%d月%d號\n",year,month,day);
	system("pause");
	return 0;
}
