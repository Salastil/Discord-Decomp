package com.facebook.yoga;

import k0.d;
import ob.a;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@a
/* loaded from: classes3.dex */
public final class YogaLogLevel {

    /* renamed from: d, reason: collision with root package name */
    public static final YogaLogLevel f5156d;

    /* renamed from: e, reason: collision with root package name */
    public static final YogaLogLevel f5157e;

    /* renamed from: i, reason: collision with root package name */
    public static final YogaLogLevel f5158i;

    /* renamed from: v, reason: collision with root package name */
    public static final YogaLogLevel f5159v;

    /* renamed from: w, reason: collision with root package name */
    public static final YogaLogLevel f5160w;

    /* renamed from: x, reason: collision with root package name */
    public static final YogaLogLevel f5161x;

    /* renamed from: y, reason: collision with root package name */
    public static final /* synthetic */ YogaLogLevel[] f5162y;

    static {
        YogaLogLevel yogaLogLevel = new YogaLogLevel("ERROR", 0);
        f5156d = yogaLogLevel;
        YogaLogLevel yogaLogLevel2 = new YogaLogLevel("WARN", 1);
        f5157e = yogaLogLevel2;
        YogaLogLevel yogaLogLevel3 = new YogaLogLevel("INFO", 2);
        f5158i = yogaLogLevel3;
        YogaLogLevel yogaLogLevel4 = new YogaLogLevel("DEBUG", 3);
        f5159v = yogaLogLevel4;
        YogaLogLevel yogaLogLevel5 = new YogaLogLevel("VERBOSE", 4);
        f5160w = yogaLogLevel5;
        YogaLogLevel yogaLogLevel6 = new YogaLogLevel("FATAL", 5);
        f5161x = yogaLogLevel6;
        f5162y = new YogaLogLevel[]{yogaLogLevel, yogaLogLevel2, yogaLogLevel3, yogaLogLevel4, yogaLogLevel5, yogaLogLevel6};
    }

    @a
    public static YogaLogLevel fromInt(int i5) {
        if (i5 == 0) {
            return f5156d;
        }
        if (i5 == 1) {
            return f5157e;
        }
        if (i5 == 2) {
            return f5158i;
        }
        if (i5 == 3) {
            return f5159v;
        }
        if (i5 == 4) {
            return f5160w;
        }
        if (i5 == 5) {
            return f5161x;
        }
        throw new IllegalArgumentException(d.i(i5, "Unknown enum value: "));
    }

    public static YogaLogLevel valueOf(String str) {
        return (YogaLogLevel) Enum.valueOf(YogaLogLevel.class, str);
    }

    public static YogaLogLevel[] values() {
        return (YogaLogLevel[]) f5162y.clone();
    }
}
