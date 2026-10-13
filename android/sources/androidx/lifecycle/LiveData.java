package androidx.lifecycle;

import android.os.Looper;
import androidx.lifecycle.Lifecycle;
import java.util.Map;

/* loaded from: classes.dex */
public abstract class LiveData {
    public static final Object k = new Object();
    public final Object a = new Object();

    /* renamed from: b, reason: collision with root package name */
    public final p.f f2151b = new p.f();

    /* renamed from: c, reason: collision with root package name */
    public int f2152c = 0;

    /* renamed from: d, reason: collision with root package name */
    public boolean f2153d;

    /* renamed from: e, reason: collision with root package name */
    public volatile Object f2154e;

    /* renamed from: f, reason: collision with root package name */
    public volatile Object f2155f;

    /* renamed from: g, reason: collision with root package name */
    public int f2156g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f2157h;

    /* renamed from: i, reason: collision with root package name */
    public boolean f2158i;
    public final a3.h j;

    public LiveData() {
        Object obj = k;
        this.f2155f = obj;
        this.j = new a3.h(10, this);
        this.f2154e = obj;
        this.f2156g = -1;
    }

    public static void a(String str) {
        o.a.U().f15703t.getClass();
        if (Looper.getMainLooper().getThread() != Thread.currentThread()) {
            throw new IllegalStateException(s4.h.f("Cannot invoke ", str, " on a background thread"));
        }
    }

    public final void b(a0 a0Var) {
        if (a0Var.f2167e) {
            if (!a0Var.e()) {
                a0Var.a(false);
                return;
            }
            int i5 = a0Var.f2168i;
            int i6 = this.f2156g;
            if (i5 >= i6) {
                return;
            }
            a0Var.f2168i = i6;
            a0Var.f2166d.onChanged(this.f2154e);
        }
    }

    public final void c(a0 a0Var) {
        if (this.f2157h) {
            this.f2158i = true;
            return;
        }
        this.f2157h = true;
        do {
            this.f2158i = false;
            if (a0Var != null) {
                b(a0Var);
                a0Var = null;
            } else {
                p.f fVar = this.f2151b;
                fVar.getClass();
                p.d dVar = new p.d(fVar);
                fVar.f16258i.put(dVar, Boolean.FALSE);
                while (dVar.hasNext()) {
                    b((a0) ((Map.Entry) dVar.next()).getValue());
                    if (this.f2158i) {
                        break;
                    }
                }
            }
        } while (this.f2158i);
        this.f2157h = false;
    }

    public final void d(LifecycleOwner lifecycleOwner, Observer observer) {
        Object obj;
        a("observe");
        if (lifecycleOwner.getLifecycle().b() == Lifecycle.State.f2137d) {
            return;
        }
        z zVar = new z(this, lifecycleOwner, observer);
        p.f fVar = this.f2151b;
        p.c a = fVar.a(observer);
        if (a != null) {
            obj = a.f16250e;
        } else {
            p.c cVar = new p.c(observer, zVar);
            fVar.f16259v++;
            p.c cVar2 = fVar.f16257e;
            if (cVar2 == null) {
                fVar.f16256d = cVar;
                fVar.f16257e = cVar;
            } else {
                cVar2.f16251i = cVar;
                cVar.f16252v = cVar2;
                fVar.f16257e = cVar;
            }
            obj = null;
        }
        a0 a0Var = (a0) obj;
        if (a0Var != null && !a0Var.d(lifecycleOwner)) {
            throw new IllegalArgumentException("Cannot add the same observer with different lifecycles");
        }
        if (a0Var != null) {
            return;
        }
        lifecycleOwner.getLifecycle().a(zVar);
    }

    public void e() {
    }

    public void f() {
    }

    public void g(Observer observer) {
        a("removeObserver");
        a0 a0Var = (a0) this.f2151b.b(observer);
        if (a0Var == null) {
            return;
        }
        a0Var.b();
        a0Var.a(false);
    }

    public void h(Object obj) {
        a("setValue");
        this.f2156g++;
        this.f2154e = obj;
        c(null);
    }
}
