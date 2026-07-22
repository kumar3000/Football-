CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17 -O2

TARGET = ./bin/main
SRCS = $(wildcard ./src/*.cpp)

all: $(TARGET)
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean
