/*
 * SimpleServer.cc
 *
 *  Created on: Dec 2, 2024
 *      Author: Abano
 */




#include <omnetpp.h>
using namespace omnetpp;

class SimpleServer : public cSimpleModule {
protected:
    virtual void handleMessage(cMessage *msg) override {
        scheduleAt(simTime() + 0.5, msg);
        send(msg, "out");
    }
};

Define_Module(SimpleServer);
