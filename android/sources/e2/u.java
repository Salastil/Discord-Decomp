package e2;

/* loaded from: classes.dex */
public final class u extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public z f7894d;

    /* renamed from: e, reason: collision with root package name */
    public /* synthetic */ Object f7895e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ z f7896i;

    /* renamed from: v, reason: collision with root package name */
    public int f7897v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public u(z zVar, lo.c cVar) {
        super(cVar);
        this.f7896i = zVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f7895e = obj;
        this.f7897v |= Integer.MIN_VALUE;
        return this.f7896i.e(this);
    }
}
