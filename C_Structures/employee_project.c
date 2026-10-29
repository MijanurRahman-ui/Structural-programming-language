#include <stdio.h>
#include <string.h>
struct employee
{
 int id;
 char name[49];
 float salary;
 int age;
};
struct employee store[100];
int count = 0;
void addemployee();
void showdata();
void searchemployee();
int main()
{
 int choice;
 while (1)
 {
  printf("\n<<<<EMPLOYEE MANAGEMENT SYSTEM>>>> \n");
  printf("\n1.add employee");
  printf("\n2.display employee ");
  printf("\n3.search employee ");
  printf("\n4.exit ");
  printf("\nEnter choice your option 1-4\n");
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
   addemployee();
   break;
  case 2:
   showdata();
   break;
  case 3:
   searchemployee();
   break;
  case 4:
   printf("Exiting program! \n");
   return 0;
  default:
   printf("Invalide number plz choise 1-4:\n");
  }
 }
 return 0;
}

void addemployee()
{
 printf("---ADD NEW EMPLOYEE---\n");
 printf("Enter ID : ");
 scanf("%d", &store[count].id);
 printf("Enter employee name : ");
 scanf("%s", &store[count].name);
 printf("Enter salary : ");
 scanf("%f", &store[count].salary);
 printf("Enter employee age : ");
 scanf("%d", &store[count].age);
 count++;
 printf("Employee added sucessfully\n");
}
void showdata()
{
 if (count == 0)
 {
  printf("No Employee founded\n");
  return;
 }
 printf("\nALL Employee Data->->->->->\n\n");
 printf("---------------------------\n");
 for (int i = 0; i < count; i++)
 {
  printf("Employee no: %d\n", i + 1);
  printf("ID     :%d\n", store[i].id);
  printf("NAME   :%s\n", store[i].name);
  printf("salary :%f\n", store[i].salary);
  printf("AGE    :%d", store[i].age);
  printf("\n-------------------------\n\n");
 }
}
void searchemployee()
{
 if (count == 0)
 {
  printf("\nNo Employee record found\n");
  return;
 }
 int searchid, found = 0;
 printf("Enter employee ID : ");
 scanf("%d", searchid);
 for (int i = 0; i < count; i++)
 {
  if (store[i].id == searchid)
  {
   printf("----employee founded---");
   printf("ID     :%d", store[i].id);
   printf("name   :%s", store[i].name);
   printf("salary :%.2f", store[i].salary);
   printf("Age    :%d", store[i].age);
   found = 1;
   break;
  }
  else
  {
   printf("employee with %d id not founded\n", searchid);
  }
 }
}