package e2;

import java.io.FileInputStream;

/* loaded from: classes.dex */
public final class v extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public z f7898d;

    /* renamed from: e, reason: collision with root package name */
    public FileInputStream f7899e;

    /* renamed from: i, reason: collision with root package name */
    public /* synthetic */ Object f7900i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ z f7901v;

    /* renamed from: w, reason: collision with root package name */
    public int f7902w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public v(z zVar, lo.c cVar) {
        super(cVar);
        this.f7901v = zVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f7900i = obj;
        this.f7902w |= Integer.MIN_VALUE;
        return this.f7901v.f(this);
    }
}
