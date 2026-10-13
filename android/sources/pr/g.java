package pr;

/* loaded from: classes3.dex */
public final class g extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public /* synthetic */ Object f16479d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ h f16480e;

    /* renamed from: i, reason: collision with root package name */
    public int f16481i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public g(h hVar, lo.c cVar) {
        super(cVar);
        this.f16480e = hVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f16479d = obj;
        this.f16481i |= Integer.MIN_VALUE;
        Object F = this.f16480e.F(null, 0, 0L, this);
        return F == ko.a.f13464d ? F : new n(F);
    }
}
