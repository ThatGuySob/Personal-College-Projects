
/****************************************
* Control: the purpose of this class.. etc
* Author: Bartosz Sobiegraj
* Date: 30/01/2025
*****************************************/

public class Car
{
    private String name; // delcaring attributes as private keeps them from unintended change
    private String registration; 
    private int maxSpeed;
    private String Colour;
    private boolean Automatic;
    private int wheels;

    public Car(String name, String registration) // receive in the name and the registration
    {
        this.name =         name;
        this.registration = registration;
    }

    public Car(String name, String reg, int speed, String Colour, boolean auto, int wheels) // receive in the name and the registration
    {
        this.name =         name;
        registration =      reg;
        maxSpeed =          speed;
        this.Colour =       Colour;
        Automatic =         auto;
        this.wheels =       wheels; 


    }

    public Car(String string, int i, int j, int k) {
        //TODO Auto-generated constructor stub
    }

    public String toString()
    {
        return "This cars owners name is " + this.name + " has a registration plate of " + registration + " is of colour " + this.Colour + " Automatic " + Automatic + " has " + this.wheels + " wheels";
    }

}
