#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

/**
 * Gets file from args.
 * Prints the first line of a file, or until the end of the file.
 * Whichever comes first.
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
        if (buf[0] != '\n') {
            if (temp > max) {
                max = temp;
            }
            temp = 0;
        }
    }
    // Write longest line length
    write(STDOUT_FILENO, &max, BUFFSIZE);
    return 0;
}
