#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#include <iostream>

using namespace std;

/**
 * Gets file from args.
 * Prints the length of longest line
 **/
int main(int argc, char* argv[]) {
    // Length of longest line
    int max = 0;
    // temp var used to store length of current line
    int temp = 0;
    int BUFFSIZE = 1;
    // Buffer
    char buf[1];
    // File Descriptor
    int fd;

    // Open file
    fd = open(argv[1], O_RDONLY);

    // n = bytes read, (1 byte). Put byte in buf
    while (read(fd, buf, BUFFSIZE) > 0) {
        temp = temp + 1;
        // If we reach a /n, compare temp to max and update if needed
        if (buf[0] == '\n') {
            if (temp > max) {
                max = temp - 1; // temp-1 to account for /n char
            }
            temp = 0;
        }
    }

    // If we reach end of file, compare lengths for the last time
    if (temp > max) {
        max = temp;
    }
    // Print longest line length
    cout << max << endl;
    return 0;
}
