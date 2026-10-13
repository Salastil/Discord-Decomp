package com.otaliastudios.zoom;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class ScaledPoint {
    public float a;

    /* renamed from: b, reason: collision with root package name */
    public float f6619b;

    public /* synthetic */ ScaledPoint() {
        this(0.0f, 0.0f);
    }

    public static AbsolutePoint b(ScaledPoint scaledPoint, float f2) {
        AbsolutePoint outPoint = new AbsolutePoint();
        scaledPoint.getClass();
        Intrinsics.checkNotNullParameter(outPoint, "outPoint");
        outPoint.c(Float.valueOf(scaledPoint.a / f2), Float.valueOf(scaledPoint.f6619b / f2));
        return outPoint;
    }

    public final void a(Float x5, Float y5) {
        Intrinsics.checkNotNullParameter(x5, "x");
        Intrinsics.checkNotNullParameter(y5, "y");
        this.a = x5.floatValue();
        this.f6619b = y5.floatValue();
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof ScaledPoint)) {
            return false;
        }
        ScaledPoint scaledPoint = (ScaledPoint) obj;
        return Intrinsics.areEqual((Object) Float.valueOf(this.a), (Object) Float.valueOf(scaledPoint.a)) && Intrinsics.areEqual((Object) Float.valueOf(this.f6619b), (Object) Float.valueOf(scaledPoint.f6619b));
    }

    public final int hashCode() {
        return Float.hashCode(this.f6619b) + (Float.hashCode(this.a) * 31);
    }

    public final String toString() {
        return "ScaledPoint(x=" + this.a + ", y=" + this.f6619b + ')';
    }

    public ScaledPoint(float f2, float f10) {
        this.a = f2;
        this.f6619b = f10;
    }
}
