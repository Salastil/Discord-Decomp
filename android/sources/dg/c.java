package dg;

/* loaded from: classes3.dex */
public abstract class c implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final jg.g f7540d;

    public c() {
        this.f7540d = null;
    }

    public void a(Exception exc) {
        jg.g gVar = this.f7540d;
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

    public c(jg.g gVar) {
        this.f7540d = gVar;
    }
}
