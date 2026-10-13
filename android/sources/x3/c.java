package x3;

import a4.e;
import a4.i;
import a5.s;
import android.content.Context;
import android.os.Handler;
import android.text.TextUtils;
import c4.l;
import com.google.android.gms.internal.play_billing.v0;
import e4.j;
import e4.o;
import f4.k;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import k8.d;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.Job;
import ks.n;
import rd.u;
import v3.p;
import v3.y;
import w3.g;

/* loaded from: classes.dex */
public final class c implements g, e, w3.c {
    public static final String L = p.f("GreedyScheduler");
    public final e4.c E;
    public final v3.b F;
    public Boolean H;
    public final i I;
    public final h4.b J;
    public final d K;

    /* renamed from: d, reason: collision with root package name */
    public final Context f20267d;

    /* renamed from: i, reason: collision with root package name */
    public final a f20269i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f20270v;

    /* renamed from: y, reason: collision with root package name */
    public final w3.e f20273y;

    /* renamed from: e, reason: collision with root package name */
    public final HashMap f20268e = new HashMap();

    /* renamed from: w, reason: collision with root package name */
    public final Object f20271w = new Object();

    /* renamed from: x, reason: collision with root package name */
    public final io.sentry.internal.debugmeta.c f20272x = new io.sentry.internal.debugmeta.c(24);
    public final HashMap G = new HashMap();

    public c(Context context, v3.b bVar, l lVar, w3.e eVar, e4.c cVar, h4.b bVar2) {
        this.f20267d = context;
        u uVar = bVar.f19187f;
        this.f20269i = new a(this, uVar, bVar.f19184c);
        this.K = new d(uVar, cVar);
        this.J = bVar2;
        this.I = new i(lVar);
        this.F = bVar;
        this.f20273y = eVar;
        this.E = cVar;
    }

    @Override // w3.g
    public final boolean a() {
        return false;
    }

    @Override // a4.e
    public final void b(o oVar, a4.c cVar) {
        j m5 = n.m(oVar);
        boolean z5 = cVar instanceof a4.a;
        e4.c cVar2 = this.E;
        d dVar = this.K;
        String str = L;
        io.sentry.internal.debugmeta.c cVar3 = this.f20272x;
        if (!z5) {
            p.d().a(str, "Constraints not met: Cancelling work ID " + m5);
            w3.j workSpecId = cVar3.R(m5);
            if (workSpecId != null) {
                dVar.a(workSpecId);
                int i5 = ((a4.b) cVar).a;
                cVar2.getClass();
                Intrinsics.checkNotNullParameter(workSpecId, "workSpecId");
                cVar2.b1(workSpecId, i5);
                return;
            }
            return;
        }
        if (cVar3.E(m5)) {
            return;
        }
        p.d().a(str, "Constraints met: Scheduling work ID " + m5);
        w3.j workSpecId2 = cVar3.U(m5);
        dVar.b(workSpecId2);
        cVar2.getClass();
        Intrinsics.checkNotNullParameter(workSpecId2, "workSpecId");
        Intrinsics.checkNotNullParameter(workSpecId2, "workSpecId");
        ((h4.b) cVar2.f7940i).a(new s((w3.e) cVar2.f7939e, workSpecId2, (e4.e) null));
    }

    @Override // w3.g
    public final void c(String str) {
        Runnable runnable;
        if (this.H == null) {
            this.H = Boolean.valueOf(k.a(this.f20267d, this.F));
        }
        boolean booleanValue = this.H.booleanValue();
        String str2 = L;
        if (!booleanValue) {
            p.d().e(str2, "Ignoring schedule request in non-main process");
            return;
        }
        if (!this.f20270v) {
            this.f20273y.a(this);
            this.f20270v = true;
        }
        p.d().a(str2, "Cancelling work ID " + str);
        a aVar = this.f20269i;
        if (aVar != null && (runnable = (Runnable) aVar.f20265d.remove(str)) != null) {
            ((Handler) aVar.f20263b.f17275e).removeCallbacks(runnable);
        }
        for (w3.j workSpecId : this.f20272x.Q(str)) {
            this.K.a(workSpecId);
            e4.c cVar = this.E;
            cVar.getClass();
            Intrinsics.checkNotNullParameter(workSpecId, "workSpecId");
            cVar.b1(workSpecId, -512);
        }
    }

