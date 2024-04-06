compile=cc
flag=-c
target=main.o stud_add.o stud_del.o stud_show.o stud_save.o stud_mod.o stud_sort.o
student:$(target)
	${compile} $(target) -o student
main.o:main.c
	${compile} ${flag} main.c
stud_add.o:stud_add.c
	${compile} ${flag} stud_add.c
stud_del.o:stud_del.c
	${compile} ${flag} stud_del.c
stud_show.o:stud_show.c
	${compile} ${flag} stud_show.c
stud_save.o:stud_save.c
	${compile} ${flag} stud_save.c
stud_mod.o:stud_mod.c
	${compile} ${flag} stud_mod.c
stud_sort.o:stud_sort.c
	${compile} ${flag} stud_sort.c
clear:
	@echo "cleaning up..."
	@rm -v *.o
