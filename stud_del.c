#include"header.h"
void stud_del(stud **ptr){
	if(*ptr==0){
		printf("\033[35m---------------------------------\033[0m\n");
		printf("\033[31m No student database found\n");
		printf("\033[35m---------------------------------\033[0m\n");
		return;
	}
	stud *del,*prev;
	del=*ptr;
	char op,name[20];
	int num,c=0,a[10],i=0,j;
l:
	printf("\033[31mR/r\t\033[0m: \033[32m Want to delete according to rollno?\n\033[31mN/n\t\033[0m: \033[32m Want to delete according to name?\n\033[37mEntered option is : \033[36m");
	scanf(" %c",&op);

	switch(op){
		case 'R':
			printf("\033[36mEnter rollno to delete :\033[35m\n");
			scanf("%d",&num);

			while(del){
				if(del->rollno==num){
					if(*ptr==del){
						*ptr=del->next;
						free(del);
					}
					else{
						prev->next=del->next;
						free(del);
					}
				}
				prev=del;
				del=del->next;
			}
			//stud_print(*ptr);
			break;

		case 'r':
			printf("\033[36mEnter rollno to delete :\033[35m\n");
			scanf("%d",&num);

			while(del){
				if(del->rollno==num){
					if(*ptr==del){
						*ptr=del->next;
						free(del);
						printf("\033[35m---------------------------------\033[0m\n");
						printf("Student database deleted successfully\n");
						printf("\033[35m---------------------------------\033[0m\n");
						return;
					}
					else{
						prev->next=del->next;
						free(del);
						printf("\033[35m---------------------------------\033[0m\n");
						printf("Student database deleted successfully\n");
						printf("\033[35m---------------------------------\033[0m\n");
						return;
					}
				}
				prev=del;
				del=del->next;
			}
			//stud_print(*ptr);
			break;

		case 'n':
			printf("\033[36mEnter name to delete :\033[35m\n");
			scanf("%s",name);

			while(del){
				if(strcmp(name,del->name)==0)
					c++;
				del=del->next;
			}
			del=*ptr;
			if(c>1){
				i=0;
				while(del){
					if(strcmp(name,del->name)==0){
						printf("%d %s %g%c\n",del->rollno,del->name,del->per,37);
						a[i++]=del->rollno;
					}
					del=del->next;
				}
			}
			else{
				while(del){
					if(strcmp(name,del->name)==0){
						if(*ptr==del){
							*ptr=del->next;
							free(del);
							printf("\033[35m---------------------------------\033[0m\n");
							printf("Student database deleted successfully\n");
							printf("\033[35m---------------------------------\033[0m\n");
							return;
						}
						else{
							prev->next=del->next;
							free(del);
							printf("\033[35m---------------------------------\033[0m\n");
							printf("Student database deleted successfully\n");
							printf("\033[35m---------------------------------\033[0m\n");
							return;
						}
					}
					prev=del;
					del=del->next;
				}
				break;
			}
			printf("\033[36mSimilar names found\nEnter rollno to delete :\033[35m\n");
l1:
			scanf("%d",&num);
			del=*ptr;
			while(del){
				if((del->rollno==num)){
					j=i;
					while(j>=0){
						if(del->rollno==a[j--]){
							if(*ptr==del){
								*ptr=del->next;
								free(del);
								printf("\033[35m---------------------------------\033[0m\n");
								printf("Student database deleted successfully\n");
								printf("\033[35m---------------------------------\033[0m\n");
								return;
							}
							else{
								prev->next=del->next;
								free(del);
								printf("\033[35m---------------------------------\033[0m\n");
								printf("Student database deleted successfully\n");
								printf("\033[35m---------------------------------\033[0m\n");
								return;
							}
						}
					}
					printf("Rollno not matching with the names provided.\n");
					printf("\033[35m---------------------------------\033[0m\n");
					printf("Enter rollno matching with the name provided earlier\n");
					goto l1;
				}
				prev=del;
				del=del->next;
			}
		//	stud_print(*ptr);
			break;

		case 'N':
			printf("\033[36mEnter name to delete :\033[35m\n");
			scanf("%s",name);

			while(del){
				if(strcmp(name,del->name)==0)
					c++;
				del=del->next;
			}
			del=*ptr;
			if(c>1){
				i=0;
				while(del){
					if(strcmp(name,del->name)==0)
						printf("%d %s %g%c\n",del->rollno,del->name,del->per,37);
					del=del->next;
				}
			}
			else{
				while(del){
					if(strcmp(name,del->name)==0){
						if(*ptr==del){
							*ptr=del->next;
							free(del);
							printf("\033[35m---------------------------------\033[0m\n");
							printf("Student database deleted successfully\n");
							printf("\033[35m---------------------------------\033[0m\n");
							return;
						}
						else{
							prev->next=del->next;
							free(del);
							printf("\033[35m---------------------------------\033[0m\n");
							printf("Student database deleted successfully\n");
							printf("\033[35m---------------------------------\033[0m\n");
							return;
						}
					}
					prev=del;
					del=del->next;
				}
				break;
			}
			printf("\033[36mSimilar names found\nEnter rollno to delete :\033[35m\n");
l2:
			scanf("%d",&num);
			del=*ptr;
			while(del){
				if(del->rollno==num){
					j=i;
					while(j>=0){
						if(del->rollno==a[j--]){
							if(*ptr==del){
								*ptr=del->next;
								free(del);
								printf("\033[35m---------------------------------\033[0m\n");
								printf("Student database deleted successfully\n");
								printf("\033[35m---------------------------------\033[0m\n");
								return;
							}
							else{
								prev->next=del->next;
								free(del);
								printf("\033[35m---------------------------------\033[0m\n");
								printf("Student database deleted successfully\n");
								printf("\033[35m---------------------------------\033[0m\n");
								return;
							}
						}
					}
					printf("Rollno not matching with the names provided.\n");
					printf("\033[35m---------------------------------\033[0m\n");
					printf("Enter rollno matching with the name provided earlier\n");
					goto l2;
				}
				prev=del;
				del=del->next;
			}
		//	stud_print(*ptr);
			break;

		default:printf("\033[31mEnter valid option...\n");
			goto l;
	}
}

void stud_del_all(stud **ptr){
	stud *del=*ptr;

	if(*ptr==0){
		printf("\033[34m-----------------------------------\n\033[31mNo student database found\n\033[34m-----------------------------------\033[0m\n");
		return;
	}
	while(del){
		*ptr=del->next;
		free(del);
		del=*ptr;
	}
	printf("\033[34m-----------------------------------\n\033[31mAll student database deleted successfully\n\033[34m-----------------------------------\033[0m\n");
}
