package w3;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class m {
    public static final String a;

    /* renamed from: b, reason: collision with root package name */
    public static final String[] f19658b;

    static {
        String f2 = v3.p.f("WrkDbPathHelper");
        Intrinsics.checkNotNullExpressionValue(f2, "tagWithPrefix(\"WrkDbPathHelper\")");
        a = f2;
        f19658b = new String[]{"-journal", "-shm", "-wal"};
    }
}
