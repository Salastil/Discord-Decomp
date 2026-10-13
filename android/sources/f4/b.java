package f4;

import androidx.work.impl.WorkDatabase;
import androidx.work.impl.WorkDatabase_Impl;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.UUID;
import v3.y;

/* loaded from: classes.dex */
public final class b implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final e4.r f8328d = new e4.r(24);

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f8329e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ w3.o f8330i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f8331v;

    public b(w3.o oVar, Object obj, int i5) {
        this.f8329e = i5;
        this.f8330i = oVar;
        this.f8331v = obj;
    }

    public static void a(w3.o oVar, String str) {
        w3.r b10;
        WorkDatabase workDatabase = oVar.f19662c;
        e4.p t5 = workDatabase.t();
        e4.c f2 = workDatabase.f();
        LinkedList linkedList = new LinkedList();
        linkedList.add(str);
        while (!linkedList.isEmpty()) {
            String str2 = (String) linkedList.remove();
            y k = t5.k(str2);
            if (k != y.f19226i && k != y.f19227v) {
                WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) t5.a;
                workDatabase_Impl.b();
                e4.h hVar = (e4.h) t5.f7990e;
                h3.j a = hVar.a();
                if (str2 == null) {
                    a.S(1);
                } else {
                    a.n(1, str2);
                }
                workDatabase_Impl.c();
                try {
                    a.c();
                    workDatabase_Impl.o();
                } finally {
                    workDatabase_Impl.k();
                    hVar.e(a);
                }
            }
            linkedList.addAll(f2.T0(str2));
        }
        w3.e eVar = oVar.f19665f;
        synchronized (eVar.k) {
            v3.p.d().a(w3.e.f19635l, "Processor cancelling " + str);
            eVar.f19643i.add(str);
            b10 = eVar.b(str);
        }
        w3.e.d(str, b10, 1);
        Iterator it = oVar.f19664e.iterator();
        while (it.hasNext()) {
            ((w3.g) it.next()).c(str);
        }
    }

    public final void b() {
        WorkDatabase workDatabase;
        switch (this.f8329e) {
            case 0:
                w3.o oVar = this.f8330i;
                workDatabase = oVar.f19662c;
                workDatabase.c();
                try {
                    a(oVar, ((UUID) this.f8331v).toString());
                    workDatabase.o();
                    workDatabase.k();
                    w3.i.b(oVar.f19661b, oVar.f19662c, oVar.f19664e);
                    return;
                } finally {
                    workDatabase.k();
                }
            default:
                w3.o oVar2 = this.f8330i;
                workDatabase = oVar2.f19662c;
                workDatabase.c();
                try {
                    Iterator it = workDatabase.t().m((String) this.f8331v).iterator();
                    while (it.hasNext()) {
                        a(oVar2, (String) it.next());
                    }
                    workDatabase.o();
                    return;
                } catch (Throwable th2) {
                    throw th2;
                }
        }
    }

    @Override // java.lang.Runnable
    public final void run() {
        e4.r rVar = this.f8328d;
        try {
            b();
            rVar.q(v3.w.B);
        } catch (Throwable th2) {
            rVar.q(new v3.t(th2));
        }
    }
}
