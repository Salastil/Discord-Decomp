package e2;

/* loaded from: classes.dex */
public final class w extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public Object f7903d;

    /* renamed from: e, reason: collision with root package name */
    public Object f7904e;

    /* renamed from: i, reason: collision with root package name */
    public /* synthetic */ Object f7905i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ z f7906v;

    /* renamed from: w, reason: collision with root package name */
    public int f7907w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public w(z zVar, lo.c cVar) {
        super(cVar);
        this.f7906v = zVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f7905i = obj;
        this.f7907w |= Integer.MIN_VALUE;
        return this.f7906v.g(this);
    }
}
