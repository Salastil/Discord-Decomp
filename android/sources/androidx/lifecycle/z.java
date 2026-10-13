package androidx.lifecycle;

import androidx.lifecycle.Lifecycle;

/* loaded from: classes.dex */
public final class z extends a0 implements t {

    /* renamed from: w, reason: collision with root package name */
    public final LifecycleOwner f2239w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ LiveData f2240x;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public z(LiveData liveData, LifecycleOwner lifecycleOwner, Observer observer) {
        super(liveData, observer);
        this.f2240x = liveData;
        this.f2239w = lifecycleOwner;
    }

    @Override // androidx.lifecycle.a0
    public final void b() {
        this.f2239w.getLifecycle().c(this);
    }

    @Override // androidx.lifecycle.t
    public final void c(LifecycleOwner lifecycleOwner, n nVar) {
        LifecycleOwner lifecycleOwner2 = this.f2239w;
        Lifecycle.State b10 = lifecycleOwner2.getLifecycle().b();
        if (b10 == Lifecycle.State.f2137d) {
            this.f2240x.g(this.f2166d);
            return;
        }
        Lifecycle.State state = null;
        while (state != b10) {
            a(e());
            state = b10;
            b10 = lifecycleOwner2.getLifecycle().b();
        }
    }

    @Override // androidx.lifecycle.a0
    public final boolean d(LifecycleOwner lifecycleOwner) {
        return this.f2239w == lifecycleOwner;
    }

    @Override // androidx.lifecycle.a0
    public final boolean e() {
        return this.f2239w.getLifecycle().b().a(Lifecycle.State.f2140v);
    }
}
