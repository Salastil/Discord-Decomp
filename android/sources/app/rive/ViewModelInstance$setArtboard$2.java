package app.rive;

import app.rive.core.ArtboardHandle;
import app.rive.core.CommandQueue;
import app.rive.core.ViewModelInstanceHandle;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(k = 3, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ViewModelInstance$setArtboard$2 extends FunctionReferenceImpl implements Function3 {
    public ViewModelInstance$setArtboard$2(Object obj) {
        super(3, obj, CommandQueue.class, "setArtboardProperty", "setArtboardProperty-d7r-qXY(JLjava/lang/String;J)V", 0);
    }

    @Override // kotlin.jvm.functions.Function3
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2, Object obj3) {
        m62invoked7rqXY(((ViewModelInstanceHandle) obj).m235unboximpl(), (String) obj2, ((ArtboardHandle) obj3).m110unboximpl());
        return Unit.a;
    }

    /* renamed from: invoke-d7r-qXY, reason: not valid java name */
    public final void m62invoked7rqXY(long j, @NotNull String p12, long j5) {
        Intrinsics.checkNotNullParameter(p12, "p1");
        ((CommandQueue) this.receiver).m171setArtboardPropertyd7rqXY(j, p12, j5);
    }
}
