package pr;

/* loaded from: classes3.dex */
public final class f extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public /* synthetic */ Object f16476d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ h f16477e;

    /* renamed from: i, reason: collision with root package name */
    public int f16478i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(h hVar, lo.c cVar) {
        super(cVar);
        this.f16477e = hVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f16476d = obj;
        this.f16478i |= Integer.MIN_VALUE;
        Object E = h.E(this.f16477e, this);
        return E == ko.a.f13464d ? E : new n(E);
    }
}
