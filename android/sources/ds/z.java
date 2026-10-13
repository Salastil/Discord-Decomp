package ds;

import java.util.LinkedHashMap;

/* loaded from: classes3.dex */
public final class z extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public fo.b f7754d;

    /* renamed from: e, reason: collision with root package name */
    public a5.a0 f7755e;

    /* renamed from: i, reason: collision with root package name */
    public LinkedHashMap f7756i;

    /* renamed from: v, reason: collision with root package name */
    public String f7757v;

    /* renamed from: w, reason: collision with root package name */
    public /* synthetic */ Object f7758w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ a5.a0 f7759x;

    /* renamed from: y, reason: collision with root package name */
    public int f7760y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public z(a5.a0 a0Var, lo.a aVar) {
        super(aVar);
        this.f7759x = a0Var;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f7758w = obj;
        this.f7760y |= Integer.MIN_VALUE;
        return a5.a0.c(this.f7759x, null, this);
    }
}
