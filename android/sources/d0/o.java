package d0;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes.dex */
public final class o extends Lambda implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7380d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ p f7381e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ o(p pVar, int i5) {
        super(1);
        this.f7380d = i5;
        this.f7381e = pVar;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f7380d) {
            case 0:
                double doubleValue = ((Number) obj).doubleValue();
                return Double.valueOf(this.f7381e.f7390m.invoke(yo.j.b(doubleValue, r10.f7384e, r10.f7385f)));
            default:
                return Double.valueOf(yo.j.b(this.f7381e.k.invoke(((Number) obj).doubleValue()), r10.f7384e, r10.f7385f));
        }
    }
}
