# passgen

Simple and powerful CLI-based password generator made with modern C++

https://github.com/user-attachments/assets/742fbaac-0800-4db9-b7d2-fa0ef66cd8df

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
Adding to PATH Environment Variable (if you want instant access anywhere)
windows:
1. Compile and copy path to the file.
2. Search 'Environment Variables' and open it.
3. Under 'System variables', find and select 'Path', then click 'Edit'.
4. Click 'New' and add the full path to the directory containing passgen.exe (that you copied before), and save.

Linux:
1. Compile and copy path to the file.
2. Open terminal and paste the following (replace the path with actual path):
```
export PATH=$PATH:/[path]
```
3. Save the file and reload the configuration:
```
source ~/.bashrc    # or source ~/.zshrc
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
