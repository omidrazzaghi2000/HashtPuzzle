CXX = g++
CXXFLAGS = -std=c++2a -Wall -I h -I /usr/local/include/gtest/ -c -Ofast
LXXFLAGS = -std=c++2a -Ih -pthread
OBJECTS = ./obj/board.o ./obj/traverse.o main
GTEST = /usr/local/lib/libgtest.a
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) -o $(TARGET) $(OBJECTS) $(GTEST)

./obj/board.o: ./cpp/board.cpp
	$(CXX) $(CXXFLAGS) ./cpp/board.cpp -o ./obj/board.o
./obj/traverse.o: ./cpp/traverse.cpp
	$(CXX) $(CXXFLAGS) ./cpp/traverse.cpp -o ./obj/traverse.o
main: ./cpp/main.cpp  ./cpp/traverse.cpp 
	$(CXX) -I h/ -I /usr/local/include/gtest/ -I /usr/local/include -I /usr/include/freetype2 -I /usr/include/libpng16 -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_THREAD_SAFE -D_REENTRANT -o 'main' './cpp/board.cpp' './cpp/main.cpp' /usr/local/lib/libfltk.a -lXrender -lXext -lfontconfig -lpthread -ldl -lm -lX11  
clean:
	rm -fv $(TARGET) $(OBJECTS)
