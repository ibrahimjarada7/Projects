import tkinter as tk
import random
import time


WINDOW_SIZE = 600
BALL_SIZE = 40
time_limit = 15

score = 0

class CoinCatcherGame:
    def __init__(self, root):
        self.root = root
        self.root.title("Coin Catcher - Tkinter Edition")

        self.canvas = tk.Canvas(root, width=WINDOW_SIZE, height=WINDOW_SIZE, bg="light blue")
        self.canvas.pack()

        self.start_time = time.time()
        self.score = 0

        # starting positions
        self.catcher_x = WINDOW_SIZE // 2
        self.catcher_y = WINDOW_SIZE // 2

        self.coin_x = random.randint(50, WINDOW_SIZE - 50)
        self.coin_y = random.randint(50, WINDOW_SIZE - 50)

        # create objects
        self.catcher = self.canvas.create_oval(
            self.catcher_x - BALL_SIZE,
            self.catcher_y - BALL_SIZE,
            self.catcher_x + BALL_SIZE,
            self.catcher_y + BALL_SIZE,
            fill="blue"
        )

        self.coin = self.canvas.create_oval(
            self.coin_x - BALL_SIZE,
            self.coin_y - BALL_SIZE,
            self.coin_x + BALL_SIZE,
            self.coin_y + BALL_SIZE,
            fill="red"
        )

        self.score_text = self.canvas.create_text(
            80, 20, text="Score: 0", font=("Arial", 16)
        )

        self.time_text = self.canvas.create_text(
            500, 20, text="Time: 15", font=("Arial", 16)
        )

        root.bind("<KeyPress>", self.move)

        self.update_game()

    def move(self, event):
        key = event.keysym.lower()
        step = 20

        if key == "w":
            self.canvas.move(self.catcher, 0, -step)
        elif key == "s":
            self.canvas.move(self.catcher, 0, step)
        elif key == "a":
            self.canvas.move(self.catcher, -step, 0)
        elif key == "d":
            self.canvas.move(self.catcher, step, 0)

        self.check_collision()

    def check_collision(self):
        catcher_pos = self.canvas.coords(self.catcher)
        coin_pos = self.canvas.coords(self.coin)

        # simple bounding-box collision
        if (catcher_pos[0] < coin_pos[2] and
            catcher_pos[2] > coin_pos[0] and
            catcher_pos[1] < coin_pos[3] and
            catcher_pos[3] > coin_pos[1]):

            self.score += 1
            self.canvas.itemconfig(self.score_text, text=f"Score: {self.score}")

            # move coin to new random location
            new_x = random.randint(50, WINDOW_SIZE - 50)
            new_y = random.randint(50, WINDOW_SIZE - 50)

            self.canvas.coords(
                self.coin,
                new_x - BALL_SIZE,
                new_y - BALL_SIZE,
                new_x + BALL_SIZE,
                new_y + BALL_SIZE
            )

    def update_game(self):
        elapsed = int(time.time() - self.start_time)
        remaining = max(0, time_limit - elapsed)

        self.canvas.itemconfig(self.time_text, text=f"Time: {remaining}")

        if remaining > 0:
            self.root.after(100, self.update_game)
        else:
            self.end_game()

    def end_game(self):
        self.canvas.create_text(
            WINDOW_SIZE // 2,
            WINDOW_SIZE // 2,
            text=f"GAME OVER\nFinal Score: {self.score}",
            font=("Arial", 24),
            fill="black"
        )


def main():
    root = tk.Tk()
    game = CoinCatcherGame(root)
    root.mainloop()


if __name__ == "__main__":
    main()

