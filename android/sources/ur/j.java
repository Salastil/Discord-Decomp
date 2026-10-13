package ur;

import nr.x;

/* loaded from: classes3.dex */
public final class j extends i {

    /* renamed from: i, reason: collision with root package name */
    public final Runnable f19099i;

    public j(Runnable runnable, long j, boolean z5) {
        super(j, z5);
        this.f19099i = runnable;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f19099i.run();
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("Task[");
        Runnable runnable = this.f19099i;
        sb2.append(runnable.getClass().getSimpleName());
        sb2.append('@');
        sb2.append(x.o(runnable));
        sb2.append(", ");
        sb2.append(this.f19097d);
        sb2.append(", ");
        return s4.h.h(sb2, this.f19098e ? "Blocking" : "Non-blocking", ']');
    }
}
