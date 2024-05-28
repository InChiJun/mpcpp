class Person{
public:
    int money;
    void addMoney(int money) {
        this->money += money;
    }

    static int sharedMoney;
    static void addSharedMoney(int n) {
        sharedMoney += n;
    }
};
int main(){
    return 0;
}