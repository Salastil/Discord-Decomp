package f9;

import a3.h;
import android.os.Handler;
import android.os.Looper;
import androidx.appcompat.widget.w;
import e4.m;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.concurrent.Executor;
import javax.inject.Provider;
import k2.r;
import qa.t;
import rd.u;
import th.e0;
import th.g1;
import th.p0;
import th.s;
import u3.e;
import uh.f;
import uh.g;
import wb.i;
import wb.l;
import wb.p;

/* loaded from: classes3.dex */
public final class b implements yb.b, g {

    /* renamed from: x, reason: collision with root package name */
    public static b f8471x;

    /* renamed from: d, reason: collision with root package name */
    public final Object f8472d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f8473e;

    /* renamed from: i, reason: collision with root package name */
    public Object f8474i;

    /* renamed from: v, reason: collision with root package name */
    public Object f8475v;

    /* renamed from: w, reason: collision with root package name */
    public final Object f8476w;

    public /* synthetic */ b(Object obj, Object obj2, Object obj3, Object obj4, Object obj5) {
        this.f8472d = obj;
        this.f8473e = obj2;
        this.f8474i = obj3;
        this.f8475v = obj4;
        this.f8476w = obj5;
    }

    @Override // uh.g
    public Object a() {
        Object a = ((f) this.f8472d).a();
        int i5 = 7;
        return new e0((s) a, new f(new u(i5, (t) this.f8473e)), new f(new u(i5, (f) this.f8474i)), (p0) ((f) this.f8475v).a(), (g1) ((f) this.f8476w).a());
    }

    public void b(g9.c cVar) {
        synchronized (this.f8472d) {
            ((ArrayList) this.f8474i).remove(cVar);
        }
    }

    public void c(tb.a aVar) {
        e eVar = new e();
        p pVar = (p) this.f8476w;
        i iVar = (i) this.f8472d;
        String str = (String) this.f8473e;
        tb.e eVar2 = (tb.e) this.f8475v;
        tb.c cVar = (tb.c) this.f8474i;
        bc.c cVar2 = pVar.f19718c;
        r a = i.a();
        a.K(iVar.a);
        a.f13144v = tb.d.f18249d;
        a.f13143i = iVar.f19704b;
        i k = a.k();
        w wVar = new w();
        wVar.f1146x = new HashMap();
        wVar.f1144v = Long.valueOf(pVar.a.e());
        wVar.f1145w = Long.valueOf(pVar.f19717b.e());
        wVar.f1141d = str;
        wVar.f1143i = new l(cVar, (byte[]) eVar2.apply(aVar.a));
        wVar.f1142e = null;
        bc.b bVar = (bc.b) cVar2;
        bVar.f2773b.execute(new androidx.fragment.app.e(bVar, k, eVar, wVar.p()));
    }

    @Override // javax.inject.Provider
    public Object get() {
        return new bc.b((Executor) ((Provider) this.f8472d).get(), (xb.d) ((Provider) this.f8473e).get(), (m) ((m) this.f8474i).get(), (dc.d) ((Provider) this.f8475v).get(), (ec.c) ((Provider) this.f8476w).get());
    }

    public b(Boolean bool, Double d6) {
        this(bool, d6, (Double) null, Boolean.FALSE, (Double) null);
    }

    public b() {
        this.f8472d = new Object();
        this.f8476w = new h(13, this);
        this.f8474i = new ArrayList();
        this.f8475v = new ArrayList();
        this.f8473e = new Handler(Looper.getMainLooper());
    }

    public b(Boolean bool, Double d6, Double d7, Boolean bool2, Double d8) {
        this.f8472d = bool;
        this.f8473e = d6;
        this.f8474i = d7;
        this.f8475v = Boolean.valueOf(bool.booleanValue() && bool2.booleanValue());
        this.f8476w = d8;
    }
}
