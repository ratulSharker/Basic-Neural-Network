CPP:=g++
CFLAGS+="-std=c99"

nn:	src/main.o src/Network.o src/Neuron.o
	$(CPP) src/main.o src/Network.o  -o neural_net.out

clean:	
	rm src/*.o *.out 

