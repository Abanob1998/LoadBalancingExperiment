/*
 * LoadBalancer.cc
 *
 *  Created on: Dec 2, 2024
 *      Author: Abano
 */




#include <omnetpp.h>
using namespace omnetpp;

class LoadBalancer : public cSimpleModule {
private:
    int currentIndex = 0;

protected:
    virtual void handleMessage(cMessage *msg) override {
        send(msg, "out[currentIndex]");
        currentIndex = (currentIndex + 1) % gateSize("out");
    }
};

Define_Module(LoadBalancer);
