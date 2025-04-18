#include <stdint.h>

void boot_main() {
    // Simple bootloader message
    const char* msg = "Bootloader is running...\n";
    for (const char* p = msg; *p != '\0'; p++) {
        // Normally you'd write to a hardware port here
    }

    // Transition to kernel later
}
