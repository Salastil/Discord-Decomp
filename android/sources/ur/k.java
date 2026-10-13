package ur;

import java.util.concurrent.TimeUnit;
import kotlin.jvm.internal.LongCompanionObject;
import sr.w;

/* loaded from: classes3.dex */
public abstract class k {
    public static final String a;

    /* renamed from: b, reason: collision with root package name */
    public static final long f19100b;

    /* renamed from: c, reason: collision with root package name */
    public static final int f19101c;

    /* renamed from: d, reason: collision with root package name */
    public static final int f19102d;

    /* renamed from: e, reason: collision with root package name */
    public static final long f19103e;

    /* renamed from: f, reason: collision with root package name */
    public static final g f19104f;

    static {
        String str;
        int i5 = w.a;
        try {
            str = System.getProperty("kotlinx.coroutines.scheduler.default.name");
        } catch (SecurityException unused) {
            str = null;
        }
        if (str == null) {
            str = "DefaultDispatcher";
        }
        a = str;
        f19100b = sr.h.i(100000L, 1L, LongCompanionObject.MAX_VALUE, "kotlinx.coroutines.scheduler.resolution.ns");
        int i6 = w.a;
        if (i6 < 2) {
            i6 = 2;
        }
        f19101c = sr.h.j(i6, 8, "kotlinx.coroutines.scheduler.core.pool.size");
        f19102d = sr.h.j(2097150, 4, "kotlinx.coroutines.scheduler.max.pool.size");
        f19103e = TimeUnit.SECONDS.toNanos(sr.h.i(60L, 1L, LongCompanionObject.MAX_VALUE, "kotlinx.coroutines.scheduler.keep.alive.sec"));
        f19104f = g.a;
    }
}
