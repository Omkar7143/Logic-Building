import java.util.*;

class Program256
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0;

        System.out.println("Enter the number of elements :");
        iSize = sobj.nextInt();
        
        int Arr[] = new int[iSize];

        System.out.println("Enter the elements :");
        for(i=0; i< Arr.length; i++)
        {
            Arr[i ] = sobj.nextInt();
        }

        System.out.println("Elements of the array are  :");
        for(i=0; i< Arr.length; i++)
        {
            System. out.println(Arr[i]);
        }
    }
}