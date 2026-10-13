package t1;

import java.util.concurrent.Executor;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import n1.h;
import o1.l;

/* loaded from: classes.dex */
public final /* synthetic */ class f implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f18161d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Executor f18162e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ h f18163i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ l f18164v;

    public /* synthetic */ f(Executor executor, h hVar, l lVar, int i5) {
        this.f18161d = i5;
        this.f18162e = executor;
        this.f18163i = hVar;
        this.f18164v = lVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f18161d) {
            case 0:
                this.f18162e.execute(new g(this.f18163i, this.f18164v, 1));
                break;
            default:
                this.f18162e.execute(new g(this.f18163i, this.f18164v, 2));
                break;
        }
        return Unit.a;
    }
}
