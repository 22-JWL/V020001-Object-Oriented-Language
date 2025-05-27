#include <iostream>
#include <string>
using namespace std;

class Product
{
    int id, price;
    string desc, maker;

public:
    Product(int id = 0, string desc = "", string maker = "", int price = 0)
    {
        this->id = id;
        this->desc = desc;
        this->maker = maker;
        this->price = price;
    }

    int getId() { return id; }
    string getDesc() { return desc; }
    string getMaker() { return maker; }
    int getPrice() { return price; }
    virtual void show() = 0;
};

class CompactDisc : public Product
{
    string albumTitle;
    string artist;

public:
    CompactDisc(int id = 0, string desc = "", string maker = "", int price = 0, string albumTitle = "", string artist = "")
        : Product(id, desc, maker, price), albumTitle(albumTitle), artist(artist) {}

    void show() override
    {
        cout << "--- 상품ID : " << getId() << endl;
        cout << "상품설명 : " << getDesc() << endl;
        cout << "생산자 : " << getMaker() << endl;
        cout << "가격 : " << getPrice() << endl;
        cout << "앨범제목 : " << albumTitle << endl;
        cout << "가수 : " << artist << endl;
    }
};

class Book : public Product
{
    int isbn;
    string author, title;

public:
    Book(int id = 0, string desc = "", string maker = "", int price = 0, int isbn = 0, string author = "", string title = "")
        : Product(id, desc, maker, price), isbn(isbn), author(author), title(title) {}

    int getISBN() { return isbn; }
    string getTitle() { return title; }
    string getAuthor() { return author; }

    void show() override
    {
        cout << "--- 상품ID : " << getId() << endl;
        cout << "상품설명 : " << getDesc() << endl;
        cout << "생산자 : " << getMaker() << endl;
        cout << "가격 : " << getPrice() << endl;
        cout << "ISBN : " << getISBN() << endl;
        cout << "책제목 : " << getTitle() << endl;
        cout << "저자 : " << getAuthor() << endl;
    }
};

class ConversationBook : public Book
{
    string language;

public:
    ConversationBook(int id = 0, string desc = "", string maker = "", int price = 0, int isbn = 0, string author = "", string title = "", string language = "")
        : Book(id, desc, maker, price, isbn, author, title), language(language) {}

    void show() override
    {
        cout << "--- 상품ID : " << getId() << endl;
        cout << "상품설명 : " << getDesc() << endl;
        cout << "생산자 : " << getMaker() << endl;
        cout << "가격 : " << getPrice() << endl;
        cout << "ISBN : " << getISBN() << endl;
        cout << "책제목 : " << getTitle() << endl;
        cout << "저자 : " << getAuthor() << endl;
        cout << "언어 : " << language << endl;
    }
};

int main()
{
    cout << "***** 상품 관리 프로그램을 작동합니다 *****" << endl;

    string desc, maker, title, author, language, albumTitle, artist;
    int id = 0, price, isbn;

    Product *products[100];

    while (true)
    {
        cout << "상품 추가(1), 모든 상품 조회(2), 끝내기(3) ?: ";
        int menuOption = 0, productType = 0;
        cin >> menuOption;

        if (menuOption == 1)
        {
            cout << "상품 종류 책(1), 음악CD(2), 회화책(3) ?: ";
            cin >> productType;
            cin.ignore(); // 개행 제거

            if (productType == 1)
            {
                cout << "상품 설명>>";
                getline(cin, desc);
                cout << "생산자>>";
                getline(cin, maker);
                cout << "가격>>";
                cin >> price;
                cin.ignore();
                cout << "책 제목>>";
                getline(cin, title);
                cout << "저자>>";
                getline(cin, author);
                cout << "ISBN>> ";
                cin >> isbn;
                products[id] = new Book(id, desc, maker, price, isbn, author, title);
            }
            else if (productType == 2)
            {
                cout << "상품 설명>>";
                cin >> desc;
                cout << "생산자>>";
                cin >> maker;
                cout << "가격>>";
                cin >> price;
                cout << "앨범제목>>";
                cin >> albumTitle;
                cout << "가수>>";
                cin >> artist;
                products[id] = new CompactDisc(id, desc, maker, price, albumTitle, artist);
            }
            else if (productType == 3)
            {
                cout << "상품 설명>>";
                cin >> desc;
                cout << "생산자>>";
                cin >> maker;
                cout << "가격>>";
                cin >> price;
                cout << "ISBN>> ";
                cin >> isbn;
                cout << "책 제목>>";
                cin >> title;
                cout << "저자>>";
                cin >> author;
                cout << "언어>>";
                cin >> language;
                products[id] = new ConversationBook(id, desc, maker, price, isbn, author, title, language);
            }
            id++;
        }
        else if (menuOption == 2)
        {
            for (int i = 0; i < id; i++)
            {
                products[i]->show();
            }
        }
        else
        {
            break;
        }
    }
}
