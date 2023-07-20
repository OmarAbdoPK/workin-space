CC = gcc
C  = g++

Test_Date : TestDate.o Date.o
	$(C) -o Test_Date Test_Date.o Date.o

TestDate.o : TestDate.cpp Date.h
	$(CC) -c TestDate.cpp

Date.o : Date.cpp Date.h
	$(CC) -c Date.cpp

#Excute even if not updated = Excute if no change
.PHONY: cleanall cleanobj

cleanall: cleanobj
	del *.exe
cleanobj: 
	del *.o