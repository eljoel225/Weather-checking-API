#include <iomanip>
#include <iostream>

int main() {
    double itemCost = 0.0;
    double salePrice = 0.0;
    int quantity = 0;
    double taxRatePercent = 0.0;

    std::cout << "Enter item cost: ";
    std::cin >> itemCost;

    std::cout << "Enter sale price: ";
    std::cin >> salePrice;

    std::cout << "Enter quantity sold: ";
    std::cin >> quantity;

    std::cout << "Enter tax rate (%): ";
    std::cin >> taxRatePercent;

    const double costPerItemWithTax = itemCost + (itemCost * taxRatePercent / 100.0);
    const double totalCostWithTax = costPerItemWithTax * quantity;
    const double profitPerItem = salePrice - costPerItemWithTax;
    const double totalProfit = profitPerItem * quantity;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nTotal cost (with tax): $" << totalCostWithTax << '\n';
    std::cout << "Profit per item: $" << profitPerItem << '\n';
    std::cout << "Total profit: $" << totalProfit << '\n';

    return 0;
}
