package be;

import a3.e;
import android.graphics.Color;

/* loaded from: classes3.dex */
public final class d {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final int f2828b;

    /* renamed from: c, reason: collision with root package name */
    public final Integer f2829c;

    /* renamed from: d, reason: collision with root package name */
    public final Integer f2830d;

    /* renamed from: e, reason: collision with root package name */
    public final float f2831e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f2832f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f2833g;

    /* renamed from: h, reason: collision with root package name */
    public final boolean f2834h;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f2835i;
    public final int j;

    public d(String str, int i5, Integer num, Integer num2, float f2, boolean z5, boolean z6, boolean z7, boolean z8, int i6) {
        this.a = str;
        this.f2828b = i5;
        this.f2829c = num;
        this.f2830d = num2;
        this.f2831e = f2;
        this.f2832f = z5;
        this.f2833g = z6;
        this.f2834h = z7;
        this.f2835i = z8;
        this.j = i6;
    }

    public static int a(String str) {
        boolean z5;
        try {
            int parseInt = Integer.parseInt(str.trim());
            switch (parseInt) {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                    z5 = true;
                    break;
                default:
                    z5 = false;
                    break;
            }
            if (z5) {
                return parseInt;
            }
        } catch (NumberFormatException unused) {
        }
        e.x("Ignoring unknown alignment: ", str, "SsaStyle");
        return -1;
    }

    public static boolean b(String str) {
        try {
            int parseInt = Integer.parseInt(str);
            return parseInt == 1 || parseInt == -1;
        } catch (NumberFormatException e9) {
            ke.b.O("SsaStyle", "Failed to parse boolean value: '" + str + "'", e9);
            return false;
        }
    }

    public static Integer c(String str) {
        try {
            long parseLong = str.startsWith("&H") ? Long.parseLong(str.substring(2), 16) : Long.parseLong(str);
            ke.b.g(parseLong <= 4294967295L);
            return Integer.valueOf(Color.argb(ki.b.d(((parseLong >> 24) & 255) ^ 255), ki.b.d(parseLong & 255), ki.b.d((parseLong >> 8) & 255), ki.b.d((parseLong >> 16) & 255)));
        } catch (IllegalArgumentException e9) {
            ke.b.O("SsaStyle", "Failed to parse color expression: '" + str + "'", e9);
            return null;
        }
    }
}
