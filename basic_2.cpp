/* 
�D�ئW��:�м��g�{�����ϥΪ̿�J�X�ͦ~���ÿ�X
�s�@:�f�a�� 
�ק�/�������:2019/4/7 
*/
#include<stdio.h> //���J���Y�� 
#include<stdlib.h>

int main(void){
	int year,month,day;      //�إ�int�ܼ�year,month,day 
	
	printf("�п�J�X�ͦ~��");
	scanf("%d",&year);       //��Jyear�ܼ� 
	printf("�п�J�X�ͤ��");
	scanf(" %d", &month);      //��Jmonth�ܼ�  
	printf("�п�J�X�ͤ��");
	scanf(" %d", &day);        //��Jday�ܼ�  
	printf("�A���ͤ�O:%d�~%d��%d��\n",year,month,day);
	system("pause");
	return 0;
}
