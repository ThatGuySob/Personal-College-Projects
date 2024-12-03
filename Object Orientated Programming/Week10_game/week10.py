from Game import Game

if __name__ == "__main__":
    game = Game()
    game.run()
    # Using the logger to print out game logs
    print("\nGame Logs:")
    for log in game.log.logs:
        print(log)