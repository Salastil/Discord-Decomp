package e2;

import java.util.concurrent.CancellationException;
import kotlin.Unit;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes.dex */
public final class l extends Lambda implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public static final l f7857d = new l(2);

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        j msg = (j) obj;
        Throwable th2 = (Throwable) obj2;
        Intrinsics.checkNotNullParameter(msg, "msg");
        if (msg instanceof i) {
            nr.o oVar = ((i) msg).f7852b;
            if (th2 == null) {
                th2 = new CancellationException("DataStore scope was cancelled before updateData could complete");
            }
            oVar.U(th2);
        }
        return Unit.a;
    }
}
