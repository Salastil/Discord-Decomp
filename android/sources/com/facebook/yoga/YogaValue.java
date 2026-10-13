package com.facebook.yoga;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class YogaValue {

    /* renamed from: c, reason: collision with root package name */
    public static final YogaValue f5190c = new YogaValue(Float.NaN, YogaUnit.UNDEFINED);

    /* renamed from: d, reason: collision with root package name */
    public static final YogaValue f5191d;
    public final float a;

    /* renamed from: b, reason: collision with root package name */
    public final YogaUnit f5192b;

    static {
        new YogaValue(0.0f, YogaUnit.POINT);
        f5191d = new YogaValue(Float.NaN, YogaUnit.AUTO);
    }

    public YogaValue(float f2, YogaUnit unit) {
        Intrinsics.checkNotNullParameter(unit, "unit");
        this.a = f2;
        this.f5192b = unit;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof YogaValue) {
            YogaValue yogaValue = (YogaValue) obj;
            YogaUnit yogaUnit = yogaValue.f5192b;
            YogaUnit yogaUnit2 = this.f5192b;
            if (yogaUnit2 == yogaUnit) {
                return yogaUnit2 == YogaUnit.UNDEFINED || yogaUnit2 == YogaUnit.AUTO || Float.compare(this.a, yogaValue.a) == 0;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Float.floatToIntBits(this.a) + this.f5192b.f5189d;
    }

    public final String toString() {
        int ordinal = this.f5192b.ordinal();
        if (ordinal == 0) {
            return "undefined";
        }
        float f2 = this.a;
        if (ordinal == 1) {
            return String.valueOf(f2);
        }
        if (ordinal != 2) {
            if (ordinal == 3) {
                return "auto";
            }
            throw new IllegalStateException();
        }
        return f2 + "%";
    }
}
