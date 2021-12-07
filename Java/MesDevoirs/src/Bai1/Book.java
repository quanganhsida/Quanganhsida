package Bai1;

public class Book {
    private String name;
    private String author;
    private int nbrPage;

    public Book(String name, String author, int nbrPage)
    {
        this.name = name;
        this.author = author;
        this.nbrPage = nbrPage;
    }

    public void setName (String name)
    {
        this.name = name;
    }
    public void setAuthor (String author)
    {
        this.author = author;
    }
    public void setNbrPage (int nbrPage)
    {
        this.nbrPage = nbrPage;
    }

    public String getName()
    {
        return name;
    }
    public String getAuthor()
    {
        return author;
    }
    public int getNbrPage()
    {
        return nbrPage;
    }
}
