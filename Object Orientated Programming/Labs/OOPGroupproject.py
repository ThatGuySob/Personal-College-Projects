from abc import ABC, abstractmethod

class Loggable:
    def __init__(self):
        # Private variable to hold logs
        self._logs = []

    @property
    def logs(self):
        return self._logs  # Getter to access logs

    def log(self, message: str):
        # Method to log a message
        self._logs.append(message)

if __name__ == "__main__": #calling the game itself
    game = Game()
    game.run()

# Using the logger to print out game logs
    print("\nGame Logs:")
    for log in game.log.logs:
        print(log)

self.log.log("Sample text in here")