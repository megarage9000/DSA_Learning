# Usage:
# make        # compile all binary
# make clean  # remove ALL binaries and objects

.PHONY = all clean

CC = g++                       # compiler to use

LINKERFLAG = -lm

SRCS := $(wildcard *.cpp)
BINS := $(SRCS:%.cpp=%)

all: ${BINS}

%: %.o
	@echo "Checking.."
	${CC} ${LINKERFLAG} $< -o $@

%.o: %.cpp
	@echo "Creating object.."
	${CC} -cpp $<

clean:
	@echo "Cleaning up..."
	rm -rvf *.o ${BINS}

# From: https://opensource.com/article/18/8/what-how-makefile