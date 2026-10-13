package ie;

import android.content.Context;
import android.os.Handler;
import java.lang.ref.WeakReference;
import java.util.HashMap;
import java.util.Iterator;
import java.util.concurrent.CopyOnWriteArrayList;

/* loaded from: classes3.dex */
public final class s implements g, u0 {

    /* renamed from: n, reason: collision with root package name */
    public static final fi.r0 f10737n = fi.e0.p(4400000L, 3200000L, 2300000L, 1600000L, 810000L);

    /* renamed from: o, reason: collision with root package name */
    public static final fi.r0 f10738o = fi.e0.p(1400000L, 990000L, 730000L, 510000L, 230000L);

    /* renamed from: p, reason: collision with root package name */
    public static final fi.r0 f10739p = fi.e0.p(2100000L, 1400000L, 1000000L, 890000L, 640000L);

    /* renamed from: q, reason: collision with root package name */
    public static final fi.r0 f10740q = fi.e0.p(2600000L, 1700000L, 1300000L, 1000000L, 700000L);

    /* renamed from: r, reason: collision with root package name */
    public static final fi.r0 f10741r = fi.e0.p(5700000L, 3700000L, 2300000L, 1700000L, 990000L);

    /* renamed from: s, reason: collision with root package name */
    public static final fi.r0 f10742s = fi.e0.p(2800000L, 1800000L, 1400000L, 1100000L, 870000L);

    /* renamed from: t, reason: collision with root package name */
    public static s f10743t;
    public final fi.w0 a;

    /* renamed from: b, reason: collision with root package name */
    public final u4.b f10744b = new u4.b(16);

    /* renamed from: c, reason: collision with root package name */
    public final r0 f10745c;

    /* renamed from: d, reason: collision with root package name */
    public final ke.y f10746d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f10747e;

    /* renamed from: f, reason: collision with root package name */
    public int f10748f;

    /* renamed from: g, reason: collision with root package name */
    public long f10749g;

    /* renamed from: h, reason: collision with root package name */
    public long f10750h;

    /* renamed from: i, reason: collision with root package name */
    public int f10751i;
    public long j;
    public long k;

    /* renamed from: l, reason: collision with root package name */
    public long f10752l;

    /* renamed from: m, reason: collision with root package name */
    public long f10753m;

    public s(Context context, HashMap hashMap, int i5, ke.y yVar, boolean z5) {
        this.a = fi.w0.a(hashMap);
        this.f10745c = new r0(i5);
        this.f10746d = yVar;
        this.f10747e = z5;
        if (context == null) {
            this.f10751i = 0;
            this.f10752l = a(0);
            return;
        }
        ke.u e9 = ke.u.e(context);
        int f2 = e9.f();
        this.f10751i = f2;
        this.f10752l = a(f2);
        r rVar = new r(this);
        CopyOnWriteArrayList copyOnWriteArrayList = (CopyOnWriteArrayList) e9.f13354d;
        Iterator it = copyOnWriteArrayList.iterator();
        while (it.hasNext()) {
            WeakReference weakReference = (WeakReference) it.next();
            if (weakReference.get() == null) {
                copyOnWriteArrayList.remove(weakReference);
            }
        }
        copyOnWriteArrayList.add(new WeakReference(rVar));
        ((Handler) e9.f13353c).post(new jc.b0(1, e9, rVar));
    }

    public final long a(int i5) {
        Integer valueOf = Integer.valueOf(i5);
        fi.w0 w0Var = this.a;
        Long l6 = (Long) w0Var.get(valueOf);
        if (l6 == null) {
            l6 = (Long) w0Var.get(0);
        }
        if (l6 == null) {
            l6 = 1000000L;
        }
        return l6.longValue();
    }

    public final void b(int i5, long j, long j5) {
        int i6;
        long j7;
        long j10;
        if (i5 == 0 && j == 0 && j5 == this.f10753m) {
            return;
        }
        this.f10753m = j5;
        Iterator it = ((CopyOnWriteArrayList) this.f10744b.f18810e).iterator();
        while (it.hasNext()) {
            e eVar = (e) it.next();
            if (eVar.f10665c) {
                i6 = i5;
                j7 = j;
                j10 = j5;
            } else {
                i6 = i5;
                j7 = j;
                j10 = j5;
                eVar.a.post(new d(eVar, i6, j7, j10, 0));
            }
            i5 = i6;
            j = j7;
            j5 = j10;
        }
    }
}
