import os
from PIL import (Image)
import pytesseract
import pyautogui
import time
import pyperclip

def open_snipping_tool():
    # Open Snipping Tool via run dialog
    os.system("start snippingtool")
    time.sleep(.5)  # Allow time for Snipping Tool to open
    pyautogui.hotkey('ctrl', 'q')  # Start a new snip
    time.sleep(3)  # Time to take a snip manually

def process_image(save_path):
    # Capture the screenshot (substitute this with snipping tool capture later)
    screenshot = pyautogui.screenshot()  # Take a screenshot as an example
    screenshot.save(save_path)  # Save the screenshot

    # Open the saved screenshot
    image = Image.open(save_path)

    # Use pytesseract to extract text from the image
    text = pytesseract.image_to_string(image)
    print("Extracted Text: ", text)

if __name__ == '__main__':
    image_save_path = r'C:\Users\barte\OneDrive\Documents\College\Python General Code\snip.png'
    open_snipping_tool()
    process_image(image_save_path)