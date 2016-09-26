CXX=g++
CXXFLAGS=
.PHONY: clean

stof.exe: libstr.a stof.demo.h stof.main.cpp
	$(CXX) -o $@ stof.main.cpp -L. -lstr

strlib.o: strlib.h strlib.hpp strlib.cpp strtok.hpp strcom.hpp stof.hpp stoi.hpp
	$(CXX) -c -o $@ strlib.cpp

libstr.a: strlib.o
	ar cr $@ strlib.o

clean:
	rm -f *.o *.exe
