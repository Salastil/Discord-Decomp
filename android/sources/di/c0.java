package di;

/* loaded from: classes3.dex */
public final class c0 extends b0 {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ jg.g f7578e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ b0 f7579i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ c f7580v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c0(c cVar, jg.g gVar, jg.g gVar2, b0 b0Var) {
        super(gVar);
        this.f7578e = gVar2;
        this.f7579i = b0Var;
        this.f7580v = cVar;
    }

    @Override // di.b0
    public final void b() {
        c cVar = this.f7580v;
        synchronized (cVar.f7571f) {
            try {
                jg.g gVar = this.f7578e;
                cVar.f7570e.add(gVar);
                gVar.a.addOnCompleteListener(new e4.l(8, cVar, gVar));
                if (cVar.f7575l.getAndIncrement() > 0) {
                    cVar.f7567b.b("Already connected to the service.", new Object[0]);
                }
                c.b(cVar, this.f7579i);
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
