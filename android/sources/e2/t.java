package e2;

/* loaded from: classes.dex */
public final class t extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public z f7890d;

    /* renamed from: e, reason: collision with root package name */
    public /* synthetic */ Object f7891e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ z f7892i;

    /* renamed from: v, reason: collision with root package name */
    public int f7893v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public t(z zVar, lo.c cVar) {
        super(cVar);
        this.f7892i = zVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f7891e = obj;
        this.f7893v |= Integer.MIN_VALUE;
        return this.f7892i.d(this);
    }
}
