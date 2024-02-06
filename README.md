# Minitalk

A simple client-server communication project in C using signals for interprocess communication.

## Overview

Minitalk establishes communication between a client and a server using signals. The client sends a string to the server using the pid, and the server displays the received message.

## Usage

Compile the client and server programs, then run them on separate terminals. Obviously the server first :

```bash
make
./server
```

```bash
make
./client pid "Your message here"
```

## Subject

[minitalk.en.subject.pdf](https://github.com/AK7iwi/Minitalk/files/14182054/minitalk.en.subject.pdf)
