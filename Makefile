all: hello
      
hello: helloworld.o
  g++ helloworld.o -o helloworld


helloworld.o: helloworld.cpp
      g++ -c helloworld.cpp
      
clean:
      rm -rf *o helloworld
