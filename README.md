# Hex Viewer

## Introduction

It is a simple hex viewer. You can use it by typing the filename after execution.

And then choose how many characters you want to print per line.



## Installation

Just clone and make

```Shell
$ git clone https://github.com/merrym4n/HexViewer
$ cd HexViewer
$ make
```



## Usage

If success to open

```Shell
$ ./HexViewer
Put the filename: HexViewer
Success to open "HexViewer"!!!
How many characters would you like to see in a line??? 16
00000 cf fa ed fe 07 00 00 01 03 00 00 80 02 00 00 00  |................|
00010 0f 00 00 00 00 05 00 00 85 00 20 00 00 00 00 00  |................|
00020 19 00 00 00 48 00 00 00 5f 5f 50 41 47 45 5a 45  |....H...__PAGEZE|
00030 52 4f 00 00 00 00 00 00 00 00 00 00 00 00 00 00  |RO..............|
00040 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00  |................|
00050 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00  |................|
00060 00 00 00 00 00 00 00 00 19 00 00 00 d8 01 00 00  |................|
00070 5f 5f 54 45 58 54 00 00 00 00 00 00 00 00 00 00  |__TEXT..........|
00080 00 00 00 00 01 00 00 00 00 10 00 00 00 00 00 00  |................|
00090 00 00 00 00 00 00 00 00 00 10 00 00 00 00 00 00  |................|
000a0 07 00 00 00 05 00 00 00 05 00 00 00 00 00 00 00  |................|
000b0 5f 5f 74 65 78 74 00 00 00 00 00 00 00 00 00 00  |__text..........|
000c0 5f 5f 54 45 58 54 00 00 00 00 00 00 00 00 00 00  |__TEXT..........|
000d0 10 0b 00 00 01 00 00 00 8f 03 00 00 00 00 00 00  |................|
000e0 10 0b 00 00 04 00 00 00 00 00 00 00 00 00 00 00  |................|
000f0 00 04 00 80 00 00 00 00 00 00 00 00 00 00 00 00  |................|
...
02200 61 69 6e 00 5f 5f 5f 73 74 61 63 6b 5f 63 68 6b  |ain.___stack_chk|
02210 5f 66 61 69 6c 00 5f 5f 5f 73 74 61 63 6b 5f 63  |_fail.___stack_c|
02220 68 6b 5f 67 75 61 72 64 00 5f 66 67 65 74 63 00  |hk_guard._fgetc.|
02230 5f 66 6f 70 65 6e 00 5f 66 73 65 65 6b 00 5f 70  |_fopen._fseek._p|
02240 72 69 6e 74 66 00 5f 73 63 61 6e 66 00 64 79 6c  |rintf._scanf.dyl|
02250 64 5f 73 74 75 62 5f 62 69 6e 64 65 72 00 00 00  |d_stub_binder...|
02260 00 00 00 00                                      |....            |
```

If fail to open

```Shell
$ ./HexViewer
Put the filename: HexViewer
Fail to open "HexViewer"!!!
```