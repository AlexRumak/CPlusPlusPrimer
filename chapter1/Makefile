CC=clang++
PRODUCT=1program exercise1_3 exercise1_4 exercise1_6

all: $(PRODUCT)

exercise1_6: exercise1_6.cpp
	$(CC) -std=c++23 -o exercise1_6 exercise1_6.cpp -Wall

exercise1_3: exercise1_3.cpp
	$(CC) -std=c++23 -o exercise1_3 exercise1_3.cpp -Wall

exercise1_4: exercise1_4.cpp
	$(CC) -std=c++23 -o exercise1_4 exercise1_4.cpp -Wall

1program: 1program.cpp
	$(CC) -std=c++23 -o 1program 1program.cpp -Wall

.PHONY: clean
clean:
	rm -f $(PRODUCT)