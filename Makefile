CC=gcc
SRC = T1.c T2.c T3.c T4.c T5.c
OBJ = T1.o T2.o T3.o T4.o T5.o
TARGET = T1 T2 T3 T4 T5

all: $(TARGET)

%: %.c
	$(CC) -o $@ $<


clean:
	rm -f $(OBJ) $(TARGET)
