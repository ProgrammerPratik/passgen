# passgen

Simple and powerful CLI-based password generator made with modern C++

https://github.com/user-attachments/assets/a1ebf283-2d57-4bb9-b348-8b03e7a6ac5f

## 🚀 Features

- Multiple password generation modes
- Cryptographically secure random number generation
- Command-line interface
- Easy to use and customize

## 🔒 Version
Version: 1.1

## 📦 Installation

```
# Clone the repository
git clone https://github.com/ProgrammerPratik/passgen.git

# Compile the program
g++ -o passgen passgen.cpp
```

## 🔐 Usage
Basic Syntax
```
passgen -l <length> -m <mode>
```

Modes

`0`: Only letters<br>
`1`: Random mix (letters, special characters, numbers)<br>
`2`: Letters and numbers<br>

Command-line Options

`-l` or `-length`: Specify password length<br>
`-m` or `-mode`: Choose password generation mode<br>
`-h` or `-help`: Display help information<br>
`-v` or `-version`: Show version details<br>

## 🎲 Examples
Mode 0 (Only Letters)
```
passgen -l 10 -m 0
# Example output: PhQGHuMEAy
```
Mode 1 (Random Mix)
```
passgen -l 8 -m 1
# Example output: 8%5E{6?_
```
Mode 2 (Alphanumeric)
```
passgen -l 10 -m 2
# Example output: 8G5Ey68237
```

## 🤝 Contributing
Contributions are welcome! Please feel free to submit a Pull Request.
