import java.util.*;


class Counter{
    //variable declaration
	private String carno;
    private String date;
    private String countertype;
    private static int hTicketno=0;
    private static int mTicketno=0;
    private static int lTicketno=0;

	//default constructor
    public Counter(){}

	//parameterised constructor
    public Counter(String ctype,String cno,String dt)
    {
        countertype=ctype;
        carno=cno;
        date = dt;
    }

	//getter setter methods
    public void setCountertype(String ctype)
    {
        countertype=ctype;
    }

    public void setCarno(String cno)
    {
        carno=cno;
    }

    public void setDate(String dt)
    {
        date=dt;
    }

    public String getCountertype()
    {
        return countertype;
    }

    public String getCarno()
    {
        return carno;
    }

    public String getDate()
    {
        return date;
    }

	public int getHTicketno()
	{
		return hTicketno;
	}

	public int getMTicketno()
	{
		return mTicketno;
	}

	public int getLTicketno()
	{
		return lTicketno;
	}

	//ticket count method
	public int getTicketNo()
    {
        if(getCountertype().equalsIgnoreCase("HeavyDuty"))
            return hTicketno;
        if(getCountertype().equalsIgnoreCase("LightDuty"))
            return lTicketno;
        if(getCountertype().equalsIgnoreCase("MediumDuty"))
            return mTicketno;
		return 0;
    }

	//set ticket number method
    public void setTicketCount(String c)
    {
        if(c.equalsIgnoreCase("HeavyDuty"))
            hTicketno++;
        if(c.equalsIgnoreCase("LightDuty"))
            lTicketno++;
        if(c.equalsIgnoreCase("MediumDuty"))
            mTicketno++;
    }
}


//Main method
public class Assignment
	{

		public static void main(String args[])
     {
		Scanner sc=new Scanner(System.in);
		int i=0;
		Counter c[]=new Counter[100];
		while(true)
		{
			System.out.println("Select Counter Type");
			System.out.println("1. Heavy Duty");
			System.out.println("2. Medium Duty");
			System.out.println("3. Light Duty");
			int ch=sc.nextInt();

			String ctype;
			if(ch==1)
				ctype="Heavyduty";
			else if(ch==2)
				ctype="Mediumduty";
			else if(ch==3)
				ctype="Lightduty";
			else{
				System.out.println("Invalid Input");
				return;
			}
			System.out.println("Enter car number: ");
			String cno=sc.next();
			System.out.println("Enter Date: ");
			String dt=sc.next();

			c[i]=new Counter(ctype,cno,dt);
			c[i].setTicketCount(ctype);

			System.out.println("\n-----Details-----");
			System.out.println("Counter Type : "+c[i].getCountertype());
			System.out.println("Car no : "+c[i].getCarno());
			System.out.println("Date : "+c[i].getDate());
			System.out.println("Counter Type : "+c[i].getTicketNo());

			System.out.println("Do you want to Continue type Y/N: ");
			char t=sc.next().charAt(0);
			if(t=='N' || t=='n')
				break;
			System.out.println();
		}
		Counter cm=new Counter();
		System.out.println("\n---------Complete Data---------\n");

		System.out.println("Heavy Duty");
		System.out.println("Cost per vehicle is 800");
		System.out.println("Total number of vehicle pass: "+cm.getHTicketno());
		System.out.println("Total Earning: "+(cm.getHTicketno()*800));

		System.out.println("\nMedium Duty");
		System.out.println("Cost per vehicle is 500");
		System.out.println("Total number of vehicle pass: "+cm.getMTicketno());
		System.out.println("Total Earning: "+(cm.getMTicketno()*500));

		System.out.println("\nLight Duty");
		System.out.println("Cost per vehicle is 300");
		System.out.println("Total number of vehicle pass: "+cm.getLTicketno());
		System.out.println("Total Earning: "+(cm.getLTicketno()*300));

		System.out.println("\nTotal Earning from all counter: "+((cm.getHTicketno()*800)+(cm.getMTicketno()*500)+(cm.getLTicketno()*300)));
	 

	 }
}

