package test2;
class animal {
	void cry() {
	}
}
class dog extends animal
{
void cry()
	{
	System.out.println("ÍôÍô¡­¡­");
	}
}
class cat extends animal
{
	void cry()
	{
		System.out.println("ß÷ß÷¡­¡­");
	}
}
public class jicheng{
	public static void main(String args[])
	{
	animal Animal;
	Animal=new dog();
	Animal.cry();
	Animal=new cat();
	Animal.cry();
	}
}