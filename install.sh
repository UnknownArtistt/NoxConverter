#!/bin/bash

set -e

echo "Verifying and installing the dependencies..."

# Verifies if g++ is installed
if ! command -v g++ &> /dev/null; then
    echo "g++ is not installed. Installing it..."
    sudo apt-get update
    sudo apt-get install g++ -y
else
    echo "g++ already installed"
fi

# Verifies if figlet is installed
if ! command -v figlet &> /dev/null; then
    echo "figlet is not installed. Installing it..."
    sudo apt-get update
    sudo apt-get install figlet -y
else
    echo "figlet already installed"
fi

echo
echo "All dependencies installed"
echo

echo "Compiling the program..."

g++ -o NoxConverter main.c unit_conversors.c
echo "Compilation finished"
echo

echo "Executing ShadowCrypt..."
./NoxConverter