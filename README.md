# MarkoOS

## Setup

Build an image for our build-environment:
 - `docker build buildenv -t markoos-buildenv`

## Build

Enter build environment:
 - Linux or MacOS: `docker run --rm -it -v "$pwd":/root/env markoos-buildenv`
 - Windows (CMD): `docker run --rm -it -v "%cd%":/root/env markoos-buildenv`
 - Windows (PowerShell): `docker run --rm -it -v "${pwd}:/root/env" markoos-buildenv`
 - NOTE: If you are having trouble with an unshared drive, ensure your docker daemon has access to the drive you're development environment is in. For Docker Desktop, this is in "Settings > Shared Drives" or "Settings > Resources > File Sharing".

Build for x86 (other architectures may come in the future):
 - `make build-x86_64`

To leave the build environment, enter `exit`.

## Emulate

You can emulate your operating system using [Qemu](https://www.qemu.org/): (Don't forget to add qemu to your path!)

 - `qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso`
 - NOTE: When building your operating system, if changes to your code fail to compile, ensure your QEMU emulator has been closed, as this will block writing to `kernel.iso`.

Alternatively, you should be able to load the operating system on a USB drive and boot into it when you turn on your computer. (I haven't actually tested this yet.)

## Cleanup

Remove the build-evironment image:
 - `docker rmi markoos-buildenv -f`
