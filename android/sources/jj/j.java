package jj;

/* loaded from: classes3.dex */
public abstract class j extends Exception {

    /* renamed from: d, reason: collision with root package name */
    public static final boolean f12801d;

    /* renamed from: e, reason: collision with root package name */
    public static final StackTraceElement[] f12802e;

    static {
        f12801d = System.getProperty("surefire.test.class.path") != null;
        f12802e = new StackTraceElement[0];
    }

    @Override // java.lang.Throwable
    public final synchronized Throwable fillInStackTrace() {
        return null;
    }
}
