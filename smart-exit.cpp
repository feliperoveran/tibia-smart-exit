#include <fcntl.h>
#include <unistd.h>
#include <linux/input.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <iostream>

int main(int argc, char **argv) {
  const int trigger_key = 67;
  const char* input = "/dev/input/event3";

  int file_descriptor = open(input, O_RDONLY);

  input_event event;

  // testing stuff using argv
  // if(argc < 2) {
  //   printf("usage: %s <device>\n", argv[0]);
  //   return 1;
  // }

  // pause to wait for user input
  // std::cin.get();
  // printf("%s", argv[1]);

  std::cout << "Tibia smart exit! Press F9 to save your ass :)" << std::endl;
  // fflush(stdout);

  while (1)
  {
    read(file_descriptor, &event, sizeof(event));

    if(event.type == 1 && event.code == trigger_key && event.value == 1) {
      system("./stop-tibia.sh");
    }
  }
}
