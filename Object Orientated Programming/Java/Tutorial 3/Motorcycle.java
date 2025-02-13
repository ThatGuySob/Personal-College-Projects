/****************************************
* Control: the purpose of this class is to create the motorcycle vehicle through the use of inheritance
*          and the creation of its own attributes
* Author: Bartosz Sobiegraj
* Date: 13/02/2025
*****************************************/

public class Motorcycle extends Vehicle // inherits attributes and methods from the vehicle class
{
    private boolean twoSeater = false; //attribute exclusive to this class

    public Motorcycle(String brand, int speed, int year, boolean twoSeater) //constructor
    {
        super(brand, speed, year); //super used to call upon attributes from another class
        setTwoSeater(twoSeater);
    } // end of constructor

    public void honk() // honk method which creates a sound for the vehicle
    {
        System.out.println("Vroooooooooom!");
    }

    // getters and setters

    public void setTwoSeater (boolean twoSeater)
    {
        this.twoSeater = twoSeater;
    }

    public boolean getTwoSeater()
    {
        return this.twoSeater;
    }
}

/*
public class Motorcycle 
{
    private String brand;
    private int speed;
    private int year;
    private boolean twoSeater = false;

    public Motorcycle(String brand, int speed, int year, boolean twoSeater) 
    {
       setBrand(brand);
       setSpeed(speed);
       setYear(year);
       setTwoSeater(twoSeater);
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

    public void setTwoSeater (boolean twoSeater)
    {
        this.twoSeater = twoSeater;
    }

    public boolean getTwoSeater()
    {
        return this.twoSeater;
    }

    public String toString() 
    {
        return  "Motorcycle Brand: " + getBrand() + 
                "\nSpeed: " + getSpeed() + "km/h" +
                "\nYear: " + getYear() + 
                "\nTwo Seater: " + getTwoSeater();
    }
}
*/