#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <sys/utsname.h>
#include "coloruwu.h"

int main() {
    struct utsname uwu;
    struct winsize w;
    uname(&uwu);

    printf("OS: %s%s\n%s", YELLOW, uwu.sysname, RESET);
    printf("Kernel: %s %s\n%s", CYAN, uwu.release, RESET);
    printf("Terminal Size: %s%d x %d%s\n", CYAN, w.ws_col, w.ws_row, RESET);
    printf("Hostname: %s %s \n%s", CYAN, uwu.nodename, RESET);
}