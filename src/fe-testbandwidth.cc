#include "globals.h"
#include "flags.h"
#include "usb/usb.h"

static FlagGroup flags = {
	&usbFlags,
};

int mainTestBandwidth(int argc, const char* argv[])
{
    flags.parseFlags(argc, argv);
    usbTestBulkWrite();
    usbTestBulkRead();
    return 0;
}
