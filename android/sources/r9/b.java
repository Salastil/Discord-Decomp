package r9;

import android.os.Handler;
import fo.l;
import fo.u;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicInteger;
import yo.j;

/* loaded from: classes3.dex */
public abstract class b {
    public static final AtomicInteger a = new AtomicInteger(0);

    /* renamed from: b, reason: collision with root package name */
    public static final AtomicInteger f17151b = new AtomicInteger(0);

    /* renamed from: c, reason: collision with root package name */
    public static final AtomicInteger f17152c = new AtomicInteger(0);

    /* renamed from: d, reason: collision with root package name */
    public static final ConcurrentHashMap f17153d = new ConcurrentHashMap();

    /* renamed from: e, reason: collision with root package name */
    public static final u f17154e;

    /* renamed from: f, reason: collision with root package name */
    public static final cc.a f17155f;

    /* renamed from: g, reason: collision with root package name */
    public static final cc.a f17156g;

    static {
        u a10 = l.a(new o5.a(22));
        f17154e = a10;
        cc.a aVar = new cc.a(18);
        f17155f = aVar;
        cc.a aVar2 = new cc.a(19);
        f17156g = aVar2;
        ((Handler) a10.getValue()).post(aVar);
        ((Handler) a10.getValue()).post(aVar2);
    }

    public static void a(p9.e eVar, int i5) {
        int i6 = eVar.a;
        p9.f fVar = eVar.f16330b;
        float f2 = i6 * 0.5f;
        if (f2 < 1.0f) {
            f2 = 1.0f;
        }
        int d6 = j.d(fVar.G + i5, (int) f2, i6);
        int i10 = fVar.G;
        if (d6 == i10 || d6 == i10) {
            return;
        }
        fVar.G = j.d(d6, 1, fVar.F);
        d e9 = fVar.e();
        if (e9 != null) {
            e9.a(fVar.G);
        }
    }
}
