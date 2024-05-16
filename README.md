# Phonebook

Phonebook is a C program for full user-definition-type & print it.

## Installation

Before running this program on the text editor you must install the C compiler.

1 - install [MinGW](https://github.com/msys2/msys2-installer/releases/download/2024-01-13/msys2-x86_64-20240113.exe).

2 - When select Finish. This will open an MSYS2 terminal window for you.

3 - In this terminal, install the MinGW-w64 toolchain by running the following command:

```bash
pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
```
4 - Accept the default number of packages in the toolchain group by pressing `Enter`.

```c
$ pacman -S--needed base-devel mingw-w64-ucrt-x86_64-toolchain warning: base-devel-2022.12-2 is up to date -- skipping
::
:: There are 19 members in group mingw-w64-ucrt-x86_64-toolchain:
Repository ucrt64
1) mingw-w64-ucrt-x86_64-binutils
2) mingw-w64-ucrt-x86_64-crt-git
3) mingw-w64-ucrt-x86_64-gcc
4) mingw-w64-ucrt-x86_64-gcc-ada
5) mingw-w64-ucrt-x86_64-gcc-fortran
6) mingw-w64-ucrt-x86_64-gcc-libgfortran
7) mingw-w64-ucrt-x86_64-gcc-libs
8) mingw-w64-ucrt-x86_64-gcc-objc
9) mingw-w64-ucrt-x86_64-gdb
10) mingw-w64-ucrt-x86_64-gdb-multiarch
11) mingw-w64-ucrt-x86_64-headers-git
12) mingw-w64-ucrt-x86_64-libgccjit
13) mingw-w64-ucrt-x86_64-libmangle-git
14) mingw-w64-ucrt-x86_64-libwinpthread-git
15) mingw-w64-ucrt-x86_64-make 17) mingw-w64-ucrt-x86_64-tools-git
16) mingw-w64-ucrt-x86_64-pkgconf
18) mingw-w64-ucrt-x86_64-winpthreads-git
19) mingw-w64-ucrt-x86_64-winstorecompat-git
Enter a selection (default=all):
```

5 - Enter `Y` when prompted whether to proceed with the installation.

6 - Add the path to your MinGW-w64 bin folder to the Windows PATH environment variable by using the following steps:

* In the Windows search bar, type `Settings` to open your Windows Settings.
Search for `Edit environment variables` for your account.

* In your `User variables`, select the `Path` variable and then select `Edit`.

* Select `New` and add the MinGW-w64 destination folder you recorded during the installation process to the list. If you used the default settings above, then this will be the path: `C:\msys64\ucrt64\bin`.

* Select `OK` to save the updated PATH. You will need to reopen any console windows for the new PATH location to be available.

## Check your MinGW installation.

To check that your MinGW-w64 tools are correctly installed and available, open a new Command Prompt and type:
```bash
gcc --version
g++ --version
gdb --version
```

## References

[gccvscode](https://code.visualstudio.com/docs/cpp/config-mingw)
