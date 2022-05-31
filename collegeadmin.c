#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
//#############################################################################
void student();
void displayteacherinfo();
void displayclassschedule();
void displaysubjectlist();
void displaycollageinfo();
void displaybusschedule();
void gotoxy (int x, int y);
void student_login();
void mainmenu();
void admin_in();
void admin();
void add_info();
void edit_info();
void delete_info();
void add_class_schedule();
void add_bus_schedule();
void add_teacher_info();
void add_collage_info();
void add_subject_list();
void edit_class_schedule();
void edit_bus_schedule();
void edit_teacher_info();
void edit_college_info();
void edit_subject_list();
void delete_class_schedule();
void delete_bus_schedule();
void delete_teacher_info();
void delete_college_info();
void delete_subject_list();
//#############################################################################
typedef struct
{
char businfo[10000];
}bus;
bus b;

struct routine
{
char dayinfo[5000];
};
struct routine r;

struct subject
{
char subname[25000];
};
struct subject s;

typedef struct
{
char teainfo[10000];
}teach;
teach t;

typedef struct
{
char info[10000];
}infom;
infom inf;
//#############################################################################
void student()
{
system("cls");
printf("\n\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 STUDENT SECTION \xb2\xb2\xb2\xb2\xb2\xb2\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 1.Class schedule \n");
printf("\n\t\t\t\xdb\xdb\xdb\xb2 2.Bus schedule \n");
printf("\n\t\t\t\xdb\xdb\xdb\xb2 3. Teacher info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 4. College info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 5. Subject list\n\n");
printf("\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
printf("\n enter your choice: ");
int de;
scanf("%d",&de);
switch(de)
{
case 1:
displayclassschedule();
break;
case 2:
displaybusschedule();
break;
case 3:
displayteacherinfo();
break;
case 4:
displaycollageinfo();
break;
case 5:
displaysubjectlist();
break;
default:
printf("\aInvalid choice");
break;
}
}
int i,j,k,l,m,n,p,d;
FILE *fptr;
//###################################################################################
void displayteacherinfo()
{
//system("cls");
fptr=fopen("C:/project/teacherinfo.txt","rb+");
printf("\t\t\n\n\n\n");
printf("\t\t****************TEACHER INFORMATION********************");
printf("\t\t\n\n\n\n");
if(fptr==NULL)
{
   printf("error in opening file");
}
while(fread(&t,sizeof(t),1,fptr)==1)
for(i=0;i<=80;i++)
printf("-");
printf("\n");
{
printf("%s",t.teainfo);
}
printf("\n");
for(j=0;j<=80;j++)
printf("-");
}
//##############################################################################

void admin()
{
printf("\n\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 ADMIN SECTION \xb2\xb2\xb2\xb2\xb2\xb2\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 1. Add info\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 2. Edit info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 3. Delete info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 4.Exit\n\n");
printf("\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
printf("\t\t\tEnter your choice");
int c;
scanf("%d",&c);
switch(c)
{
case 1:
	add_info();
	break;
case 2:
	edit_info();
	break;
case 3:
	delete_info();
	break;
case 4:
	exit(0);
default:
	printf("\tINVALID CHOICE");
	admin();
	break;
}
}
//############################################################################################
void displayclassschedule()
{
fptr=fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/classschedule.txt","rb+");
printf("\t\t\n\n\n\n");
printf("\t\t****************CLASS SCHEDULE********************");
printf("\t\t\n\n\n\n");
if(fptr==NULL)
{
   printf("error in opening file");
}
while(fread(&r,sizeof(r),1,fptr)==1)
for(i=0;i<=80;i++)
printf("-");
printf("\n");
{
printf("%s",r.dayinfo);
}
printf("\n");
for(j=0;j<=80;j++)
printf("-");
printf("\nEnter 'E' to exit and 'c' to continue: ");
char z;
scanf("%c",&z);
if(z=='c')
mainmenu();
else
exit(0);
}
//###########################################################################################
void displaysubjectlist()
{
fptr=fopen("C:/project/subjectlist.txt","rb+");
printf("\t\t\n\n\n\n");
printf("\t\t****************SUBJECT LIST INFORMATION********************");
printf("\t\t\n\n\n\n");
if(fptr==NULL)
{
   printf("error in opening file");
}
while(fread(&s,sizeof(s),1,fptr)==1)
for(i=0;i<=80;i++)
printf("-");
printf("\n");
{
printf("%s",s.subname);
}
printf("\n");
for(j=0;j<=80;j++)
printf("-");
}
//########################################################################################
void displaycollageinfo()
{
fptr=fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/collegeinfo.txt","rb+");
printf("\t\t\n\n\n\n");
printf("\t\t****************COLLAGE INFORMATION********************");
printf("\t\t\n\n\n\n");
while(fread(&inf,sizeof(inf),1,fptr)==1)
for(i=0;i<=80;i++)
printf("-");
printf("\n");
{
printf("%s",inf.info);
}
printf("\n");
for(j=0;j<=80;j++)
printf("-");
}
//###################################################################################
void displaybusschedule()
{
system("cls");
fptr=fopen("C:/project/businfo.txt","rb+");
printf("\t\t\n\n\n\n");
printf("\n\n\t\t********************BUS INFORMATION*******************\n");
printf("\t\t\n\n\n\n");
while(fread(&b,sizeof(b),1,fptr)==1)
for(i=0;i<=80;i++)
printf("-");
printf("\n");
{
printf("%s",b.businfo);
}
printf("\n");
for(j=0;j<=80;j++)
printf("-");
}
//#######################################################################################
int main()
{
system("cls");
mainmenu();
getch();
}
//#########################################################################################
void student_login()
{
	printf("Enter student SRN/PRN: ");
	char srn[3];
	scanf("%s",srn);
	if(strcmpi("PES",srn)==0)
	{
		printf("\nEntered SRN/PRN is found\n");
		Sleep(2000);
		student();
	}
	else
{
printf("\nEntered SRN/PRN is not found\n");
Sleep(5000);
system("cls");
mainmenu();
}
}
//##############################################################################################
void admin_in()
{

char user_name[10];
char ch=0,passw[10];
printf("\nEnter user name: ");
scanf("%s",user_name);
fflush(stdin);
printf("\n\n\n\n\n\n\t\t***** Password Protected *****");
printf("\n\n\t\tEnter Password:");
while(ch!=13)
{
ch=getch();
if(ch!=13)
{
putch('*');
passw[i] = ch;
i++;
}}
passw[i] = '\0';
if(strcmp("ADMIN2020",user_name)==0)
{
if(strcmp("ADMIN2020",passw)==0)
{
admin();
//break;
}
else
{
printf("\nPASSWORD is INCORRECT\n");
}
}
else
	{
		printf("\nEntered username is INCORRECT\n");
		Sleep(3000);
		system("cls");
		mainmenu();
	}
	
}
//####################################################################################
void gotoxy (int x, int y)
{
COORD coord = { 0 ,0 };
coord.X = x; coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
//###################################################################################
void mainmenu()
{
char d[40] = "WELCOME TO COLLEGE INFO SYSTEM";
int i,j,k,l,m;
gotoxy(20,5);
for(j=0;j<40;j++)
{
Sleep(10);
printf("\xb2");
}
gotoxy(20,5);printf("\xB2");
Sleep(20);
gotoxy(20,6);printf("\xB2");
Sleep(20);
gotoxy(20,7);printf("\xB2");
Sleep(20);
gotoxy(20,8);printf("\xB2");
gotoxy(20,9);printf("\xB2");
Sleep(20);
gotoxy(20,10);printf("\xB2");
Sleep(20);
gotoxy(20,11);printf("\xB2");
Sleep(20);
gotoxy(20,12);printf("\xB2");
gotoxy(20,13);printf("\xB2");
Sleep(20);
gotoxy(20,14);printf("\xB2");
Sleep(20);
gotoxy(20,15);printf("\xB2");
Sleep(20);
gotoxy(20,16);printf("\xB2");
gotoxy(20,17);printf("\xB2");
Sleep(20);
gotoxy(20,18);printf("\xB2");
Sleep(20);
gotoxy(20,19);printf("\xB2");
Sleep(20);
gotoxy(20,20);printf("\xB2");

gotoxy(60,5);printf("\xB2");
Sleep(20);
gotoxy(60,6);printf("\xB2");
Sleep(20);
gotoxy(60,7);printf("\xB2");
Sleep(20);
gotoxy(60,8);printf("\xB2");
Sleep(20);
gotoxy(60,9);printf("\xB2");
gotoxy(60,9);printf("\xB2");
Sleep(20);
gotoxy(60,10);printf("\xB2");
Sleep(20);
gotoxy(60,11);printf("\xB2");
Sleep(20);
gotoxy(60,12);printf("\xB2");
Sleep(20);
gotoxy(60,13);printf("\xB2");
Sleep(20);
gotoxy(60,14);printf("\xB2");
Sleep(20);
gotoxy(60,15);printf("\xB2");
Sleep(20);
gotoxy(60,16);printf("\xB2");
Sleep(20);
gotoxy(60,17);printf("\xB2");
Sleep(20);
gotoxy(60,18);printf("\xB2");
Sleep(20);
gotoxy(60,19);printf("\xB2");
Sleep(20);
gotoxy(60,20);printf("\xB2");

gotoxy(20,20);
for(j=0;j<40;j++)
{
Sleep(20);
printf("\xb2");
}

gotoxy(20,9);
for(j=0;j<40;j++)
{
Sleep(20);
printf("\xb2");
}

gotoxy(21,7);
printf("\t ");
for(m=0;m<30;m++)
{
Sleep(50);
printf("%c",d[m]);
}

gotoxy(23,11);
printf("\t \xdb\xdb\xdb\xb2 S. Student");
gotoxy(23,14);
printf("\t \xdb\xdb\xdb\xb2 A.Admin ");
gotoxy(23,17);
printf("\t \xdb\xdb\xdb\xb2 Q.Quit ");

char n;
gotoxy(21,22);
printf("\nEnter choice:");
n=getch();
printf("\nUser entered choice is:%c\n ",n);
switch(n)
{
case 's':
student_login();
break;
case 'a':
admin_in();
break;
case 'q':
system("cls");
//getch();
exit(0);
//break;
default:
printf("\n\a\t\t\t Invalid choice!!");
Sleep(1000);
system("cls");
mainmenu();
}
}
//######################################################################################
void add_info()
{
printf("\n\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Add info\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 1.Class Schedule \n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 2.Bus Schedule \n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 3. Teacher info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 4. College info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 5. Subject List\n\n");
printf("\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
printf("\t\t\tEnter your choice");
int ch;
scanf("%d",&ch);
switch(ch)
{
case 1:
	add_class_schedule();
	break;
case 2:
	add_bus_schedule();
	break;
case 5:
	add_subject_list();
	break;
case 3:
	add_teacher_info();
	break;
case 4:
	add_collage_info();
	break; 
default:
	printf("\tINVALID CHOICE!");
	break;
}
}
//##################################################################################
void edit_info()
{
printf("\n\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Edit info\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 1.Class Schedule \n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 2.Bus Schedule \n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 3. Teacher info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 4. College info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 5. Subject List\n\n");
printf("\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
printf("\t\t\tEnter your choice");
int ch;
scanf("%d",&ch);
switch(ch)
{
case 1:
	edit_class_schedule();
	break;
case 2:
	edit_bus_schedule();
	break;
case 5:
	edit_subject_list();
	break;
case 3:
	edit_teacher_info();
	break;
case 4:
	edit_college_info();
	break; 
default:
	printf("\tINVALID CHOICE!");
	break;
}
}
//#################################################################################
void delete_info()
{
printf("\n\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Delete info\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 1.Class Schedule \n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 2.Bus Schedule \n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 3. Teacher info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 4. College info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 5. Subject List\n\n");
printf("\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
printf("\t\t\tEnter your choice");
int ch;
scanf("%d",&ch);
switch(ch)
{
case 1:
	delete_class_schedule();
	break;
case 2:
	delete_bus_schedule();
	break;
case 5:
	delete_subject_list();
	break;
case 3:
	delete_teacher_info();
	break;
case 4:
	delete_college_info();
	break;
default:
	printf("\tINVALID CHOICE!");
	break;
}
}
//###################################################################################
void add_class_schedule()
{
   char k;
   FILE *fp=fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/classschedule.txt","a");
   if (fp == NULL) 
   {
        printf("Error!");
        exit(1);
   }
   printf("Enter a subject and timing to be added:\n");
   while((k=fgetc(stdin))!=EOF)
   { fputc(k,fp);
   }
   fclose(fp);
}
//############################################################################################
void add_bus_schedule()
{
   char k;
   FILE *fp=fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/businfo.txt","a");
   if (fp == NULL) 
   {
        printf("Error!");
        exit(1);
   }
   printf("Enter bus timing along with route which is to be added:\n");
   while((k=fgetc(stdin))!=EOF)
   { fputc(k,fp);
   }
   fclose(fp);
}
//################################################################################################
void add_teacher_info()
{
   char k;
   FILE *fp=fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/teacherinfo.txt","a");
   if (fp == NULL) 
   {
        printf("Error!");
        exit(1);
   }
   printf("Enter teacher details which is to be added:\n");
   while((k=fgetc(stdin))!=EOF)
   { fputc(k,fp);
   }
   fclose(fp);
}
//############################################################################################
void add_collage_info()
{
   char k;
   FILE *fp=fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/collegeinfo.txt","a");
   if (fp == NULL) 
   {
        printf("Error!");
        exit(1);
   }
   printf("Enter the college information to be added:\n");
   while((k=fgetc(stdin))!=EOF)
   { fputc(k,fp);
   }
   fclose(fp);
}
//###############################################################################################
void add_subject_list()
{
   char k;
   FILE *fp=fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/subjectlist.txt","a");
   if (fp == NULL) 
   {
        printf("Error!");
        exit(1);
   }
   printf("Enter the subject and subject code to be added:\n");
   while((k=fgetc(stdin))!=EOF)
   { fputc(k,fp);
   }
   fclose(fp);
}
//#########################################################################################
void delete_college_info()
{
    FILE *fptr1, *fptr2;
    char file1[] ="collegeinfo.txt";
    char file2[] ="collegeinfo1.txt";
    char curr;
    int del, line_number = 0;
    printf("Please enter the line number you want to delete : ");
    scanf("%d", &del);
    fptr1 = fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/collegeinfo.txt","r");
    fptr2 = fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/collegeinfo1.txt", "w");
    curr = getc(fptr1);
    if(curr!=EOF) {line_number =1;}
    while(1){
      if(del != line_number)
        putc(curr, fptr2);
        curr = getc(fptr1);
        if(curr =='\n') line_number++;
        if(curr == EOF) break;
          }
    fclose(fptr1);
    fclose(fptr2);
    int tell; char ch;
    printf("Please enter 1. To view the file after delete or 2. Main menu");
    scanf("%d",&tell);
    fflush(stdin);
    if(tell == 1)
    {
    FILE *fp=fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/collegeinfo1.txt", "r");
    while((ch=fgetc(fp))!=EOF)
    {
      fputc(ch,stdout);
    }
    }
    else
       mainmenu();
}
//##########################################################################################
void delete_class_schedule()
{
    FILE *fptr1, *fptr2;
    char file1[] ="classschedule.txt";
    char file2[] ="classschedule1.txt";
    char curr;
    int del, line_number = 0;
    printf("Please enter the line number you want to delete : ");
    scanf("%d", &del);
    fptr1 = fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/classschedule.txt","r");
    fptr2 = fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/classchedule1.txt", "w");
    curr = getc(fptr1);
    if(curr!=EOF) {line_number =1;}
    while(1){
      if(del != line_number)
        putc(curr, fptr2);
        curr = getc(fptr1);
        if(curr =='\n') line_number++;
        if(curr == EOF) break;
          }
    fclose(fptr1);
    fclose(fptr2);
    int tell; char ch;
    printf("Please enter 1. To view the file after delete or 2. Main menu");
    scanf("%d",&tell);
    fflush(stdin);
    if(tell == 1)
    {
    FILE *fp=fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/classschedule1.txt", "r");
    while((ch=fgetc(fp))!=EOF)
    {
      fputc(ch,stdout);
    }
    }
    else
       mainmenu();
}
//###############################################################################################
void delete_bus_schedule()
{
    FILE *fptr1, *fptr2;
    char file1[] ="businfo.txt";
    char file2[] ="businfo1.txt";
    char curr;
    int del, line_number = 0;
    printf("Please enter the line number you want to delete : ");
    scanf("%d", &del);
    fptr1 = fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/businfo.txt","r");
    fptr2 = fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/businfo1.txt", "w");
    curr = getc(fptr1);
    if(curr!=EOF) {line_number =1;}
    while(1){
      if(del != line_number)
        putc(curr, fptr2);
        curr = getc(fptr1);
        if(curr =='\n') line_number++;
        if(curr == EOF) break;
          }
    fclose(fptr1);
    fclose(fptr2);
    int tell; char ch;
    printf("Please enter 1. To view the file after delete or 2. Main menu");
    scanf("%d",&tell);
    fflush(stdin);
    if(tell == 1)
    {
    FILE *fp=fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/businfo1.txt", "r");
    while((ch=fgetc(fp))!=EOF)
    {
      fputc(ch,stdout);
    }
    }
    else
       mainmenu();
}
//########################################################################################
void delete_subject_list()
{
    FILE *fptr1, *fptr2;
    char file1[] ="subjectlist.txt";
    char file2[] ="subjectlist1.txt";
    char curr;
    int del, line_number = 0;
    printf("Please enter the line number you want to delete : ");
    scanf("%d", &del);
    fptr1 = fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/subjectlist.txt","r");
    fptr2 = fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/subjectlist1.txt", "w");
    curr = getc(fptr1);
    if(curr!=EOF) {line_number =1;}
    while(1){
      if(del != line_number)
        putc(curr, fptr2);
        curr = getc(fptr1);
        if(curr =='\n') line_number++;
        if(curr == EOF) break;
          }
    fclose(fptr1);
    fclose(fptr2);
    int tell; char ch;
    printf("Please enter 1. To view the file after delete or 2. Main menu");
    scanf("%d",&tell);
    fflush(stdin);
    if(tell == 1)
    {
    FILE *fp=fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/subjectlist1.txt", "r");
    while((ch=fgetc(fp))!=EOF)
    {
      fputc(ch,stdout);
    }
    }
    else
       mainmenu();
}
//##############################################################################################
void delete_teacher_info()
{
    FILE *fptr1, *fptr2;
    char file1[] ="teacherinfo.txt";
    char file2[] ="teacherinfo1.txt";
    char curr;
    int del, line_number = 0;
    printf("Please enter the line number you want to delete : ");
    scanf("%d", &del);
    fptr1 = fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/teacherinfo.txt","r");
    fptr2 = fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/teacherinfo1.txt", "w");
    curr = getc(fptr1);
    if(curr!=EOF) {line_number =1;}
    while(1){
      if(del != line_number)
        putc(curr, fptr2);
        curr = getc(fptr1);
        if(curr =='\n') line_number++;
        if(curr == EOF) break;
          }
    fclose(fptr1);
    fclose(fptr2);
    int tell; char ch;
    printf("Please enter 1. To view the file after delete or 2. Main menu");
    scanf("%d",&tell);
    fflush(stdin);
    if(tell == 1)
    {
    FILE *fp=fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/teacherinfo1.txt", "r");
    while((ch=fgetc(fp))!=EOF)
    {
      fputc(ch,stdout);
    }
    }
    else
       mainmenu();
}
//############################################################################################
void edit_bus_schedule()
{
	FILE *fp1, *fp2;
	char word[100], ch, read[100], replace[100];
	int word_len, i, p = 0;

	fp1 = fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/businfo.txt","r");
	fp2 = fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/businfo1.txt","w+");
	if (fp1 == NULL || fp2 == NULL) {
		printf("Can't open file.");
		exit(0);
	}
	printf("THE CONTENTS OF THE FILE ARE SHOWN BELOW :\n");
	while (1) {
		ch = fgetc(fp1);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}
	printf("\n\nEnter the word to find:");
        fflush(stdin);
	fgets(word, 100, stdin);
	word[strlen(word) - 1] = word[strlen(word)];
        printf("Enter the word to replace it with :");
	fgets(replace, 100, stdin);
	replace[strlen(replace) - 1] = replace[strlen(replace)];
	fprintf(fp2, "%s - %s\n", word, replace);
	rewind(fp1);
	while (!feof(fp1)) {

		fscanf(fp1, "%s", read);

		if (strcmp(read, word) == 0) {
			strcpy(read, replace);
		}
		fprintf(fp2, "%s ", read);
	}
	rewind(fp2);
	while (1) {
		ch = fgetc(fp2);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}

	fclose(fp1);
	fclose(fp2);
}
//##############################################################################################
void edit_class_schedule()
{
	FILE *fp1, *fp2;
	char word[100], ch, read[100], replace[100];
	int word_len, i, p = 0;

	fp1 = fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/businfo.txt","r");
	fp2 = fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/businfo1.txt","w+");
	if (fp1 == NULL || fp2 == NULL) {
		printf("Can't open file.");
		exit(0);
	}
	printf("THE CONTENTS OF THE FILE ARE SHOWN BELOW :\n");
	while (1) {
		ch = fgetc(fp1);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}
	printf("\n\nEnter the word to find:");
	fgets(word, 100, stdin);
	word[strlen(word) - 1] = word[strlen(word)];
        printf("Enter the word to replace it with :");
	fgets(replace, 100, stdin);
	replace[strlen(replace) - 1] = replace[strlen(replace)];
	fprintf(fp2, "%s - %s\n", word, replace);
	rewind(fp1);
	while (!feof(fp1)) {

		fscanf(fp1, "%s", read);

		if (strcmp(read, word) == 0) {
			strcpy(read, replace);
		}
		fprintf(fp2, "%s ", read);
	}
	rewind(fp2);
	while (1) {
		ch = fgetc(fp2);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}

	fclose(fp1);
	fclose(fp2);
}
//######################################################################################
void edit_teacher_info()
{
	FILE *fp1, *fp2;
	char word[100], ch, read[100], replace[100];
	int word_len, i, p = 0;

	fp1 = fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/teacherinfo.txt","r");
	fp2 = fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/teacherinfo1.txt","w+");
	if (fp1 == NULL || fp2 == NULL) {
		printf("Can't open file.");
		exit(0);
	}
	printf("THE CONTENTS OF THE FILE ARE SHOWN BELOW :\n");
	while (1) {
		ch = fgetc(fp1);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}
	printf("\n\nEnter the word to find:");
        fflush(stdin);
	fgets(word, 100, stdin);
	word[strlen(word) - 1] = word[strlen(word)];
        printf("Enter the word to replace it with :");
	fgets(replace, 100, stdin);
	replace[strlen(replace) - 1] = replace[strlen(replace)];
	fprintf(fp2, "%s - %s\n", word, replace);
	rewind(fp1);
	while (!feof(fp1)) {

		fscanf(fp1, "%s", read);

		if (strcmp(read, word) == 0) {
			strcpy(read, replace);
		}
		fprintf(fp2, "%s ", read);
	}
	rewind(fp2);
	while (1) {
		ch = fgetc(fp2);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}

	fclose(fp1);
	fclose(fp2);
}
//#######################################################################################
void edit_college_info()
{
	FILE *fp1, *fp2;
	char word[100], ch, read[100], replace[100];
	int word_len, i, p = 0;

	fp1 = fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/collegeinfo.txt","r");
	fp2 = fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/collegeinfo1.txt","w+");
	if (fp1 == NULL || fp2 == NULL) {
		printf("Can't open file.");
		exit(0);
	}
	printf("THE CONTENTS OF THE FILE ARE SHOWN BELOW :\n");
	while (1) {
		ch = fgetc(fp1);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}
	printf("\n\nEnter the word to find:");
        fflush(stdin);
	fgets(word, 100, stdin);
	word[strlen(word) - 1] = word[strlen(word)];
        printf("Enter the word to replace it with :");
	fgets(replace, 100, stdin);
	replace[strlen(replace) - 1] = replace[strlen(replace)];
	fprintf(fp2, "%s - %s\n", word, replace);
	rewind(fp1);
	while (!feof(fp1)) {

		fscanf(fp1, "%s", read);

		if (strcmp(read, word) == 0) {
			strcpy(read, replace);
		}
		fprintf(fp2, "%s ", read);
	}
	rewind(fp2);
	while (1) {
		ch = fgetc(fp2);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}

	fclose(fp1);
	fclose(fp2);
}
//#########################################################################################
void edit_subject_list()
{
	FILE *fp1, *fp2;
	char word[100], ch, read[100], replace[100];
	int word_len, i, p = 0;

	fp1 = fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/subjectlist.txt","r");
	fp2 = fopen("C:/Users/msnar/OneDrive/Desktop/2nd sem C programming/PROJECT - FINAL/subjectlist1.txt","w+");
	if (fp1 == NULL || fp2 == NULL) {
		printf("Can't open file.");
		exit(0);
	}
	printf("THE CONTENTS OF THE FILE ARE SHOWN BELOW :\n");
	while (1) {
		ch = fgetc(fp1);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}
	printf("\n\nEnter the word to find:");
        fflush(stdin);
	fgets(word, 100, stdin);
	word[strlen(word) - 1] = word[strlen(word)];
        printf("Enter the word to replace it with :");
	fgets(replace, 100, stdin);
	replace[strlen(replace) - 1] = replace[strlen(replace)];
	fprintf(fp2, "%s - %s\n", word, replace);
	rewind(fp1);
	while (!feof(fp1)) {

		fscanf(fp1, "%s", read);

		if (strcmp(read, word) == 0) {
			strcpy(read, replace);
		}
		fprintf(fp2, "%s ", read);
	}
	rewind(fp2);
	while (1) {
		ch = fgetc(fp2);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}

	fclose(fp1);
	fclose(fp2);
	Sleep(5000);
	system("cls");
	mainmenu();
}
//################################################################################################










