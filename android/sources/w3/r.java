package w3;

import android.content.Context;
import android.database.Cursor;
import androidx.appcompat.widget.b4;
import androidx.work.WorkerParameters;
import androidx.work.impl.WorkDatabase;
import androidx.work.impl.WorkDatabase_Impl;
import androidx.work.impl.background.systemalarm.RescheduleReceiver;
import com.google.android.gms.internal.play_billing.v0;
import f4.s;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.UUID;
import java.util.concurrent.ExecutorService;
import jc.b0;
import kotlin.jvm.internal.Intrinsics;
import v3.a0;
import v3.y;

/* loaded from: classes.dex */
public final class r implements Runnable {
    public static final String O = v3.p.f("WorkerWrapper");
    public final v3.r E;
    public final e F;
    public final WorkDatabase G;
    public final e4.p H;
    public final e4.c I;
    public final ArrayList J;
    public String K;

    /* renamed from: d, reason: collision with root package name */
    public final Context f19672d;

    /* renamed from: e, reason: collision with root package name */
    public final String f19673e;

    /* renamed from: i, reason: collision with root package name */
    public final e4.o f19674i;

    /* renamed from: v, reason: collision with root package name */
    public v3.o f19675v;

    /* renamed from: w, reason: collision with root package name */
    public final h4.b f19676w;

    /* renamed from: y, reason: collision with root package name */
    public final v3.b f19678y;

    /* renamed from: x, reason: collision with root package name */
    public v3.n f19677x = new v3.k();
    public final g4.j L = new g4.j();
    public final g4.j M = new g4.j();
    public volatile int N = -256;

    public r(b4 b4Var) {
        this.f19672d = (Context) b4Var.f927d;
        this.f19676w = (h4.b) b4Var.f929i;
        this.F = (e) b4Var.f928e;
        e4.o oVar = (e4.o) b4Var.f932x;
        this.f19674i = oVar;
        this.f19673e = oVar.a;
        this.f19675v = null;
        v3.b bVar = (v3.b) b4Var.f930v;
        this.f19678y = bVar;
        this.E = bVar.f19184c;
        WorkDatabase workDatabase = (WorkDatabase) b4Var.f931w;
        this.G = workDatabase;
        this.H = workDatabase.t();
        this.I = workDatabase.f();
        this.J = (ArrayList) b4Var.f933y;
    }

