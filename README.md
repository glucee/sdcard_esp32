# SDcard_ESP32

SDcard library for ESP32 on platformio paltform

You could find several useful functions in sdcard.h

This library is inspired by ESP32/SDcard example

## Getting Started

1. You could use ESP32 board containing SD card reader.

2. You need to install [platformio](https://platformio.org/) before using the code. However, it is easier to change the code to compatiable with Arduino IDE.

3. You can use:
```
make (all): to compile the firmware
make upload: to upload to your device
make clean: clean the project
make update: to update all the libraries
```

## API Functions
```
extern void setup_sdcard();
extern void listDir(fs::FS &fs, const char * dirname, uint8_t levels);
extern void createDir(fs::FS &fs, const char * path);
extern void removeDir(fs::FS &fs, const char * path);
extern void readFile(fs::FS &fs, const char * path);
extern void writeFile(fs::FS &fs, const char * path, const char * message);
extern void appendFile(fs::FS &fs, const char * path, const char * message);
extern void renameFile(fs::FS &fs, const char * path1, const char * path2);
extern void deleteFile(fs::FS &fs, const char * path);
```

## Licence

MIT
