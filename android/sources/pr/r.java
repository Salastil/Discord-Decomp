package pr;

import kotlin.jvm.functions.Function0;
import kotlinx.coroutines.channels.ProducerScope;
import zo.c0;

/* loaded from: classes3.dex */
public final class r extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public ProducerScope f16510d;

    /* renamed from: e, reason: collision with root package name */
    public Function0 f16511e;

    /* renamed from: i, reason: collision with root package name */
    public /* synthetic */ Object f16512i;

    /* renamed from: v, reason: collision with root package name */
    public int f16513v;

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f16512i = obj;
        this.f16513v |= Integer.MIN_VALUE;
        return c0.f(null, null, this);
    }
}
