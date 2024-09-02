CXX=g++
CXXFLAGS="-std=c++11" "-I." "-Wno-array-bounds"

.PHONY: run clean reset

off-by-one: off-by-one.o
	$(CXX) $(CXXFLAGS) -o off-by-one off-by-one.o

run: off-by-one
	@./off-by-one

clean:
	rm -f *.o off-by-one *.out

reset: clean
	cp -f template.cpp off-by-one.cpp