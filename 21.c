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

	printf("                Servitor�uŪ�͵��c��               \n");

	printf("-------------------------------------------------\n"); 
	printf("�п�J ID:");
	scanf("%s", servitor.ID);
	printf("�п�J�m�W:");
	scanf("%s", servitor.name);
	printf("�п�J���~:");
	scanf("%d", &servitor.salary);
	printf("�п�J�u�@�ɼ�:");
	scanf("%d", &servitor.hours);
	salc(&servitor);
	printf("\n\n%s�����:---------\n", servitor.name);
	printf("ID:%s\n", servitor.ID);
	printf("�m�W:%s\n", servitor.name);
	printf("���~:%d\n", servitor.salary);
	printf("�u�@�ɼ�:%d:\n", servitor.hours);
	printf("�~��:%d\n", servitor.income);
}
int salc(struct Servitor *ser){
	(ser->income)=(ser->salary)*(ser->hours);
	return (ser->income);
}
