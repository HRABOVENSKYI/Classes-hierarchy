#include <iostream>

using namespace std;

class DigitalElements {
public:
    virtual void out() = 0;
};

class BinaryCounters : public DigitalElements {
public:
    void out() override { cout << "It is BinaryCounters" << endl; }
};

class ReversibleCounters : public DigitalElements {
public:
    void out() override { cout << "It is ReversibleCounters" << endl; }
};

class Multiplexers : public DigitalElements {
public:
    void out() override { cout << "It is Multiplexers" << endl; }
};

class DTriggers : public DigitalElements {
public:
    void out() override { cout << "It is DTriggers" << endl; }
};

class RSTriggers : public DigitalElements {
public:
    void out() override { cout << "It is RSTriggers" << endl; }
};

class ShiftRegisters : public DigitalElements {
public:
    void out() override { cout << "It is ShiftRegisters" << endl; }
};

void info(DigitalElements *obj) {
    obj->out();
}

int main() {
    info(new BinaryCounters);
    info(new ReversibleCounters);
    info(new Multiplexers);
    info(new DTriggers);
    info(new RSTriggers);
    info(new ShiftRegisters);
    return 0;
}
