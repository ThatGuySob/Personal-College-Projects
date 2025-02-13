public class Control 
{
    public static void main (String [] args)
    {
        Person p1 = new Person("Clara");
        Person p3 = new Person("Liz", 20); // 2nd constructor option
        System.out.println(p1.name);

        p1.name = "Jim";
        System.out.println(p1.name);
        //p1.age = 30;
        //p1.age = -25; // this is why encapsulation of attributions is needed!
        p1.setAge(30);  //syntax is important
        p1.setAge(-25); //syntax is important
    
    
    }

}
