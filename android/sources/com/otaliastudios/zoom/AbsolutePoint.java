package com.otaliastudios.zoom;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class AbsolutePoint {
    public float a;

    /* renamed from: b, reason: collision with root package name */
    public float f6616b;

    public /* synthetic */ AbsolutePoint() {
        this(0.0f, 0.0f);
    }

    public final AbsolutePoint a(AbsolutePoint absolutePoint) {
        Intrinsics.checkNotNullParameter(absolutePoint, "absolutePoint");
        return new AbsolutePoint(this.a + absolutePoint.a, this.f6616b + absolutePoint.f6616b);
    }

    public final void b(AbsolutePoint p3) {
        Intrinsics.checkNotNullParameter(p3, "p");
        c(Float.valueOf(p3.a), Float.valueOf(p3.f6616b));
    }

    public final void c(Float x5, Float y5) {
        Intrinsics.checkNotNullParameter(x5, "x");
        Intrinsics.checkNotNullParameter(y5, "y");
        this.a = x5.floatValue();
        this.f6616b = y5.floatValue();
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof AbsolutePoint)) {
            return false;
        }
        AbsolutePoint absolutePoint = (AbsolutePoint) obj;
        return Intrinsics.areEqual((Object) Float.valueOf(this.a), (Object) Float.valueOf(absolutePoint.a)) && Intrinsics.areEqual((Object) Float.valueOf(this.f6616b), (Object) Float.valueOf(absolutePoint.f6616b));
    }

    public final int hashCode() {
        return Float.hashCode(this.f6616b) + (Float.hashCode(this.a) * 31);
    }

    public final String toString() {
        return "AbsolutePoint(x=" + this.a + ", y=" + this.f6616b + ')';
    }

    public AbsolutePoint(float f2, float f10) {
        this.a = f2;
        this.f6616b = f10;
    }
}
