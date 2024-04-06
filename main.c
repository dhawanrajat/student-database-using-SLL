#include"header.h"
void main(){
	stud *headptr=0;
	int c;
	char op;

	while(1){
		printf("\n\033[35m-------\033[36;41m STUDENT RECORD MENU \033[35;49m-------\033[0m\n-----------------------------------\n");
		printf(" \033[33ma/A\t\033[0m: \033[32mAdd new record\n \033[33md/D\t\033[0m: \033[32mDelete a record\n \033[33ms/S\t\033[0m: \033[32mShow the list\n \033[33mm/M\t\033[0m: \033[32mModify a record\n \033[33mv/V\t\033[0m: \033[32mSave\n \033[33mx/X\t\033[0m: \033[32mRead\n \033[33me/E\t\033[0m: \033[32mExit\n \033[33mt/T\t\033[0m: \033[32mSort the list\n \033[33ml/L\t\033[0m: \033[32mDelete all the records\n \033[33mr/R\t\033[0m: \033[32mReverse the list\n\n");
		printf("\033[36mEnter your choice : \033[35m");
		scanf(" %c",&op);

		switch(op){
			case 'a': stud_add(&headptr);break;
			case 'A': stud_add(&headptr);break;
			case 'd': stud_del(&headptr);break;
			case 'D': stud_del(&headptr);break;
			case 's': stud_show(&headptr);break;
			case 'S': stud_show(&headptr);break;
			case 'm': stud_mod(headptr);break;
			case 'M': stud_mod(headptr);break;
			case 'v': stud_save(headptr);break; 
			case 'V': stud_save(headptr);break;
			case 'e': exit(0);
			case 'E': exit(0);
			case 't': stud_sort(headptr);break;
			case 'T': stud_sort(headptr);break;
			case 'l': stud_del_all(&headptr);break;
			case 'L': stud_del_all(&headptr);break;
			case 'r': stud_reverse(&headptr);break;
			case 'R': stud_reverse(&headptr);break;
			case 'x': stud_read(&headptr);break;
			case 'X': stud_read(&headptr);break;
			default:printf("\033[31m\nWrong option...\033[0m\n");
		}
	}
}
