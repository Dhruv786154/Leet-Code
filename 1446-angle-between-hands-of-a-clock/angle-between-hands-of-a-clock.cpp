class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minuteHand = 6*minutes;
        double hourAngle = (hour % 12) * 30 + minutes * 0.5;

        double angle  = abs(hourAngle - minuteHand);

        angle = min(angle , 360 - angle);        
        return angle;
    }
};