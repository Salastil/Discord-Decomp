package zq;

import java.util.List;
import kotlin.jvm.functions.Function0;

/* loaded from: classes3.dex */
public final class i implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f21389d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f21390e;

    public /* synthetic */ i(int i5, Object obj) {
        this.f21389d = i5;
        this.f21390e = obj;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f21389d) {
            case 0:
                Function0 function0 = ((j) this.f21390e).f21391b;
                if (function0 != null) {
                    return (List) function0.invoke();
                }
                return null;
            default:
                return ar.l.c(ar.k.V, ((io.sentry.internal.debugmeta.c) this.f21390e).toString());
        }
    }
}
