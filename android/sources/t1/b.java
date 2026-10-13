package t1;

import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Ref;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f18152d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Function1 f18153e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Ref.ObjectRef f18154i;

    public /* synthetic */ b(Function1 function1, Ref.ObjectRef objectRef, int i5) {
        this.f18152d = i5;
        this.f18153e = function1;
        this.f18154i = objectRef;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f18152d) {
            case 0:
                this.f18153e.invoke(this.f18154i.element);
                break;
            default:
                this.f18153e.invoke(this.f18154i.element);
                break;
        }
        return Unit.a;
    }
}
