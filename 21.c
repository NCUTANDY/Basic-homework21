#include<stdio.h>
#include<stdlib.h>
struct Servitor{
	char ID[20];
	char name[20];
	int salary;
	int hours;
	int income;
};
int salc(struct Servitor*);
int main(void){
	struct Servitor servitor;
	printf("-------------------------------------------------\n");

	printf("                Servitor工讀生結構體               \n");

	printf("-------------------------------------------------\n"); 
	printf("請輸入 ID:");
	scanf("%s", servitor.ID);
	printf("請輸入姓名:");
	scanf("%s", servitor.name);
	printf("請輸入時薪:");
	scanf("%d", &servitor.salary);
	printf("請輸入工作時數:");
	scanf("%d", &servitor.hours);
	salc(&servitor);
	printf("\n\n%s的資料:---------\n", servitor.name);
	printf("ID:%s\n", servitor.ID);
	printf("姓名:%s\n", servitor.name);
	printf("時薪:%d\n", servitor.salary);
	printf("工作時數:%d:\n", servitor.hours);
	printf("薪水:%d\n", servitor.income);
}
int salc(struct Servitor *ser){
	(ser->income)=(ser->salary)*(ser->hours);
	return (ser->income);
}
