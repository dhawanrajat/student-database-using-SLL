#include"header.h"

void stud_save(stud *ptr){
	if(ptr==0){ 
		printf("\033[35m---------------------------------\033[0m\n");
		printf("\033[31m No student database found\n");
		printf("\033[35m---------------------------------\033[0m\n");
		return;
	}
	char op;
	printf("\033[33mS/s\t\033[0m: \033[32mSave and exit\n\033[33mE/e\t\033[0m: \033[32mExit without saving\n\033[37mEntered option is : \033[36m");
	scanf(" %c",&op);
	FILE *fp;
	//=fopen("student.dat","r+");
	stud *temp=ptr;

	switch(op){
		case 'S':
			fp=fopen("student.dat","w");
			while(temp){
				fprintf(fp,"%d %s %f\n",temp->rollno,temp->name,temp->per);
				temp=temp->next;
			}
			fclose(fp);
			printf("\033[35m---------------------------------\033[0m\n");
			printf("File saved successfully\n");
			printf("\033[35m---------------------------------\033[0m\n");
			exit(0);
			break;
		case 's':
			fp=fopen("student.dat","w");
			while(temp){
				fprintf(fp,"%d %s %f\n",temp->rollno,temp->name,temp->per);
				temp=temp->next;
			}
			fclose(fp);
			printf("\033[35m---------------------------------\033[0m\n");
			printf("Saved and exited successfully\n");
			printf("\033[35m---------------------------------\033[0m\n");
			exit(0);
			break;

		case 'E':
			printf("\033[35m---------------------------------\033[0m\n");
			printf("Exited without saving successfully\n");
			printf("\033[35m---------------------------------\033[0m\n");
			exit(0);
			break;
		case 'e':
			printf("\033[35m---------------------------------\033[0m\n");
			printf("Exited without saving successfully\n");
			printf("\033[35m---------------------------------\033[0m\n");
			exit(0);
			break;
	}
}
