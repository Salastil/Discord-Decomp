package e2;

/* loaded from: classes.dex */
public final class p extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public Object f7867d;

    /* renamed from: e, reason: collision with root package name */
    public z f7868e;

    /* renamed from: i, reason: collision with root package name */
    public nr.o f7869i;

    /* renamed from: v, reason: collision with root package name */
    public /* synthetic */ Object f7870v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ z f7871w;

    /* renamed from: x, reason: collision with root package name */
    public int f7872x;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public p(z zVar, lo.c cVar) {
        super(cVar);
        this.f7871w = zVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f7870v = obj;
        this.f7872x |= Integer.MIN_VALUE;
        return z.a(this.f7871w, null, this);
    }
}
