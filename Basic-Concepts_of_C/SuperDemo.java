
class Base
{
    public int A;
    public Base()
    {
        System.out.println("Inside Base defult constructor");
        this.A = 11;
    }
    public Base(int i)
    {
        System.out.println("Inside Base parametrised constructor");
        this.A = i;
    }
    public void fun()
    {
        System.out.println("Inside base fun");
    }
}
class Derived extends Base     
{
    public int A;
    public Derived()
    {
        super(11);                                      // 3
        System.out.println("Inside Derived constructor");
        this.A = 51;
    }
    public void gun()
    {
        System.out.println("Inside Derived gun");
        System.out.println("Value of A : "+A);    // 51
        System.out.println("Value of A : "+this.A);    // 51
        System.out.println("Value of A : "+super.A);    // 11

        fun();                                    // 2
    }
}
class SuperDemo
{
    public static void main(String Arg[])
    {
        Derived dobj = new Derived();
        dobj.gun();

    }
}

// 1. Access data of parent from child
// 2. Call method of parent from child
// 3. Call constructor of parent from child