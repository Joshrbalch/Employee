CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

all: a.out

a.out: main.o Employee.o CommissionEmployee.o HourlyEmployee.o reading.o SalariedEmployee.o
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o a.out
