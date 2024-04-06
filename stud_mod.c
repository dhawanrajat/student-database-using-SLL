#include"header.h"
void stud_mod(stud *ptr){
	if(ptr==0){
		printf("\033[35m---------------------------------\033[0m\n");
		printf("\033[31m No student database found\n");
		printf("\033[35m---------------------------------\033[0m\n");
		return;
	}
	stud *temp;
	int i,c,j,num,a[10];
	float f;
	char op,s[20];

	printf("\033[35m---------------------------------\033[0m\n");
	printf("\033[31mR/r\t\033[0m: \033[32m Want to search by rollno?\n\033[31mN/n\t\033[0m: \033[32m Want to search by name?\n\033[31mP/p\t\033[0m: \033[32m Want to search by percentage?\n\033[37mEntered option is : \033[36m");
	scanf(" %c",&op);

	printf("\033[35m---------------------------------\033[0m\n");
	switch(op){
		case 'R':
			temp=ptr;
			printf("\033[38mEnter rollno to modify : ");
			scanf("%d",&i);
			printf("\033[35m---------------------------------\033[0m\n");

			while(temp){
				if(temp->rollno==i){
					printf("\033[37mEnter modified name :\n");
					scanf("%s",temp->name);

					printf("Enter modified percentage :\n");
					scanf("%f",&temp->per);

					printf("\033[35m---------------------------------\033[0m\n");
					printf("Data modified successfully\n");
					printf("\033[35m---------------------------------\033[0m\n");
					return;
				}
				temp=temp->next;
			}
			printf("\033[35m---------------------------------\033[0m\n");
			printf("Rollno not found\n");
			printf("\033[35m---------------------------------\033[0m\n");
			break;

		case 'r':
			temp=ptr;
			printf("\033[38mEnter rollno to modify : ");
			scanf("%d",&i);
			printf("\033[35m---------------------------------\033[0m\n");

			while(temp){
				if(temp->rollno==i){
					printf("\033[37mEnter modified name :\n");
					scanf("%s",temp->name);

					printf("Enter modified percentage :\n");
					scanf("%f",&temp->per);

					printf("\033[35m---------------------------------\033[0m\n");
					printf("Data modified successfully\n");
					printf("\033[35m---------------------------------\033[0m\n");
					return;
				}
				temp=temp->next;
			}
			printf("\033[35m---------------------------------\033[0m\n");
			printf("Rollno not found\n");
			printf("\033[35m---------------------------------\033[0m\n");
			break;

		case 'N':
			temp=ptr;
			printf("\033[38mEnter name to modify : ");
			scanf("%s",s);
			printf("\033[35m---------------------------------\033[0m\n");

			c=0;
			while(temp){
				if(strcmp(s,temp->name)==0)
					c++;
				temp=temp->next;
			}
			temp=ptr;
			if(c>1){
				i=0;
				while(temp){
					if(strcmp(s,temp->name)==0){
						printf("%d %s %g%c\n",temp->rollno,temp->name,temp->per,37);
						a[i++]=temp->rollno;
					}
					temp=temp->next;
				}
			}
			else{
				while(temp){
					if(strcmp(s,temp->name)==0){
						printf("\033[37mEnter modified name :\n");
						scanf("%s",temp->name);

						printf("Enter modified percentage :\n");
						scanf("%f",&temp->per);

						printf("\033[35m---------------------------------\033[0m\n");
						printf("Data modified successfully\n");
						printf("\033[35m---------------------------------\033[0m\n");
						return;
					}
					temp=temp->next;
				}
			}
			printf("\033[36mSimilar names found\nEnter rollno to modify :\033[35m\n");
			scanf("%d",&num);

			temp=ptr;
			while(temp){
				if(temp->rollno==num){
					j=i;
					while(j>=0){
						if(temp->rollno==a[j--]){
							printf("\033[37mEnter modified name :\n");
							scanf("%s",temp->name);

							printf("Enter modified percentage :\n");
							scanf("%f",&temp->per);

							printf("\033[35m---------------------------------\033[0m\n");
							printf("Data modified successfully\n");
							printf("\033[35m---------------------------------\033[0m\n");
							return;

						}
					}
				}
				temp=temp->next;
			}
			printf("\033[35m---------------------------------\033[0m\n");
			printf("Rollno not matching with the names shown.\n");
			printf("\033[35m---------------------------------\033[0m\n");
			break;

		case 'n':
			temp=ptr;
			printf("\033[38mEnter name to modify : ");
			scanf("%s",s);
			printf("\033[35m---------------------------------\033[0m\n");

			c=0;
			while(temp){
				if(strcmp(s,temp->name)==0)
					c++;
				temp=temp->next;
			}
			temp=ptr;
			if(c>1){
				i=0;
				while(temp){
					if(strcmp(s,temp->name)==0){
						printf("%d %s %g%c\n",temp->rollno,temp->name,temp->per,37);
						a[i++]=temp->rollno;
					}
					temp=temp->next;
				}
			}
			else{
				while(temp){
					if(strcmp(s,temp->name)==0){
						printf("\033[37mEnter name to modify :\n");
						scanf("%s",temp->name);

						printf("Enter percentage t0 modify :\n");
						scanf("%f",&temp->per);

						printf("\033[35m---------------------------------\033[0m\n");
						printf("Data modified successfully\n");
						printf("\033[35m---------------------------------\033[0m\n");
						return;
					}
					temp=temp->next;
				}
			}
			printf("\033[36mSimilar names found\nEnter rollno to search :\033[35m\n");
			scanf("%d",&num);

			temp=ptr;
			while(temp){
				if((temp->rollno==num)){
					j=i;
					while(j>=0){
						if(temp->rollno==a[j--]){
							printf("\033[37mEnter name modify :\n");
							scanf("%s",temp->name);

							printf("Enter percentage to modify :\n");
							scanf("%f",&temp->per);

							printf("\033[35m---------------------------------\033[0m\n");
							printf("Data modified successfully\n");
							printf("\033[35m---------------------------------\033[0m\n");
							return;

						}
					}
				}
				temp=temp->next;
			}
			printf("\033[35m---------------------------------\033[0m\n");
			printf("Rollno not matching with the names shown.\n");
			printf("\033[35m---------------------------------\033[0m\n");
			break;

		case 'P':
			temp=ptr;
			printf("\033[38mEnter percentage to search : ");
			scanf("%f",&f);
			printf("\033[35m---------------------------------\033[0m\n");

			c=0;
			while(temp){
				if(temp->per==f)
					c++;
				temp=temp->next;
			}
			temp=ptr;
			if(c>1){
				i=0;
				while(temp){
					if(temp->per==f){
						printf("%d %s %g%c\n",temp->rollno,temp->name,temp->per,37);
						a[i++]=temp->rollno;
					}
					temp=temp->next;
				}
			}
			else{
				while(temp){
					if(temp->per==f){
						printf("\033[37mEnter name to modify :\n");
						scanf("%s",temp->name);

						printf("Enter percentage to modify :\n");
						scanf("%f",&temp->per);

						printf("\033[35m---------------------------------\033[0m\n");
						printf("Data modified successfully\n");
						printf("\033[35m---------------------------------\033[0m\n");
						return;
					}
					temp=temp->next;
				}
			}
			printf("\033[36mSimilar percentage found\nEnter rollno to search :\033[35m\n");
			scanf("%d",&num);
			temp=ptr;
			while(temp){
				if((temp->rollno==num)){
					j=i;
					while(j>=0){
						if(temp->rollno==a[j--]){
							printf("\033[37mEnter modified name :\n");
							scanf("%s",temp->name);

							printf("Enter modified percentage :\n");
							scanf("%f",&temp->per);

							printf("\033[35m---------------------------------\033[0m\n");
							printf("Data modified successfully\n");
							printf("\033[35m---------------------------------\033[0m\n");
							return;

						}
					}
				}
				temp=temp->next;
			}
			printf("\033[35m---------------------------------\033[0m\n");
			printf("Rollno not matching with the percentage shown.\n");
			printf("\033[35m---------------------------------\033[0m\n");
			break;

		case 'p':
			temp=ptr;
			printf("\033[38mEnter percentage to search : ");
			scanf("%f",&f);
			printf("\033[35m---------------------------------\033[0m\n");

			c=0;
			while(temp){
				if(temp->per==f)
					c++;
				temp=temp->next;
			}
			temp=ptr;
			if(c>1){
				i=0;
				while(temp){
					if(temp->per==f){
						printf("%d %s %g%c\n",temp->rollno,temp->name,temp->per,37);
						a[i++]=temp->rollno;
					}
					temp=temp->next;
				}
			}
			else{
				while(temp){
					if(temp->per==f){
						printf("\033[37mEnter name to modify :\n");
						scanf("%s",temp->name);

						printf("Enter percentage to modify :\n");
						scanf("%f",&temp->per);

						printf("\033[35m---------------------------------\033[0m\n");
						printf("Data modified successfully\n");
						printf("\033[35m---------------------------------\033[0m\n");
						return;
					}
					temp=temp->next;
				}
			}
			printf("\033[36mSimilar percentage found\nEnter rollno to search :\033[35m\n");
			scanf("%d",&num);
			temp=ptr;
			while(temp){
				if((temp->rollno==num)){
					j=i;
					while(j>=0){
						if(temp->rollno==a[j--]){
							printf("\033[37mEnter modified name :\n");
							scanf("%s",temp->name);

							printf("Enter modified percentage :\n");
							scanf("%f",&temp->per);

							printf("\033[35m---------------------------------\033[0m\n");
							printf("Data modified successfully\n");
							printf("\033[35m---------------------------------\033[0m\n");
							return;

						}
					}
				}
				temp=temp->next;
			}
			printf("\033[35m---------------------------------\033[0m\n");
			printf("Rollno not matching with the percentage shown.\n");
			printf("\033[35m---------------------------------\033[0m\n");
			break;
	}
}
