package com.facebook.yoga;

import ha.k;
import ki.b;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class YogaDirection {

    /* renamed from: e, reason: collision with root package name */
    public static final k f5133e;

    /* renamed from: i, reason: collision with root package name */
    public static final YogaDirection f5134i;

    /* renamed from: v, reason: collision with root package name */
    public static final YogaDirection f5135v;

    /* renamed from: w, reason: collision with root package name */
    public static final YogaDirection f5136w;

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ YogaDirection[] f5137x;

    /* renamed from: d, reason: collision with root package name */
    public final int f5138d;

    static {
        YogaDirection yogaDirection = new YogaDirection("INHERIT", 0, 0);
        f5134i = yogaDirection;
        YogaDirection yogaDirection2 = new YogaDirection("LTR", 1, 1);
        f5135v = yogaDirection2;
        YogaDirection yogaDirection3 = new YogaDirection("RTL", 2, 2);
        f5136w = yogaDirection3;
        YogaDirection[] yogaDirectionArr = {yogaDirection, yogaDirection2, yogaDirection3};
        f5137x = yogaDirectionArr;
        b.p(yogaDirectionArr);
        f5133e = new k(14);
    }

    public YogaDirection(String str, int i5, int i6) {
        this.f5138d = i6;
    }

    public static YogaDirection valueOf(String str) {
        return (YogaDirection) Enum.valueOf(YogaDirection.class, str);
    }

    public static YogaDirection[] values() {
        return (YogaDirection[]) f5137x.clone();
    }
}
