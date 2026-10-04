CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic -Iinclude -pthread
BIN = bin/fitness_tracker

SRC = src/main.cpp src/sensor.cpp src/device_interface.cpp src/health_analyzer.cpp src/logger.cpp src/pipeline.cpp

all: $(BIN)

$(BIN): $(SRC)
	mkdir -p bin
	$(CXX) $(CXXFLAGS) $(SRC) -o $(BIN)

test:
	mkdir -p bin
	$(CXX) $(CXXFLAGS) tests/test_health.cpp src/health_analyzer.cpp src/logger.cpp -o bin/test_health
	./bin/test_health

run: all
	./$(BIN)

clean:
	rm -rf bin *.csv *.log

.PHONY: all test run clean
