#include <iostream>
#include <string>

using namespace std;

// PTA 7-13 日K蜡烛图：根据开、高、低、收盘价判断蜡烛类型和影线。
int main()
{
    double open_price, high_price, low_price, close_price;
    string candle_type;

    cin >> open_price >> high_price >> low_price >> close_price;

    if (close_price < open_price)
    {
        candle_type = "BW-Solid";
    }
    else if (close_price > open_price)
    {
        candle_type = "R-Hollow";
    }
    else
    {
        candle_type = "R-Cross";
    }

    const bool has_lower_shadow =
        low_price < open_price && low_price < close_price;
    const bool has_upper_shadow =
        high_price > open_price && high_price > close_price;

    cout << candle_type;

    if (has_lower_shadow && has_upper_shadow)
    {
        cout << " with Lower Shadow and Upper Shadow";
    }
    else if (has_lower_shadow)
    {
        cout << " with Lower Shadow";
    }
    else if (has_upper_shadow)
    {
        cout << " with Upper Shadow";
    }

    cout << '\n';

    return 0;
}
