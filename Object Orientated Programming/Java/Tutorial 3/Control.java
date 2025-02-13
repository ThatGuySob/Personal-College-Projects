/****************************************
* Control: the purpose of this class is to control the Vehicle, motorcyle, car and electric
*          class in terms of assigning and printing and calling upon methods
* Author: Bartosz Sobiegraj
* Date: 13/02/2025
*****************************************/


public class control
{
    public static void main (String [] args)
    {
        Vehicle v1 = new Vehicle("mercedes", 120, 2001);
        Car c1 = new Car("BMW", 150, 2011, 4);
        Motorcycle m1 = new Motorcycle("Suzuki", 150, 1999, true);
        Electric ec1 = new Electric("Tesla", 160, 2020, 400);

        System.out.println(m1);
        m1.accelerate();
        m1.brake();
        m1.honk();
        System.out.println(c1);
        c1.accelerate();
        c1.brake();
        c1.honk();
        System.out.println(ec1);
        ec1.accelerate();
        ec1.brake();
        ec1.honk();

    }  
}