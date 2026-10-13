package com.swmansion.reanimated.sensor;

/* loaded from: classes3.dex */
public enum ReanimatedSensorType {
    ACCELEROMETER(10),
    GYROSCOPE(4),
    GRAVITY(9),
    MAGNETIC_FIELD(2),
    ROTATION_VECTOR(11);

    private final int type;

    ReanimatedSensorType(int i5) {
        this.type = i5;
    }

    public static ReanimatedSensorType getInstanceById(int i5) {
        if (i5 == 1) {
            return ACCELEROMETER;
        }
        if (i5 == 2) {
            return GYROSCOPE;
        }
        if (i5 == 3) {
            return GRAVITY;
        }
        if (i5 == 4) {
            return MAGNETIC_FIELD;
        }
        if (i5 == 5) {
            return ROTATION_VECTOR;
        }
        throw new IllegalArgumentException("[Reanimated] Unknown sensor type.");
    }

    public int getType() {
        return this.type;
    }
}
