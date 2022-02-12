#include<stdio.h>  
void main()  
{
  char name[20];  
  int reg[3];
  char branch[30];
  char hobbies[40];

  printf("Enter Your Name : "); 
  scanf("%s",&name);  
  printf("Enter your registration no:");
  scanf("%s",&reg);
  printf("Enter your branch: ");
  scanf("%s",&branch);
  printf("Enter your hobbies: ");
  scanf("%s",&hobbies);
  printf("Name : %s \n", name);  
  printf("Registration no: %s \n", reg);
  printf("Branch: %s \n", branch);
  printf("Hobbies: %s \n", hobbies);
}
