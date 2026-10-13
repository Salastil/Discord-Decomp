package e2;

import java.io.Serializable;
import java.util.Iterator;

/* loaded from: classes.dex */
public final class q extends lo.c {
    public final /* synthetic */ z E;
    public int F;

    /* renamed from: d, reason: collision with root package name */
    public z f7873d;

    /* renamed from: e, reason: collision with root package name */
    public Object f7874e;

    /* renamed from: i, reason: collision with root package name */
    public Serializable f7875i;

    /* renamed from: v, reason: collision with root package name */
    public Object f7876v;

    /* renamed from: w, reason: collision with root package name */
    public s f7877w;

    /* renamed from: x, reason: collision with root package name */
    public Iterator f7878x;

    /* renamed from: y, reason: collision with root package name */
    public /* synthetic */ Object f7879y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public q(z zVar, lo.c cVar) {
        super(cVar);
        this.E = zVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f7879y = obj;
        this.F |= Integer.MIN_VALUE;
        return this.E.c(this);
    }
}
