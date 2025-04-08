#include "BrewMachine.h"
#include <thread>
#include <chrono>
using namespace std;

BrewMachine::BrewMachine(int bean, int water, int sugar, int milk)
    : beanQty(bean), waterQty(water), sugarQty(sugar), milkQty(milk), orderCount(0)
{
    cout << "커피머신 활성화...\n";
    cout << "초기 원두: " << beanQty << ", 물: " << waterQty << ", 설탕: " << sugarQty << ", 우유: " << milkQty << "\n";
}

void BrewMachine::displayStatus() const
{
    cout << "[상태] 원두: " << beanQty
         << ", 물: " << waterQty
         << ", 설탕: " << sugarQty << ", 우유: " << milkQty << "\n";
}

bool BrewMachine::hasEnoughIngredients(int reqBean, int reqWater, int reqSugar, int reqMilk)
{
    return (beanQty >= reqBean && waterQty >= reqWater && sugarQty >= reqSugar && milkQty >= reqMilk);
}

void BrewMachine::replenish()
{
    cout << "\n[재료 부족] 모든 재료를 10씩 보충합니다...\n";
    beanQty += 10;
    waterQty += 10;
    sugarQty += 10;
    milkQty += 10;
    displayStatus();
    cout << "3초 후 다시 진행합니다...\n\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
}

void BrewMachine::performCleaning()
{
    cout << "\n[세척] 10회 주문 완료! 기계를 세척합니다...\n";
    // 필요에 따라 세척 시 추가 동작 구현 가능
    std::this_thread::sleep_for(std::chrono::seconds(2));
    cout << "[세척 완료] 기계가 다시 사용 가능합니다.\n\n";
    orderCount = 0; // 주문 횟수 초기화
}

void BrewMachine::brewEspresso()
{
    int reqBean = 1;
    int reqWater = 1;
    int reqSugar = 0;
    int reqMilk = 0;

    if (!hasEnoughIngredients(reqBean, reqWater, reqSugar, reqMilk))
        replenish();

    beanQty -= reqBean;
    waterQty -= reqWater;
    cout << "에스프레소가 나왔습니다!\n";
    displayStatus();

    orderCount++;
    if (orderCount == 10)
        performCleaning();
}

void BrewMachine::brewAmericano()
{
    int reqBean = 1;
    int reqWater = 2;
    int reqSugar = 0;
    int reqMilk = 0;

    if (!hasEnoughIngredients(reqBean, reqWater, reqSugar, reqMilk))
        replenish();

    beanQty -= reqBean;
    waterQty -= reqWater;
    cout << "아메리카노가 나왔습니다!\n";
    displayStatus();

    orderCount++;
    if (orderCount == 10)
        performCleaning();
}

void BrewMachine::brewSweetCoffee()
{
    int reqBean = 1;
    int reqWater = 2;
    int reqSugar = 1;
    int reqMilk = 0;
    // 설탕커피는 우유가 필요하지 않으므로 reqMilk는 0으로 설정

    if (!hasEnoughIngredients(reqBean, reqWater, reqSugar, reqMilk))
        replenish();

    beanQty -= reqBean;
    waterQty -= reqWater;
    sugarQty -= reqSugar;
    cout << "설탕커피가 나왔습니다!\n";
    displayStatus();

    orderCount++;
    if (orderCount == 10)
        performCleaning();
}

void BrewMachine::brewMilkCoffee()
{
    int reqBean = 1;
    int reqWater = 1;
    int reqSugar = 0;
    int reqMilk = 1;

    if (!hasEnoughIngredients(reqBean, reqWater, reqSugar, reqMilk))
        replenish();

    beanQty -= reqBean;
    waterQty -= reqWater;
    milkQty -= reqMilk;
    cout << "라떼가 나왔습니다!\n";
    displayStatus();

    orderCount++;
    if (orderCount == 10)
        performCleaning();
}

void BrewMachine::displayMenu()
{
    cout << "\n--- 메뉴 ---\n";
    cout << "1. Espresso\n";
    cout << "2. Americano\n";
    cout << "3. Sugar Coffee\n";
    cout << "4. Latte\n";
    cout << "5. 종료\n";
    cout << "--------------\n";
    cout << "메뉴 번호를 선택하세요: ";
}

void BrewMachine::processMenu()
{
    int selection;
    while (true)
    {
        displayMenu();
        cin >> selection;

        if (!cin || selection < 1 || selection > 5)
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "잘못된 입력입니다. 다시 선택하세요.\n";
            continue;
        }

        if (selection == 1)
            brewEspresso();
        else if (selection == 2)
            brewAmericano();
        else if (selection == 3)
            brewSweetCoffee();
        else if (selection == 4)
            brewMilkCoffee();
        else if (selection == 5)
        {
            cout << "커피머신을 종료합니다.\n";
            break;
        }
    }
}
