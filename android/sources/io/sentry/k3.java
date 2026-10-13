package io.sentry;

/* loaded from: classes3.dex */
public abstract /* synthetic */ class k3 {
    public static final /* synthetic */ int[] a;

    /* renamed from: b, reason: collision with root package name */
    public static final /* synthetic */ int[] f11639b;

    static {
        int[] iArr = new int[io.sentry.rrweb.c.values().length];
        f11639b = iArr;
        try {
            iArr[io.sentry.rrweb.c.IncrementalSnapshot.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            f11639b[io.sentry.rrweb.c.Meta.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            f11639b[io.sentry.rrweb.c.Custom.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
        int[] iArr2 = new int[io.sentry.rrweb.d.values().length];
        a = iArr2;
        try {
            iArr2[io.sentry.rrweb.d.MouseInteraction.ordinal()] = 1;
        } catch (NoSuchFieldError unused4) {
        }
        try {
            a[io.sentry.rrweb.d.TouchMove.ordinal()] = 2;
        } catch (NoSuchFieldError unused5) {
        }
    }
}
