#include"header.h"
void stud_read(stud **ptr){
	FILE *fp=fopen("student.dat","r");
	stud *temp,*new,*last;

	while(1){
		new=malloc(sizeof(stud));
		if(fscanf(fp,"%d%s%f",&new->rollno,new->name,&new->per)==-1)
			break;
		new->next=0;	
		if(*ptr==0)
			*ptr=new;
		else{
			last=*ptr;
			while(last->next)
				last=last->next;
			last->next=new;
		}
	}
	printf("\033[35m---------------------------------\033[0m\n");
	printf("\033[31m File read successfully\n");
	printf("\033[35m---------------------------------\033[0m\n");
	fclose(fp);
}
void stud_show(stud **ptr){
	if(*ptr==0){
		printf("\033[35m---------------------------------\033[0m\n");
		printf("\033[31m No student database found\n");
		printf("\033[35m---------------------------------\033[0m\n");
		return;
	}

	stud *temp;
	temp=*ptr;
	printf("\033[35m---------------------------------\033[0m\n");
	printf(" \033[33mRollno\t Name\tPercentage\n");
	printf("\033[35m---------------------------------\033[0m\n");
	while(temp){
		printf("   %d \t %s \t %g%c \n",temp->rollno,temp->name,temp->per,37);
		temp=temp->next;
	}
	printf("\033[35m---------------------------------\033[0m\n");
}
