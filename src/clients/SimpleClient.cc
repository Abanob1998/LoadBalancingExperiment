/*
 * SimpleClient.cc
 *
 *  Created on: Dec 2, 2024
 *      Author: Abano
 */




#include <omnetpp.h>
using namespace omnetpp;

class SimpleClient : public cSimpleModule {
protected:
    virtual void handleMessage(cMessage *msg) override {
        send(msg, "out");
    }
};

Define_Module(SimpleClient);
