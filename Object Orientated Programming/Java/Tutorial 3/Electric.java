/****************************************
* Control: the purpose of this class is to create the electric car vehicle through the use of inheritance
*          and the creation of its own attributes
* Author: Bartosz Sobiegraj
* Date: 13/02/2025
*****************************************/

public class Electric extends Vehicle // inherits attributes and methods from the vehicle class
{
    private int door; //assign private attributes exclusive to this class
    private int range;

    public Electric(String brand, int speed, int year, int range) //constructor
    {
        super(brand, speed, year); //super used to call upon attributes from another class
        setRange(range);
    }//end of constructor

    public void honk() // honk method which creates a sound for the vehicle
    {
        System.out.println("prrrrrrrrrrr");
    }

    //getters and setters

    public void setDoor (int door)
    {
        this.door = door;
    }

    public int getDoor()
    {
        return this.door;
    }

    public void setRange (int range)
    {
        this.range = range;
    }

    public int getRange()
    {
        return this.range;
    }
}
