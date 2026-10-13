package uh;

/* loaded from: classes3.dex */
public abstract class o implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final jg.g f18917d;

    public o() {
        this.f18917d = null;
    }

    public abstract void a();

    @Override // java.lang.Runnable
    public final void run() {
        try {
            a();
        } catch (Exception e9) {
            jg.g gVar = this.f18917d;
            if (gVar != null) {
                gVar.c(e9);
            }
        }
    }

    public o(jg.g gVar) {
        this.f18917d = gVar;
    }
}
