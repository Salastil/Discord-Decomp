package net.time4j;

import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public abstract /* synthetic */ class l0 {
    public static final /* synthetic */ int[] a;

    /* renamed from: b, reason: collision with root package name */
    public static final /* synthetic */ int[] f15269b;

    /* renamed from: c, reason: collision with root package name */
    public static final /* synthetic */ int[] f15270c;

    static {
        int[] iArr = new int[TimeUnit.values().length];
        f15270c = iArr;
        try {
            iArr[TimeUnit.DAYS.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            f15270c[TimeUnit.HOURS.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            f15270c[TimeUnit.MINUTES.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
        try {
            f15270c[TimeUnit.SECONDS.ordinal()] = 4;
        } catch (NoSuchFieldError unused4) {
        }
        try {
            f15270c[TimeUnit.MILLISECONDS.ordinal()] = 5;
        } catch (NoSuchFieldError unused5) {
        }
        try {
            f15270c[TimeUnit.MICROSECONDS.ordinal()] = 6;
        } catch (NoSuchFieldError unused6) {
        }
        try {
            f15270c[TimeUnit.NANOSECONDS.ordinal()] = 7;
        } catch (NoSuchFieldError unused7) {
        }
        int[] iArr2 = new int[g1.values().length];
        f15269b = iArr2;
        try {
            iArr2[0] = 1;
        } catch (NoSuchFieldError unused8) {
        }
        try {
            f15269b[1] = 2;
        } catch (NoSuchFieldError unused9) {
        }
        int[] iArr3 = new int[ns.e.values().length];
        a = iArr3;
        try {
            iArr3[0] = 1;
        } catch (NoSuchFieldError unused10) {
        }
        try {
            a[1] = 2;
        } catch (NoSuchFieldError unused11) {
        }
        try {
            a[2] = 3;
        } catch (NoSuchFieldError unused12) {
        }
        try {
            a[3] = 4;
        } catch (NoSuchFieldError unused13) {
        }
        try {
            a[4] = 5;
        } catch (NoSuchFieldError unused14) {
        }
        try {
            a[5] = 6;
        } catch (NoSuchFieldError unused15) {
        }
    }
}
