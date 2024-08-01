# Digispark ATTINY85V2 Project

This repository contains code and examples for using the Digispark ATTINY85V2 board with the Arduino IDE. Follow the steps below to install the Arduino IDE and set it up for the Digispark ATTINY85V2 board.

## Table of Contents

- [Installation](#installation)
- [Setting Up Arduino IDE](#setting-up-arduino-ide)

## Installation

### Step 1: Download and Install Arduino IDE

1. Visit the [Arduino IDE download page](https://www.arduino.cc/en/software).
2. Download the installer for your operating system (Windows, macOS, Linux).
3. Run the installer and follow the on-screen instructions to complete the installation.

### Step 2: Install Digispark Drivers

For Windows:
1. Download the Digispark drivers from [this link](https://github.com/digistump/DigistumpArduino/releases/download/1.6.7/Digistump.Drivers.zip).
2. Extract the downloaded ZIP file.
3. Run the `Install Drivers.exe` file and follow the instructions to install the drivers.

For macOS and Linux:
1. Drivers are typically included in the Arduino IDE setup process and should work without additional installation.

## Setting Up Arduino IDE

### Step 1: Add Digispark Board Manager URL

1. Open the Arduino IDE.
2. Go to `File` -> `Preferences`.
3. In the `Additional Board Manager URLs` field, add the following URL: https://raw.githubusercontent.com/digistump/arduino-boards-index/master/package_digistump_index.json
4. Click `OK` to save the changes.

### Step 2: Install Digispark Board

1. Go to `Tools` -> `Board` -> `Boards Manager`.
2. In the Boards Manager window, search for "Digistump AVR Boards".
3. Click `Install` to add the Digispark boards to your Arduino IDE.

### Step 3: Select Digispark Board

1. Go to `Tools` -> `Board` and select `Digispark (Default - 16.5MHz)`.

### Step 4: Select Programmer

1. Go to `Tools` -> `Programmer` and select `Micronucleus`.




### Some special cases:

1. If you're using Windows 10/11 go and check out [this video](https://youtu.be/uUcmAPKvQ4Q?si=cIA6QycCpTjwKnZ0)
2. If you're using Ubuntu go and check [this video](https://youtu.be/N7CuQZMnLcw?si=0IMT-QQFcZnZwvQY)
3. If you're using MacOS go and check [this video](https://youtu.be/hVQubqgdoZg?si=yPYhG3GT60Bnm8gM)
4. If you're using arch based distros (Arch, Blackarch, Garuda, Athena etc.) open the `Terminal`and type
`sudo pacman -Syu avr-gcc avr-libc avrdude micronucleus arduino`
