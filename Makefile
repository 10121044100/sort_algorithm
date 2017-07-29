.SUFFIXES : .c

SRC1 = bubble_original.c
SRC2 = bubble_enhanced.c

TARGET1 = bubble_original
TARGET2 = bubble_enhanced

CC = gcc

new:
	$(MAKE) clean
	echo "Compile bubble_original"
	$(CC) -o $(TARGET1) $(SRC1)
	echo "Compile bubble_enhanced"
	$(CC) -o $(TARGET2) $(SRC2)
clean:
	rm $(TARGET1) $(TARGET2)
