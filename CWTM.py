"""
Author: ThatGuySob
Date: 27/11/2024
Description: A prank piece of code, meant to be turned into an executable
so that when plugged into a pc it changes their wallpaper into a My Little Pony,
Henceforth the name of the file CWTM (Change Wallpaper To MLP). 
Only for windows for now. 
A limitation of whether the person has python installed on their machine.
Unfortunately Windows disabled autorun back on windows 7 so the exe file has to be ran manually.
"""
import os # allows the manipulation of the system
import ctypes # uses c type code in python
import shutil # allows for the movement of files between directories
import string # used to create ascii list of letters instead of manually inputting 

name = os.path.expanduser('~') # gets the username of the account currently logged in
path = name + '\\Onedrive\\Downloads\\'

if os.path.exists(path): # checks if user has onedrive
    image_path = os.path.abspath(name + "\\OneDrive\\Downloads\\Untitled9.png") 
else:
    image_path = os.path.abspath(name + "\\Downloads\\Untitled9.png") # the end path of the image location

alphabet = list(string.ascii_uppercase) # creates a list of uppercase letters in case users usb is not in the E directory letter

def change_wallpaper(image_path):

    SPI_SETDESKWALLPAPER = 20 # allows the setting of the wallpaper to be changed
    SPIF_UPDATEINIFILE = 0x01  # update the user profile
    SPIF_SENDWININICHANGE = 0x02  # sends a notification of the change made

    try:
        # call the windows API to change wallpaper
        ctypes.windll.user32.SystemParametersInfoW(SPI_SETDESKWALLPAPER, 0, image_path, SPIF_UPDATEINIFILE | SPIF_SENDWININICHANGE)
        return True
    except Exception as e:
        # throws an error message if wallpaper change fails
        print(f"Error changing wallpaper: {e}")
        return False

while (True):
    for letter in alphabet:
        try: 
            print(f"Error with letter {letter}:")
            shutil.copy(letter + ":\\Untitled9.png", image_path) # trying all possible Directories the usb can be to copy the image from
        except Exception as e:
            print(f"Error with letter {letter}: {e}")
    if change_wallpaper(image_path): # function to call 
        print("Wallpaper changed successfully!") # MLP background set
        break
