# Undo-Redo Feature (C++)

This project demonstrates a basic implementation of undo and redo functionality using C++. It showcases how to manage user actions and revert or reapply them effectively.

## 🚀 Features

- Implemented in C++.
- Uses custom classes to handle undo and redo operations.
- Simple and easy-to-understand code structure.

## 🛠️ Technologies Used

- C++ (Standard)
- Microsoft Visual Studio (for project files)

## 📂 Project Structure

- Undo-Redo-Feature/
    - clsUndoRedo.h # Header file containing the UndoRedo class definition
    - Undo-Redo Feature.cpp # Main source file with implementation
    - Undo-Redo Feature.sln # Visual Studio solution file
    - Undo-Redo Feature.vcxproj # Visual Studio project file
    - Undo-Redo Feature.vcxproj.filters # Visual Studio filters


## 🧠 How It Works

The core functionality is managed by the `UndoRedo` class defined in `clsUndoRedo.h`. This class maintains two stacks:

- **Undo Stack**: Stores actions that can be undone.
- **Redo Stack**: Stores actions that can be redone after an undo.

When a new action is performed:

1. The action is pushed onto the undo stack.
2. The redo stack is cleared.

When an undo is requested:

1. The last action is popped from the undo stack.
2. The action is reverted.
3. The action is pushed onto the redo stack.

When a redo is requested:

1. The last action is popped from the redo stack.
2. The action is reapplied.
3. The action is pushed back onto the undo stack.

