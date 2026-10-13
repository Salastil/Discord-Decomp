package j4;

import f4.n;

/* loaded from: classes.dex */
public final class a {

    /* renamed from: b, reason: collision with root package name */
    public static final a f12408b = new a();

    /* renamed from: c, reason: collision with root package name */
    public static final int f12409c;

    /* renamed from: d, reason: collision with root package name */
    public static final int f12410d;
    public final n a = new n(2);

    static {
        int availableProcessors = Runtime.getRuntime().availableProcessors();
        f12409c = availableProcessors + 1;
        f12410d = (availableProcessors * 2) + 1;
    }
}
