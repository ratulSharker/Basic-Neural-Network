#include "Network.hpp"
#include "Neuron.hpp"
#include <iostream>

Network::Network(const std::vector<unsigned> &topology)
{
    std::cout<<"Constructing Neural network as topology"<<std::endl;

    // loop through the topology and add the layers
    for(long long index = 0 ; 
        index < topology.size();
        ++index)
    {
        // adding a new layer
        Layer newLayer;
        m_layers.push_back(newLayer);

        std::cout<<"##"<<index<<" Layer"<<std::endl;

        // adding neuron to the newly added layer
        for(unsigned n=0; n < topology[index]; n++)
        {
            newLayer.push_back(Neuron());
            std::cout<<"Neuron created"<<std::endl;
        }

        newLayer.push_back(Neuron());   // 1 extra neuron for the bias neuron
    }
}