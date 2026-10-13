package e2;

import java.io.Serializable;
import java.util.Iterator;

/* loaded from: classes.dex */
public final class c extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public Serializable f7838d;

    /* renamed from: e, reason: collision with root package name */
    public Iterator f7839e;

    /* renamed from: i, reason: collision with root package name */
    public /* synthetic */ Object f7840i;

    /* renamed from: v, reason: collision with root package name */
    public int f7841v;

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f7840i = obj;
        this.f7841v |= Integer.MIN_VALUE;
        return ki.b.a(null, null, this);
    }
}
