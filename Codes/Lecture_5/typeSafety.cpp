#include <iostream>
#include <utility>


template <class rep , class period >
void blink_led (duration <rep , period > blink_time ) {
// millisecond is the smallest relevant unit
auto x_ms = duration_cast<milliseconds>( blink_time );
// do something else with x_ms
}
void use () {
blink_led (2s);
blink_led (150ms);
blink_led (150);
}

int main(){

    use();
    return 0;
}