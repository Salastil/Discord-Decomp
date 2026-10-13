package u;

import kotlin.jvm.internal.Lambda;

/* loaded from: classes.dex */
public final class p extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public Lambda f18764d;

    /* renamed from: e, reason: collision with root package name */
    public /* synthetic */ Object f18765e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ q f18766i;

    /* renamed from: v, reason: collision with root package name */
    public int f18767v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public p(q qVar, lo.c cVar) {
        super(cVar);
        this.f18766i = qVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f18765e = obj;
        this.f18767v |= Integer.MIN_VALUE;
        this.f18766i.a(null, this);
        return ko.a.f13464d;
    }
}
