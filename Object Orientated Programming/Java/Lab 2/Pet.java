/****************************************
* Control: the purpose of this class is to get hiddent pet informations with both getters and setters
*          as well as allowing for a readable string to be presented to the user
* Author: Bartosz Sobiegraj
* Date: 06/02/2025
*****************************************/


public class Pet
{
    // Setting the attributes and making them hidden
    private String name;
    private String type;
    private Boolean trained = false;

    public Pet(String name, String type, Boolean trained) // receive in the name, type and whether theyre trained
    {
        setName(name);
        setType(type);
        setTrained(trained);
    }

    public String toString() // converts the hidden attributes above into a readable string
    {
        return "This pet is called " + getName() + ", is a " + getType() + " and it is " + getTrained() + " that " + getName() + " is trained";
    }

    public void makeNoise() // checks what type of animal it is and returns noise based on it
    {
        if (getType().equals("cat"))
        {
            System.out.println("Meow!");
        }
        else
        {
            if (getType().equals("dog"))
            {
                System.out.println("Bark!");
            }
            else
            {
                System.out.println("It made no noise");
            }
        }
    }

    public String getName() // getter for name
    {
        return name;
    }

    public void setName(String name) // setter for the name
    {
        // add validation to ensure there is text
        if (name.isEmpty()) 
        { 
            System.out.println("There's no name for the pet."); 
        } 
        else 
        { 
            this.name = name;
        }
    }

    public String getType() // getter for the type of animal
    {
        return type;
    }

    public void setType(String type) // setter for the type of animal
    {
        // add validation to ensure there is text
        if (type.isEmpty()) 
        { 
            System.out.println("There's no type for the pet."); 
        } 
        else 
        { 
            this.type = type.toLowerCase();
        }
    }

    public Boolean getTrained() // getter for whether the animal is trained
    {
        return trained;
    }

    public void setTrained(Boolean trained) // setter for whether the animal is trained
    {
        this.trained = trained;
    }
} 

