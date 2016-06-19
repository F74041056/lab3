lab3_A:lab3_A.o class_A.o
	g++ -o lab3_A lab3_A.o class_A.o
lab3_A.o:lab3_A.cpp class_A.h
	g++ -c lab3_A.cpp
class_A.o:class_A.cpp class_A.h
	g++ -c class_A.cpp
