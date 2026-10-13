package v2;

import a5.h0;
import androidx.lifecycle.MutableLiveData;
import androidx.lifecycle.Observer;
import ve.d;

/* loaded from: classes.dex */
public final class a extends MutableLiveData {

    /* renamed from: l, reason: collision with root package name */
    public final d f19173l;

    /* renamed from: m, reason: collision with root package name */
    public Object f19174m;

    /* renamed from: n, reason: collision with root package name */
    public h0 f19175n;

    public a(d dVar) {
        this.f19173l = dVar;
        if (dVar.a != null) {
            throw new IllegalStateException("There is already a listener registered");
        }
        dVar.a = this;
    }

    @Override // androidx.lifecycle.LiveData
    public final void e() {
        d dVar = this.f19173l;
        dVar.f19393b = true;
        dVar.f19395d = false;
        dVar.f19394c = false;
        dVar.f19400i.drainPermits();
        dVar.c();
    }

    @Override // androidx.lifecycle.LiveData
    public final void f() {
        this.f19173l.f19393b = false;
    }

    @Override // androidx.lifecycle.LiveData
    public final void g(Observer observer) {
        super.g(observer);
        this.f19174m = null;
        this.f19175n = null;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v0, types: [androidx.lifecycle.LifecycleOwner, java.lang.Object] */
    public final void j() {
        ?? r02 = this.f19174m;
        h0 h0Var = this.f19175n;
        if (r02 == 0 || h0Var == null) {
            return;
        }
        super.g(h0Var);
        d(r02, h0Var);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder(64);
        sb2.append("LoaderInfo{");
        sb2.append(Integer.toHexString(System.identityHashCode(this)));
        sb2.append(" #0 : ");
        Class<?> cls = this.f19173l.getClass();
        sb2.append(cls.getSimpleName());
        sb2.append("{");
        sb2.append(Integer.toHexString(System.identityHashCode(cls)));
        sb2.append("}}");
        return sb2.toString();
    }
}
