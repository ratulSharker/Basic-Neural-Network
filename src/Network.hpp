#ifndef NETWORK_H
#define NETWORK_H

#include "Layer.hpp"
#include <vector>

class Network{

public:
    Network(const std::vector<unsigned> &topology);
    void feedForward(const std::vector<double> &inputVals);
    void backPropagation(const std::vector<double> &outputVals);
    void getResults(std::vector<double> &results) const;

private:
    std::vector<Layer> m_layers;

};

#endif