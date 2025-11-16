# Qt Calculator

A simple calculator built with **C++** and **Qt Widgets**. Handles basic math, decimal input, and a few extra buttons like +/- and %.
Weekend project modifying my simple calculator this time with a working GUI. Aesthetics design modeled after Apple built in calculator

![Demo](CalculatorDemo.gif)


## Features
- Numbers 0–9
- Decimal point
- +, –, ×, ÷
- +/- toggle
- Percentage
- Clear button

## How It Works
The app uses Qt’s signal/slot setup. Number buttons append to the display, operator buttons store the first value, and the equals button runs the calculation.

## Build
Open the project in Qt Creator and run it, or build with:

```bash
mkdir build && cd build
cmake ..
make
