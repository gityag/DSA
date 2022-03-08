# DSA_Project

Data Structure and Algorithm Project, 4th Semester

## Visualization of Huffman Tree & Dijkstra's Algorithm
/home/prayag/projects/dsaproject/DSA_Project/ezgif-5-42a3452ea7.gif

### Requirements

- SDL2
- SDL2_ttf (for rendering fonts)
- GNU Make (for building executable)

### Project Initialization

Run the `init.sh` to initialize the directory structure.

```
chmod +x init.sh
./init.sh
```

If the default shell does not support bash scripting, create two
new directories manually : `build` and `bin`. That is what `init.sh`
essentially does. For more details, see **Directory Structure** below.

### Make Instructions

`make` - to compile the program\
`make run` - to run the build/executable\
`make clean` - delete the created object files, for cleanup

### Directory Structure

`init.sh` creates two new directories

- `build` (to store object files)
- `bin` (to store the final binary)

These directories are essential as all object files and the final
created executable use them as path. This is done to keep the root
project directory clean.

The names can be manually edited inside the `MakeFile` and
`init.sh` (just change the variable values inside):

```
build_dir=build
binary_dir=bin
```

```
/final project structure
.
├── bin/                    # Final working binary
├── build/                  # Compiled object files
├── fonts/                  # Fonts .ttf
├── includes/               # Headers and their source files
├── lib/                    # Custom files that fall under 'library'
├── main.cpp                # Entry point into the program
├── init.sh                 # The initialization script
├── MakeFile                # MakeFile for compilation/build instructions
└── README.md               # README file
```

### Notes:

- Not Windows compatible for now, mostly due to path changes required for SDL.

### Primary Contributors:

PRABIGYA PATHAK 076BEI022

PRAYAG MAN MANE 076BEI027

RAHUL SHRESTHA 076BEI028

TRIBHUWAN BHATTA 076BEI046

### Sample Inputs

aaaaaaabbbbbbbbbbbcccccccccddddeefgggggggggggggg