    public final void a(v3.n nVar) {
        boolean z5 = nVar instanceof v3.m;
        e4.o oVar = this.f19674i;
        String str = O;
        if (!z5) {
            if (nVar instanceof v3.l) {
                v3.p.d().e(str, "Worker result RETRY for " + this.K);
                c();
                return;
            }
            v3.p.d().e(str, "Worker result FAILURE for " + this.K);
            if (oVar.c()) {
                d();
                return;
            } else {
                g();
                return;
            }
        }
        v3.p.d().e(str, "Worker result SUCCESS for " + this.K);
        if (oVar.c()) {
            d();
            return;
        }
        e4.c cVar = this.I;
        String str2 = this.f19673e;
        e4.p pVar = this.H;
        WorkDatabase workDatabase = this.G;
        workDatabase.c();
        try {
            pVar.t(y.f19226i, str2);
            pVar.s(str2, ((v3.m) this.f19677x).a);
            this.E.getClass();
            long currentTimeMillis = System.currentTimeMillis();
            Iterator it = cVar.T0(str2).iterator();
            while (it.hasNext()) {
                String str3 = (String) it.next();
                if (pVar.k(str3) == y.f19228w) {
                    WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) cVar.f7939e;
                    a3.o g6 = a3.o.g(1, "SELECT COUNT(*)=0 FROM dependency WHERE work_spec_id=? AND prerequisite_id IN (SELECT id FROM workspec WHERE state!=2)");
                    if (str3 == null) {
                        g6.S(1);
                    } else {
                        g6.n(1, str3);
                    }
                    workDatabase_Impl.b();
                    Cursor D = nt.a.D(workDatabase_Impl, g6);
                    try {
                        if (D.moveToFirst() && D.getInt(0) != 0) {
                            v3.p.d().e(str, "Setting status to enqueued for " + str3);
                            pVar.t(y.f19224d, str3);
                            pVar.r(currentTimeMillis, str3);
                        }
                    } finally {
                        D.close();
                        g6.i();
                    }
                }
            }
            workDatabase.o();
            workDatabase.k();
            e(false);
        } catch (Throwable th2) {
            workDatabase.k();
            e(false);
            throw th2;
        }
    }

    public final void b() {
        if (h()) {
            return;
        }
        this.G.c();
        try {
            y k = this.H.k(this.f19673e);
            e4.m s2 = this.G.s();
            String str = this.f19673e;
            WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) s2.f7963e;
            workDatabase_Impl.b();
            e4.h hVar = (e4.h) s2.f7964i;
            h3.j a = hVar.a();
            if (str == null) {
                a.S(1);
            } else {
                a.n(1, str);
            }
            workDatabase_Impl.c();
            try {
                a.c();
                workDatabase_Impl.o();
                if (k == null) {
                    e(false);
                } else if (k == y.f19225e) {
                    a(this.f19677x);
                } else if (!k.a()) {
                    this.N = -512;
                    c();
                }
                this.G.o();
                this.G.k();
            } finally {
                workDatabase_Impl.k();
                hVar.e(a);
            }
        } catch (Throwable th2) {
            this.G.k();
            throw th2;
        }
    }

    public final void c() {
        String str = this.f19673e;
        e4.p pVar = this.H;
        WorkDatabase workDatabase = this.G;
        workDatabase.c();
        try {
            pVar.t(y.f19224d, str);
            this.E.getClass();
            pVar.r(System.currentTimeMillis(), str);
            pVar.q(this.f19674i.f7985v, str);
            pVar.p(-1L, str);
            workDatabase.o();
        } finally {
            workDatabase.k();
            e(true);
        }
    }

    public final void d() {
        String str = this.f19673e;
        e4.p pVar = this.H;
        WorkDatabase workDatabase = this.G;
        workDatabase.c();
        try {
            this.E.getClass();
            pVar.r(System.currentTimeMillis(), str);
            WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) pVar.a;
            pVar.t(y.f19224d, str);
            workDatabase_Impl.b();
            e4.h hVar = (e4.h) pVar.j;
            h3.j a = hVar.a();
            if (str == null) {
                a.S(1);
            } else {
                a.n(1, str);
            }
            workDatabase_Impl.c();
            try {
                a.c();
                workDatabase_Impl.o();
                workDatabase_Impl.k();
                hVar.e(a);
                pVar.q(this.f19674i.f7985v, str);
                workDatabase_Impl.b();
                hVar = (e4.h) pVar.f7991f;
                a = hVar.a();
                if (str == null) {
                    a.S(1);
                } else {
                    a.n(1, str);
                }
                workDatabase_Impl.c();
                try {
                    a.c();
                    workDatabase_Impl.o();
                    workDatabase_Impl.k();
                    hVar.e(a);
                    pVar.p(-1L, str);
                    workDatabase.o();
                } finally {
                }
            } finally {
            }
        } finally {
            workDatabase.k();
            e(false);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0039 A[Catch: all -> 0x0041, TryCatch #0 {all -> 0x0041, blocks: (B:3:0x0005, B:10:0x0031, B:12:0x0039, B:14:0x0045, B:15:0x0060, B:22:0x0074, B:23:0x007a, B:5:0x0020, B:7:0x0026), top: B:2:0x0005, inners: #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:14:0x0045 A[Catch: all -> 0x0041, TryCatch #0 {all -> 0x0041, blocks: (B:3:0x0005, B:10:0x0031, B:12:0x0039, B:14:0x0045, B:15:0x0060, B:22:0x0074, B:23:0x007a, B:5:0x0020, B:7:0x0026), top: B:2:0x0005, inners: #1 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void e(boolean z5) {
        boolean z6;
        this.G.c();
        try {
            e4.p t5 = this.G.t();
            t5.getClass();
            a3.o g6 = a3.o.g(0, "SELECT COUNT(*) > 0 FROM workspec WHERE state NOT IN (2, 3, 5) LIMIT 1");
            WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) t5.a;
            workDatabase_Impl.b();
            Cursor D = nt.a.D(workDatabase_Impl, g6);
            try {
                if (D.moveToFirst()) {
                    if (D.getInt(0) != 0) {
                        z6 = true;
                        if (!z6) {
                            f4.j.a(this.f19672d, RescheduleReceiver.class, false);
                        }
                        if (z5) {
                            this.H.t(y.f19224d, this.f19673e);
                            this.H.u(this.N, this.f19673e);
                            this.H.p(-1L, this.f19673e);
                        }
                        this.G.o();
                        this.G.k();
                        this.L.j(Boolean.valueOf(z5));
                    }
                }
                z6 = false;
                if (!z6) {
                }
                if (z5) {
                }
                this.G.o();
                this.G.k();
                this.L.j(Boolean.valueOf(z5));
            } finally {
                D.close();
                g6.i();
            }
        } catch (Throwable th2) {
            this.G.k();
            throw th2;
        }
    }

    public final void f() {
        e4.p pVar = this.H;
        String str = this.f19673e;
        y k = pVar.k(str);
        y yVar = y.f19225e;
        String str2 = O;
        if (k == yVar) {
            v3.p.d().a(str2, "Status for " + str + " is RUNNING; not doing any work and rescheduling for later execution");
            e(true);
            return;
        }
        v3.p.d().a(str2, "Status for " + str + " is " + k + " ; not doing any work");
        e(false);
    }

    public final void g() {
        String str = this.f19673e;
        WorkDatabase workDatabase = this.G;
        workDatabase.c();
        try {
            LinkedList linkedList = new LinkedList();
            linkedList.add(str);
            while (true) {
                boolean isEmpty = linkedList.isEmpty();
                e4.p pVar = this.H;
                if (isEmpty) {
                    v3.f fVar = ((v3.k) this.f19677x).a;
                    pVar.q(this.f19674i.f7985v, str);
                    pVar.s(str, fVar);
                    workDatabase.o();
                    return;
                }
                String str2 = (String) linkedList.remove();
                if (pVar.k(str2) != y.f19229x) {
                    pVar.t(y.f19227v, str2);
                }
                linkedList.addAll(this.I.T0(str2));
            }
        } finally {
            workDatabase.k();
            e(false);
        }
    }

    public final boolean h() {
        if (this.N == -256) {
            return false;
        }
        v3.p.d().a(O, "Work interrupted for " + this.K);
        if (this.H.k(this.f19673e) == null) {
            e(false);
        } else {
            e(!r0.a());
        }
        return true;
    }

    /* JADX WARN: Code restructure failed: missing block: B:30:0x0092, code lost:
    
        if ((r4.f7967b == r11 && r4.k > 0) != false) goto L31;
     */
    @Override // java.lang.Runnable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void run() {
        v3.h hVar;
        v3.f a;
        boolean z5;
        StringBuilder sb2 = new StringBuilder("Work [ id=");
        String str = this.f19673e;
        sb2.append(str);
        sb2.append(", tags={ ");
        ArrayList arrayList = this.J;
        Iterator it = arrayList.iterator();
        boolean z6 = true;
        while (it.hasNext()) {
            String str2 = (String) it.next();
            if (z6) {
                z6 = false;
            } else {
                sb2.append(", ");
            }
            sb2.append(str2);
        }
        sb2.append(" } ]");
        this.K = sb2.toString();
        e4.o oVar = this.f19674i;
        if (h()) {
            return;
        }
        WorkDatabase workDatabase = this.G;
        workDatabase.c();
        try {
            y yVar = oVar.f7967b;
            String className = oVar.f7969d;
            String str3 = oVar.f7968c;
            y yVar2 = y.f19224d;
            String str4 = O;
            if (yVar != yVar2) {
                f();
                workDatabase.o();
                v3.p.d().a(str4, str3 + " is not in ENQUEUED state. Nothing more to do");
                return;
            }
            if (!oVar.c()) {
            }
            this.E.getClass();
            if (System.currentTimeMillis() < oVar.a()) {
                v3.p.d().a(str4, "Delaying execution for " + str3 + " because it is being executed before schedule.");
                e(true);
                workDatabase.o();
                return;
            }
            workDatabase.o();
            workDatabase.k();
            boolean c6 = oVar.c();
            e4.p pVar = this.H;
            v3.b bVar = this.f19678y;
            if (c6) {
                a = oVar.f7970e;
            } else {
                bVar.f19186e.getClass();
                Intrinsics.checkNotNullParameter(className, "className");
                Intrinsics.checkNotNullParameter(className, "className");
                String str5 = v3.i.a;
                Intrinsics.checkNotNullParameter(className, "className");
                try {
                    Object newInstance = Class.forName(className).getDeclaredConstructor(null).newInstance(null);
                    Intrinsics.checkNotNull(newInstance, "null cannot be cast to non-null type androidx.work.InputMerger");
                    hVar = (v3.h) newInstance;
                } catch (Exception e9) {
                    v3.p.d().c(v3.i.a, "Trouble instantiating ".concat(className), e9);
                    hVar = null;
                }
                if (hVar == null) {
                    v3.p.d().b(str4, "Could not create Input Merger " + className);
                    g();
                    return;
                }
                ArrayList arrayList2 = new ArrayList();
                arrayList2.add(oVar.f7970e);
                WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) pVar.a;
                a3.o g6 = a3.o.g(1, "SELECT output FROM workspec WHERE id IN\n             (SELECT prerequisite_id FROM dependency WHERE work_spec_id=?)");
                if (str == null) {
                    g6.S(1);
                } else {
                    g6.n(1, str);
                }
                workDatabase_Impl.b();
                Cursor D = nt.a.D(workDatabase_Impl, g6);
                try {
                    ArrayList arrayList3 = new ArrayList(D.getCount());
                    while (D.moveToNext()) {
                        arrayList3.add(v3.f.a(D.isNull(0) ? null : D.getBlob(0)));
                    }
                    D.close();
                    g6.i();
                    arrayList2.addAll(arrayList3);
                    a = hVar.a(arrayList2);
                } catch (Throwable th2) {
                    D.close();
                    g6.i();
                    throw th2;
                }
            }
            UUID fromString = UUID.fromString(str);
            ExecutorService executorService = bVar.a;
            a0 a0Var = bVar.f19185d;
            e eVar = this.F;
            h4.b bVar2 = this.f19676w;
            s sVar = new s(workDatabase, eVar, bVar2);
            WorkerParameters workerParameters = new WorkerParameters();
            workerParameters.a = fromString;
            workerParameters.f2565b = a;
            new HashSet(arrayList);
            workerParameters.f2566c = executorService;
            workerParameters.f2567d = bVar2;
            workerParameters.f2568e = a0Var;
            if (this.f19675v == null) {
                a0Var.getClass();
                this.f19675v = a0.a(this.f19672d, str3, workerParameters);
            }
            v3.o oVar2 = this.f19675v;
            if (oVar2 == null) {
                v3.p.d().b(str4, "Could not create Worker " + str3);
                g();
                return;
            }
            if (oVar2.f19209v) {
                v3.p.d().b(str4, "Received an already-used Worker " + str3 + "; Worker Factory should return new instances");
                g();
                return;
            }
            oVar2.f19209v = true;
            workDatabase.c();
            try {
                if (pVar.k(str) == yVar2) {
                    pVar.t(y.f19225e, str);
                    WorkDatabase_Impl workDatabase_Impl2 = (WorkDatabase_Impl) pVar.a;
                    workDatabase_Impl2.b();
                    e4.h hVar2 = (e4.h) pVar.f7994i;
                    h3.j a10 = hVar2.a();
                    if (str == null) {
                        z5 = true;
                        a10.S(1);
                    } else {
                        z5 = true;
                        a10.n(1, str);
                    }
                    workDatabase_Impl2.c();
                    try {
                        a10.c();
                        workDatabase_Impl2.o();
                        workDatabase_Impl2.k();
                        hVar2.e(a10);
                        pVar.u(-256, str);
                    } catch (Throwable th3) {
                        workDatabase_Impl2.k();
                        hVar2.e(a10);
                        throw th3;
                    }
                } else {
                    z5 = false;
                }
                workDatabase.o();
                if (!z5) {
                    f();
                    return;
                }
                if (h()) {
                    return;
                }
                f4.q qVar = new f4.q(this.f19672d, this.f19674i, this.f19675v, sVar, this.f19676w);
                bVar2.f9518d.execute(qVar);
                g4.j jVar = qVar.f8358d;
                b0 b0Var = new b0(29, this, jVar);
                boolean z7 = false;
                f4.n nVar = new f4.n(0);
                g4.j jVar2 = this.M;
                jVar2.a(b0Var, nVar);
                jVar.a(new ii.o(this, jVar, 23, z7), bVar2.f9518d);
                jVar2.a(new v0(this, this.K, 24, z7), bVar2.a);
            } catch (Throwable th4) {
                throw th4;
            }
        } finally {
            workDatabase.k();
        }
    }
}
