#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

typedef struct student{
	int rollno;
	char name[20];
	float per;
	struct student *next;
}stud;

void stud_add(stud**);
void stud_del(stud**);
void stud_show(stud**);
void stud_print(stud*);
int stud_count_rollno(stud*);
void stud_del_all(stud**);
void stud_save(stud*);
void stud_mod(stud*);
int stud_count(stud*);
void stud_sort(stud*);
void stud_read(stud**);
void stud_reverse(stud**);
void stud_sort_rollno(stud*);
int stud_count_sort(stud*);
