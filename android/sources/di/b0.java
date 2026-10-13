package di;

/* loaded from: classes3.dex */
public abstract class b0 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final jg.g f7565d;

    public b0() {
        this.f7565d = null;
    }

    public void a(Exception exc) {
        jg.g gVar = this.f7565d;
        if (gVar != null) {
            gVar.c(exc);
        }
    }

    public abstract void b();

    @Override // java.lang.Runnable
    public final void run() {
        try {
            b();
        } catch (Exception e9) {
            a(e9);
        }
    }

    public b0(jg.g gVar) {
        this.f7565d = gVar;
    }
}
