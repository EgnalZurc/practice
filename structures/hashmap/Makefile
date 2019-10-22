src = $(wildcard src/*.cpp)
obj = $(build.o)
CC = g++

LDFLAGS = -Wall

myprog: $(obj)
	$(CC) -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(obj) myprog
