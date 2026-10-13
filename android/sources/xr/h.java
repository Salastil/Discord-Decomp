package xr;

import bs.g1;
import bs.m;
import bs.r;
import bs.r1;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kr.n;
import sr.x;

/* loaded from: classes3.dex */
public abstract class h {
    public static final r1 a;

    /* renamed from: b, reason: collision with root package name */
    public static final r1 f20561b;

    /* renamed from: c, reason: collision with root package name */
    public static final g1 f20562c;

    /* renamed from: d, reason: collision with root package name */
    public static final g1 f20563d;

    static {
        n factory = new n(22);
        boolean z5 = m.a;
        Intrinsics.checkNotNullParameter(factory, "factory");
        boolean z6 = m.a;
        a = z6 ? new r(factory) : new e4.r((Function1) factory);
        n factory2 = new n(23);
        Intrinsics.checkNotNullParameter(factory2, "factory");
        f20561b = z6 ? new r(factory2) : new e4.r((Function1) factory2);
        x factory3 = new x(6);
        Intrinsics.checkNotNullParameter(factory3, "factory");
        f20562c = z6 ? new r(factory3) : new io.sentry.internal.debugmeta.c(factory3);
        x factory4 = new x(7);
        Intrinsics.checkNotNullParameter(factory4, "factory");
        f20563d = z6 ? new r(factory4) : new io.sentry.internal.debugmeta.c(factory4);
    }
}
