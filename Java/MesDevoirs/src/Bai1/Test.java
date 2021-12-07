package Bai1;
import java.util.Scanner;

public class Test {
    public static Scanner sc = new Scanner(System.in);

    public static void input1Book(Book[] bookList)
    {
        for(int i = 0; i < bookList.length; i++)
        {
            String name, author;
            int nbr;
            System.out.println("Nhap ten sach: ");
            name = sc.nextLine();
            System.out.println("Nhap ten tac gia: ");
            author = sc.nextLine();
            do{
                System.out.println("Nhap so trang sach: ");
                nbr = Integer.parseInt(sc.nextLine());
            }
            while(nbr < 0);
            bookList[i] = new Book(name, author, nbr);
        }
    }

    public static void outputBook(Book[] bookList) {
        for (int i = 0; i < bookList.length; i++)
        {
            System.out.println("\nCuon sach thu " + (i+1) + " co: ");
            System.out.println("\nTen la: " + bookList[i].getName());
            System.out.println("\nCo so trang la: " + bookList[i].getNbrPage());
        }
    }

    public static int countBook(Book[] bookList)
    {
        int count = 0;
        for(int i = 0; i < bookList.length; i++)
        {
            count += 1;
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Nhap so phan tu sach: ");
        do
        {
         n = sc.nextInt();
        }
        while (n < 0);

        Book[] bookList = new Book[n];
        System.out.println("Nhap thong tin sach: ");
        input1Book(bookList);
        System.out.println("\n");
        outputBook(bookList);
        System.out.println("So luong sach hien tai la: " + countBook(bookList3));
    }
}
