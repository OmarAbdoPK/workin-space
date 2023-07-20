CC = gcc
C  = g++
OBJS = TestDate.o Date.o
SRC = $(OBJS, .o = .c)

TestDate: $(OBJS)
	$(C) -o $@  $(OBJS)


#pattern rule that compiles every .c into .o
%.o : %.c
	$(CC) -c $(SRC)


#Excute even if not updated = Excute if no change
.PHONY: cleanall cleanobj

cleanall: cleanobj
	del *.exe

cleanobj:
	del*.o