    @Override // w3.g
    public final void d(o... oVarArr) {
        long max;
        if (this.H == null) {
            this.H = Boolean.valueOf(k.a(this.f20267d, this.F));
        }
        if (!this.H.booleanValue()) {
            p.d().e(L, "Ignoring schedule request in a secondary process");
            return;
        }
        if (!this.f20270v) {
            this.f20273y.a(this);
            this.f20270v = true;
        }
        HashSet hashSet = new HashSet();
        HashSet hashSet2 = new HashSet();
        for (o spec : oVarArr) {
            if (!this.f20272x.E(n.m(spec))) {
                synchronized (this.f20271w) {
                    try {
                        j m5 = n.m(spec);
                        b bVar = (b) this.G.get(m5);
                        if (bVar == null) {
                            int i5 = spec.k;
                            this.F.f19184c.getClass();
                            bVar = new b(i5, System.currentTimeMillis());
                            this.G.put(m5, bVar);
                        }
                        max = (Math.max((spec.k - bVar.a) - 5, 0) * 30000) + bVar.f20266b;
                    } finally {
                    }
                }
                long max2 = Math.max(spec.a(), max);
                this.F.f19184c.getClass();
                long currentTimeMillis = System.currentTimeMillis();
                if (spec.f7967b == y.f19224d) {
                    if (currentTimeMillis < max2) {
                        a aVar = this.f20269i;
                        if (aVar != null) {
                            u uVar = aVar.f20263b;
                            HashMap hashMap = aVar.f20265d;
                            Runnable runnable = (Runnable) hashMap.remove(spec.a);
                            if (runnable != null) {
                                ((Handler) uVar.f17275e).removeCallbacks(runnable);
                            }
                            v0 v0Var = new v0(aVar, spec, 26, false);
                            hashMap.put(spec.a, v0Var);
                            aVar.f20264c.getClass();
                            ((Handler) uVar.f17275e).postDelayed(v0Var, max2 - System.currentTimeMillis());
                        }
                    } else if (spec.b()) {
                        v3.e eVar = spec.j;
                        if (eVar.f19195c) {
                            p.d().a(L, "Ignoring " + spec + ". Requires device idle.");
                        } else if (eVar.a()) {
                            p.d().a(L, "Ignoring " + spec + ". Requires ContentUri triggers.");
                        } else {
                            hashSet.add(spec);
                            hashSet2.add(spec.a);
                        }
                    } else if (!this.f20272x.E(n.m(spec))) {
                        p.d().a(L, "Starting work for " + spec.a);
                        io.sentry.internal.debugmeta.c cVar = this.f20272x;
                        cVar.getClass();
                        Intrinsics.checkNotNullParameter(spec, "spec");
                        w3.j workSpecId = cVar.U(n.m(spec));
                        this.K.b(workSpecId);
                        e4.c cVar2 = this.E;
                        cVar2.getClass();
                        Intrinsics.checkNotNullParameter(workSpecId, "workSpecId");
                        Intrinsics.checkNotNullParameter(workSpecId, "workSpecId");
                        ((h4.b) cVar2.f7940i).a(new s((w3.e) cVar2.f7939e, workSpecId, (e4.e) null));
                    }
                }
            }
        }
        synchronized (this.f20271w) {
            try {
                if (!hashSet.isEmpty()) {
                    p.d().a(L, "Starting tracking for " + TextUtils.join(",", hashSet2));
                    Iterator it = hashSet.iterator();
                    while (it.hasNext()) {
                        o oVar = (o) it.next();
                        j m6 = n.m(oVar);
                        if (!this.f20268e.containsKey(m6)) {
                            this.f20268e.put(m6, a4.l.a(this.I, oVar, this.J.f9516b, this));
                        }
                    }
                }
            } finally {
            }
        }
    }

    @Override // w3.c
    public final void e(j jVar, boolean z5) {
        Job job;
        w3.j R = this.f20272x.R(jVar);
        if (R != null) {
            this.K.a(R);
        }
        synchronized (this.f20271w) {
            job = (Job) this.f20268e.remove(jVar);
        }
        if (job != null) {
            p.d().a(L, "Stopping tracking for " + jVar);
            job.f(null);
        }
        if (z5) {
            return;
        }
        synchronized (this.f20271w) {
            this.G.remove(jVar);
        }
    }
}
