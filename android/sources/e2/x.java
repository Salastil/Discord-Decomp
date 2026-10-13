package e2;

/* loaded from: classes.dex */
public final class x extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public z f7908d;

    /* renamed from: e, reason: collision with root package name */
    public Object f7909e;

    /* renamed from: i, reason: collision with root package name */
    public Object f7910i;

    /* renamed from: v, reason: collision with root package name */
    public /* synthetic */ Object f7911v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ z f7912w;

    /* renamed from: x, reason: collision with root package name */
    public int f7913x;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public x(z zVar, lo.c cVar) {
        super(cVar);
        this.f7912w = zVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f7911v = obj;
        this.f7913x |= Integer.MIN_VALUE;
        return this.f7912w.h(null, null, this);
    }
}
