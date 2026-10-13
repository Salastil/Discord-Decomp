package ai;

/* loaded from: classes3.dex */
public abstract class f implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final jg.g f616d;

    public f() {
        this.f616d = null;
    }

    public abstract void a();

    @Override // java.lang.Runnable
    public final void run() {
        try {
            a();
        } catch (Exception e9) {
            jg.g gVar = this.f616d;
            if (gVar != null) {
                gVar.c(e9);
            }
        }
    }

    public f(jg.g gVar) {
        this.f616d = gVar;
    }
}
