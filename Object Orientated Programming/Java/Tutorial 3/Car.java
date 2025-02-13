/****************************************
* Control: the purpose of this class is to create the car vehicle through the use of inheritance
*          and the creation of its own attributes
* Author: Bartosz Sobiegraj
* Date: 13/02/2025
*****************************************/

public class Car extends Vehicle // inherits attributes and methods from the vehicle class
{
    private int door; //assign private attributes exclusive to this class

    public Car(String brand, int speed, int year, int door)  // constructor
    {
        super(brand, speed, year); //super used to call upon attributes from another class
        setDoor(door);
    } //end of constructor

    public void honk() // honk method which creates a sound for the vehicle
    {
        System.out.println("Beep Beep!");
    }

    // getters and setters

    public void setDoor (int door)
    {
        this.door = door;
    }

    public int getDoor()
    {
        return this.door;
    }
 }
 

/*
public class Car
{
    private String brand;
    private int Speed;
    private int year;
    private int door;

    public Car(String brand, int Speed, int year, int door) 
    {
       setBrand(brand);
       setSpeed(speed);
       setYear(year);
       setDoor(door);
    }
    
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

    public void setDoor (int door)
    {
        this.door = door;
    }

    public int getDoor()
    {
        return this.door;
    }

        public void accelerate() // checks what type of animal it is and returns noise based on it
    {
        if (getSpeed() <= 150)
        {
            setSpeed(180);
            System.out.println("The speed is now " + getSpeed());
        }
        else
            System.out.println("You're going too fast!");
    }
    public void brake() // checks what type of animal it is and returns noise based on it
    {
        if (getSpeed() >= 150)
        {
            setSpeed(100);
            System.out.println("You slowed down to " + getSpeed());
        }
        else
            System.out.println("Can't go slower for now");
 
    }

    public String toString() 
    {
        return  "Car Brand: " + getBrand() + 
                "\nSpeed: " + getSpeed() + "km/h" +
                "\nYear: " + getYear() + 
                "\nDoors: " + getDoor();
    }
 }
*/