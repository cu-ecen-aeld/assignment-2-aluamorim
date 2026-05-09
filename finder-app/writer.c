#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>

int main(int argc, char *argv[])
{
    FILE *fp;

    if (argc < 3) {
        syslog(LOG_ERR, "Usage: %s <filename> <string>\n", argv[0]);
        return 1;
    }

    fp = fopen(argv[1], "w");
    if (fp == NULL) {
        syslog(LOG_ERR, "Failed to open file: %s\n", argv[1]);
        return 1;
    }

    syslog(LOG_DEBUG, "Writing string '%s' to file: %s\n", argv[2], argv[1]);
    fprintf(fp, "%s\n", argv[2]);
    fclose(fp);

    return 0;
}
