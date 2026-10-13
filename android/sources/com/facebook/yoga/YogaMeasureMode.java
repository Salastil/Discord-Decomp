package com.facebook.yoga;

import k0.d;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class YogaMeasureMode {

    /* renamed from: d, reason: collision with root package name */
    public static final YogaMeasureMode f5163d;

    /* renamed from: e, reason: collision with root package name */
    public static final YogaMeasureMode f5164e;

    /* renamed from: i, reason: collision with root package name */
    public static final YogaMeasureMode f5165i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ YogaMeasureMode[] f5166v;

    static {
        YogaMeasureMode yogaMeasureMode = new YogaMeasureMode("UNDEFINED", 0);
        f5163d = yogaMeasureMode;
        YogaMeasureMode yogaMeasureMode2 = new YogaMeasureMode("EXACTLY", 1);
        f5164e = yogaMeasureMode2;
        YogaMeasureMode yogaMeasureMode3 = new YogaMeasureMode("AT_MOST", 2);
        f5165i = yogaMeasureMode3;
        f5166v = new YogaMeasureMode[]{yogaMeasureMode, yogaMeasureMode2, yogaMeasureMode3};
    }

    public static YogaMeasureMode a(int i5) {
        if (i5 == 0) {
            return f5163d;
        }
        if (i5 == 1) {
            return f5164e;
        }
        if (i5 == 2) {
            return f5165i;
        }
        throw new IllegalArgumentException(d.i(i5, "Unknown enum value: "));
    }

    public static YogaMeasureMode valueOf(String str) {
        return (YogaMeasureMode) Enum.valueOf(YogaMeasureMode.class, str);
    }

    public static YogaMeasureMode[] values() {
        return (YogaMeasureMode[]) f5166v.clone();
    }
}
