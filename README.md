# Zephyr Barebones Application

Barebones for a freestanding Zephyr application, without any bloat.

This is the result of following the [official guide](https://docs.zephyrproject.org/latest/develop/application/index.html#creating-an-application-by-hand) on creating an application by hand.

## Building

To build the application for some board `<BOARD>` with west, clone the repo anywhere, enter the repository root, and do the following:

```shell
$ west build -b <BOARD> .
```

Make sure you have followed the [Getting Started Guide](https://docs.zephyrproject.org/latest/develop/getting_started/index.html) for Zephyr first and you have the python venv and the Zephyr environment variables set accordingly. 
