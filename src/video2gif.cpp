#include <string>
#include <iostream>

#include "options.h"
#include "Video.h"

int main(int argc, char** argv) {

  auto options = parse_cmd_line_opt(argc, argv);
  std::cout << options;
/*  if (argc >= 3){
    Video myVideo(argv[1], argv[2]);
    myVideo.create_gif();
  } else std::cout << "Error argument!\n";
  */
  return 0;
}
