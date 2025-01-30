import java.util.*;

class Digits
{

public void CountDigits(int iNo)
{
    int iCount[10]  = {0,0,0,0,0,0,0,0,0,0};

    int iDigit = 0;

    while (iNo != 0)

    {
        iDigit = iNo % 10;
        if(iDigit == 5)
        {iCount5++;}
        else if ( iDigit == 6)
        {iCount6++;}
        else if ( iDigit == 7)
        {iCount7++;}
        else if ( iDigit == 8)
        {iCount8++;}
        else if ( iDigit == 9)
        {iCount9++;}

        iNo = iNo / 10;
    }
    System.out.println("Frequency of 5 is : "+iCount5);
    System.out.println("Frequency of 6 is : "+iCount6);
    System.out.println("Frequency of 7 is : "+iCount7);
    System.out.println("Frequency of 8 is : "+iCount8);
}

}



class Program250

{
    public static void main(String A[])
    {
       
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter Nnumber :");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        iRet = dobj.CountDigits(iValue);

    }
}

/* 
i = 9870780
o = 



 */
