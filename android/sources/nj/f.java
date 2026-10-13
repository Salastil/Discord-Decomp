package nj;

import java.nio.charset.Charset;

/* loaded from: classes3.dex */
public abstract class f {
    public static final String a;

    /* renamed from: b, reason: collision with root package name */
    public static final boolean f15531b;

    static {
        String name = Charset.defaultCharset().name();
        a = name;
        f15531b = "SJIS".equalsIgnoreCase(name) || "EUC_JP".equalsIgnoreCase(name);
    }
}
