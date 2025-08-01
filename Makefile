CXX = g++
CXXFLAGS = -std=c++17 -Iinclude

SRC = src/main.cpp src/Student.cpp src/StudentManager.cpp
TARGET = student_app

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $(SRC)

clean:
	rm -f $(TARGET)
