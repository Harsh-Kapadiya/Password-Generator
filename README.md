# 🔐 C++ Password Generator

A simple and efficient command-line **password generator** built using C++. This tool generates a secure 16-character password using a mix of lowercase, uppercase letters, numbers, and special characters.

## 🚀 Features

- ✅ Generates a 16-character strong password
- ✅ Includes:
  - Lowercase letters
  - Uppercase letters
  - Digits (0–9)
  - Special symbols (`!@#$%&*()/*`)
- ✅ Instant output on terminal
- ✅ Lightweight and fast (runs on any C++ compiler)

## 🧠 How It Works

The program:
1. Seeds the random number generator with the current time.
2. Defines a string containing all possible characters.
3. Randomly picks 16 characters from that string to form a password.
4. Outputs the result to the terminal.

## 🛠️ Requirements

- A C++ compiler (e.g. `g++`)
- C++ standard: C++11 or later (for modern compilers)

## 📦 Compilation & Usage

### 🔧 Compile

```bash
g++ password_generator.cpp -o password_generator
