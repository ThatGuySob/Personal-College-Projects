/****************************************
* Control: the purpose of this class is to get hidden vehicle informations with both getters and setters
*          as well as allowing for a readable string to be presented to the user
* Author: Bartosz Sobiegraj
* Date: 13/02/2025
*****************************************/

public class Vehicle // mian parent class
{
    private String brand;
    private int speed;
    private int year;

    public Vehicle(String brand, int speed, int year) // main vehicle constructor
    {
        setBrand(brand);
        setSpeed(speed);
        setYear(year);
    }
    
    public void accelerate() // accelerates the vehicle neceesary and checks if going too fast
    {
        if (getSpeed() <= 150) // if statement to check the speed
        {
            setSpeed(180);
            System.out.println("The speed is now " + getSpeed());
        }
        else
            System.out.println("You're going too fast!");
    }
    public void brake() // slows te vehicle as necessary 
    {
        if (getSpeed() >= 150) // if statement to check the speed
        {
            setSpeed(100);
            System.out.println("\nYou slowed down to " + getSpeed());
        }
        else
            System.out.println("\nCan't go slower for now");
 
    }

    public void honk() // honk method which creates a sound for the vehicle
    {
        System.out.println("honk honk!");
    }

    /*
    public void honk() // honk method which checks for the vehicle type and makes a sound correspondingly
    {
        System.out.println("honk honk!");
        if (getType().equals("car"))
        {
            System.out.println("Beep Beep!");
        }
        else
        {
            if (getType().equals("motorcycle")) // nested if statements to check for all vehicles 
            {
                System.out.println("Vroooom!");
            }
            else
            {
                if (getType().equals("electric"))
                {
                    System.out.println("prrrrrrrr");
                }
                else
                {
                    System.out.println("It made no noise"); //if no vehicles apply resort to the last else statement
                }
            }
        }
    }
    */

    //getters and setters
    public void setBrand (String brand)
    {
        this.brand = brand;
    }

    public String getBrand()
    {
        return this.brand;
    }

    public void setSpeed (int speed)
    {
        this.speed = speed;
    }

    public int getSpeed()
    {
        return this.speed;
    }

    public void setYear (int year)
    {
        this.year = year;
    }

    public int getYear()
    {
        return this.year;
    }


    public String toString() // tostring function to make it a user friendly display
    {
        return  "\nVehicle Brand: " + getBrand() + 
                "\nSpeed: " + getSpeed() + "km/h" +
                "\nYear: " + getYear();
    }
}
 