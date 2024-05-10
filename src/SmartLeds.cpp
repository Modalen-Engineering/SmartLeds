#include "SmartLeds.h"

IsrCore SmartLed::_interruptCore = CoreCurrent;

SmartLed*& IRAM_ATTR SmartLed::ledForChannel(int channel) {
    static SmartLed* table[detail2::CHANNEL_COUNT] = {};
    assert(channel < detail2::CHANNEL_COUNT);
    return table[channel];
}
