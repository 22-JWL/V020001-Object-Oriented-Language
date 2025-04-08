#ifndef BREWMACHINE_H
#define BREWMACHINE_H

#include <iostream>

class BrewMachine
{
private:
    int beanQty;    // 원두의 양
    int waterQty;   // 물의 양
    int sugarQty;   // 설탕의 양
    int milkQty;    // 우유의 양
    int orderCount; // 주문 횟수 카운터

    // 내부에서 세척 진행을 위한 함수
    void performCleaning();

public:
    // 생성자: 초기 원두, 물, 설탕, 우유의 양을 설정하고 주문 카운터 초기화
    BrewMachine(int bean, int water, int sugar, int milk);

    // 현재 재료 상태를 출력하는 함수
    void displayStatus() const;

    // 필요한 재료가 충분한지 확인하는 함수
    bool hasEnoughIngredients(int reqBean, int reqWater, int reqSugar, int reqMilk);

    // 재료를 모두 10씩 보충하고 3초간 대기하는 함수
    void replenish();

    // 에스프레소 제조 함수 (원두 1, 물 1 사용)
    void brewEspresso();

    // 아메리카노 제조 함수 (원두 1, 물 2 사용)
    void brewAmericano();

    // 설탕커피 제조 함수 (원두 1, 물 2, 설탕 1 사용)
    void brewSweetCoffee();

    // 우유커피 제조 함수 (원두 1, 물 1, 우유 1 사용)
    void brewMilkCoffee();

    // 메뉴를 출력하는 함수
    void displayMenu();

    // 사용자 입력을 받아 메뉴에 따른 작업을 실행하는 함수
    void processMenu();
};

#endif // BREWMACHINE_H
