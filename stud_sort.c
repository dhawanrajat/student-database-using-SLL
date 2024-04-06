#include"header.h"

int stud_count(stud *ptr){
	if(ptr==0){
		printf("\033[35m---------------------------------\033[0m\n");
		printf("\033[31m No student database found\n");
		printf("\033[35m---------------------------------\033[0m\n");
		return 0;
	}
	int c=0;

	while(ptr){
		c++;
		ptr=ptr->next;
	}
	return c;
}
int stud_count_sort(stud *ptr){
	int c=0;

	while(ptr){
		c++;
		ptr=ptr->next;
	}
	return c;
}
void stud_sort(stud *ptr){
	if(ptr==0){
		printf("\033[35m---------------------------------\033[0m\n");
		printf("\033[31m No student database found\n");
		printf("\033[35m---------------------------------\033[0m\n");
	}
	int i,j,c=stud_count(ptr);
	stud *p1,*p2,t;
	char op;

	printf("\033[35m---------------------------------\033[0m\n");
	printf("\033[31mN/n\t\033[0m: \033[32m Sort with name?\n\033[31mP/p\t\033[0m: \033[32m Sort with percentage?\n\033[37mEntered option is : \033[36m");
	scanf(" %c",&op);
	printf("\033[35m---------------------------------\033[0m\n");

	switch(op){
		case 'N':
			p1=p2=ptr;
			for(i=0;i<c-1;i++){
				p2=p1->next;
				for(j=0;j<c-1-i;j++){
					if(strcmp(p1->name,p2->name)>=0){
						t.rollno=p1->rollno;
						strcpy(t.name,p1->name);
						t.per=p1->per;

						p1->rollno=p2->rollno;
						strcpy(p1->name,p2->name);
						p1->per=p2->per;

						p2->rollno=t.rollno;
						strcpy(p2->name,t.name);
						p2->per=t.per;


					}
					p2=p2->next;
				}
				p1=p1->next;
			}
			printf("\033[35m---------------------------------\033[0m\n");
			printf("Student database sorted successfully\n");
			printf("\033[35m---------------------------------\033[0m\n");
			break;
		case 'n':
			p1=p2=ptr;
			for(i=0;i<c-1;i++){
				p2=p1->next;
				for(j=0;j<c-1-i;j++){
					if(strcmp(p1->name,p2->name)>=0){
						t.rollno=p1->rollno;
						strcpy(t.name,p1->name);
						t.per=p1->per;

						p1->rollno=p2->rollno;
						strcpy(p1->name,p2->name);
						p1->per=p2->per;

						p2->rollno=t.rollno;
						strcpy(p2->name,t.name);
						p2->per=t.per;
					}
					p2=p2->next;
				}
				p1=p1->next;
			}
			printf("\033[35m---------------------------------\033[0m\n");
			printf("Student database sorted successfully\n");
			printf("\033[35m---------------------------------\033[0m\n");
			break;
		case 'P':
			p1=p2=ptr;
			for(i=0;i<c-1;i++){
				p2=p1->next;
				for(j=0;j<c-1-i;j++){
					if(p1->per>p2->per){
						t.rollno=p1->rollno;
						strcpy(t.name,p1->name);
						t.per=p1->per;

						p1->rollno=p2->rollno;
						strcpy(p1->name,p2->name);
						p1->per=p2->per;

						p2->rollno=t.rollno;
						strcpy(p2->name,t.name);
						p2->per=t.per;
					}
					p2=p2->next;
				}
				p1=p1->next;
			}
			printf("\033[35m---------------------------------\033[0m\n");
			printf("Student database sorted successfully\n");
			printf("\033[35m---------------------------------\033[0m\n");
			break;
		case 'p':
			p1=p2=ptr;
			for(i=0;i<c-1;i++){
				p2=p1->next;
				for(j=0;j<c-1-i;j++){
					if(p1->per>p2->per){
						t.rollno=p1->rollno;
						strcpy(t.name,p1->name);
						t.per=p1->per;

						p1->rollno=p2->rollno;
						strcpy(p1->name,p2->name);
						p1->per=p2->per;

						p2->rollno=t.rollno;
						strcpy(p2->name,t.name);
						p2->per=t.per;
					}
					p2=p2->next;
				}
				p1=p1->next;
			}
			printf("\033[35m---------------------------------\033[0m\n");
			printf("Student database sorted successfully\n");
			printf("\033[35m---------------------------------\033[0m\n");
			break;
		default:
			printf("\033[31m\n Wrong Option...\033[0m\n");
	}
}
void stud_reverse(stud **ptr){
	if(*ptr==0){
		printf("\033[35m---------------------------------\033[0m\n");
		printf("\033[31m No student database found\n");
		printf("\033[35m---------------------------------\033[0m\n");
	}
	int i=0,c=stud_count(*ptr);
	stud **p,*t;

	if(c>1){
		p=malloc(sizeof(stud*)*c);
		t=*ptr;

		while(t){
			p[i++]=t;
			t=t->next;
		}
		for(i=1;i<c;i++)
			p[i]->next=p[i-1];
		p[0]->next=0;
		*ptr=p[c-1];
	}
	free(p);
	printf("\033[35m---------------------------------\033[0m\n");
	printf("Links reversed successfully\n");
	printf("\033[35m---------------------------------\033[0m\n");
}
void stud_sort_rollno(stud *ptr){
	int i,j,c=stud_count_sort(ptr);
	stud *p1,*p2,t;
	p1=p2=ptr;
	for(i=0;i<c-1;i++){
		p2=p1->next;
		for(j=0;j<c-1-i;j++){
			if(p1->rollno>p2->rollno){
				t.rollno=p1->rollno;
				strcpy(t.name,p1->name);
				t.per=p1->per;

				p1->rollno=p2->rollno;
				strcpy(p1->name,p2->name);
				p1->per=p2->per;

				p2->rollno=t.rollno;
				strcpy(p2->name,t.name);
				p2->per=t.per;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}
}
