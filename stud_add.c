#include"header.h"
int stud_count_rollno(stud *ptr){
	int c=0;
	while(ptr){
		if(ptr->rollno==(c+1)){
			c++;
			ptr=ptr->next;
		}
		else
			return c;
	}
	return c;
}
void stud_add(stud **ptr){
	stud_sort_rollno(*ptr);
	int c=stud_count_rollno(*ptr),count=0;
	stud *t,*new=malloc(sizeof(stud));
	t=*ptr;

	new->rollno=c+1;
	
	printf("\033[0m-----------------------------------\n\033[37mFor rollno %d, Enter name and percentage :\033[32m\n",c+1);
	scanf("%s%f",new->name,&new->per);
	
	if(*ptr==0){
		new->next=*ptr;
		*ptr=new;
	}
	else{
		while(t){
			count++;
			if(count==c){
				break;
			}
			t=t->next;
		}
		if(new->rollno==1){
			new->next=*ptr;
			*ptr=new;
		}
		else{
			new->next=t->next;
			t->next=new;
		}
	}
//	stud_print(*ptr);
}
void stud_print(stud *ptr){
	printf("\033[34m-----------------------------------\033[35m\n");
	if(ptr==0){
		printf("No records found\n");
		printf("\033[34m-----------------------------------\n");
		return;
	}
	while(ptr){
		printf("%d %s %g%c\n",ptr->rollno,ptr->name,ptr->per,37);
		ptr=ptr->next;
	}
	printf("\033[34m-----------------------------------\n");
}
