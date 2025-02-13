public class Person 
{
    String name;
    String address;
    private int age; // only access within this class
    
    public Person (String name)
    {
        this.name = name;
    }

    public Person (String name, int age)
    {
        // this.name = name;
        setAge(age);
    }

    public void setAge(int age)
    {
        // add validation to ensure only valid age data comes in
        if (age > 0)
        {
            this.age = age;
        }
        else
            System.out.println("you have entered an invalid age value >:(");
    }
}
