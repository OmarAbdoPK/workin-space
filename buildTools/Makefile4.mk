CC = gcc
C  = g++
OBJS = testDate.o Date.o
SRC = $(OBJS, .o = .c)

testDate: $(OBJS)
	$(C) -o $@  $(OBJS)


%.o : %.c
	$(C) -c  $(OBJS)



.PHONY: cleanall cleanobj

cleanall: cleanobj
	del *.exe

cleanobj:
	del*.o