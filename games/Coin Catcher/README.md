# 🪙 Coin Catcher -- Tkinter Edition

A simple arcade-style game built with Python and Tkinter where the
player moves a blue circle to catch red coins before time runs out.

------------------------------------------------------------------------

## 🎮 Gameplay

-   You control the **blue catcher circle**
-   Catch the **red coins**
-   Each coin increases your score by 1
-   The game lasts **15 seconds**
-   Final score is displayed when time runs out

------------------------------------------------------------------------

## 🕹 Controls

  Key   Action
  ----- ------------
  W     Move Up
  S     Move Down
  A     Move Left
  D     Move Right

------------------------------------------------------------------------

## 🚀 How to Run

### Requirements

-   Python 3.x
-   Tkinter (comes pre-installed with most Python installations)

To verify Tkinter:

``` bash
python -m tkinter
```

### Run the Game

``` bash
python idk.py
```

------------------------------------------------------------------------

## ⚙️ Configuration

You can modify these game settings inside the file:

``` python
WINDOW_SIZE = 600
BALL_SIZE = 40
time_limit = 15
```

-   `WINDOW_SIZE` -- Game window dimensions\
-   `BALL_SIZE` -- Size of player and coin\
-   `time_limit` -- Duration of the game (seconds)

------------------------------------------------------------------------

## 🧠 How It Works

-   Uses Tkinter `Canvas` for rendering
-   Keyboard input via `root.bind("<KeyPress>", self.move)`
-   Collision detection via bounding-box overlap
-   Timer implemented using `root.after()`

------------------------------------------------------------------------

## ✨ Possible Improvements

-   Add boundary limits
-   Add restart button
-   Add sound effects
-   Add difficulty scaling
-   Add high score tracking

------------------------------------------------------------------------

## 📜 License

This project is open for educational and personal use.
