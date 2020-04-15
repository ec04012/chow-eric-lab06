#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <iostream>

using namespace std;

/**
 * Gets file from args.
 * Prints the first line of a file, or until the end of the file.
 * Whichever comes first.
 **/
int main(int argc, char* argv[]) {
    int BUFFSIZE = 1;
    // Buffer
    char buf[1];
    // File Descriptor
    int fd;

    // Open file
    fd = open(argv[1], O_RDONLY);

    // n = bytes read, (1 byte). Put byte in buf
    while ((buf[0] != '\n') && (read(fd, buf, BUFFSIZE) > 0)) {
        // Write buf to stand output
        write(STDOUT_FILENO, buf, BUFFSIZE);
    }
    return 0;
}
