#include <iostream>
#include "Network.hpp"
#include <vector>

int main(int argc, char **argv)
{
    std::cout<<"Welcome to Neural network hello world"<<std::endl<<std::endl;

    // constructing a basic topology
    // i want a neural network with 3 layers
    // first layer (input layer) 2 neuron
    // second layer (hidden layer) 4 neuron
    // third layer (output layer) 1 neuron
    std::vector<unsigned> topology;
    topology.push_back(2); // first layer containing 2 neuron
    topology.push_back(4); // second layer containing 4 neuron
    topology.push_back(1); // third layer containing 1 neuron

    Network net(topology);

    return 0;
}