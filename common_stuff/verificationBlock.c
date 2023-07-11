#include "verificationBlock.h"
#ifdef CFG_BOOTLOADER
#define ATTR
#else
#define ATTR __attribute__((section(".stringIdSec"), used))
#endif


struct VerificationBlock kVerificationBlock ATTR = {
#ifdef CFG_FLASHER
	.stringId = "Gliss-flasher-v1",
#else
	.stringId = "Gliss-v1",
#endif // CFG_FLASHER
	.gitHashes = "",
	.reservedBytes = "",
	.tag = { 0xbe, 0x7a, 0x67, 0x15}, //BELAGLIS
};
_Static_assert(sizeof(struct VerificationBlock) == 2048 - 512); // one full flash sector minus the 512 byte offset