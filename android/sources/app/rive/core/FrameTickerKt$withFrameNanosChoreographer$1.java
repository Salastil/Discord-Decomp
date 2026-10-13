package app.rive.core;

import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import lo.c;
import lo.d;
import org.jetbrains.annotations.NotNull;

@Metadata(k = 3, mv = {1, 9, 0}, xi = 48)
@d(c = "app.rive.core.FrameTickerKt", f = "FrameTicker.kt", l = {50}, m = "withFrameNanosChoreographer")
/* loaded from: classes.dex */
public final class FrameTickerKt$withFrameNanosChoreographer$1<R> extends c {
    Object L$0;
    int label;
    /* synthetic */ Object result;

    public FrameTickerKt$withFrameNanosChoreographer$1(Continuation continuation) {
        super(continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        this.result = obj;
        this.label |= Integer.MIN_VALUE;
        return FrameTickerKt.withFrameNanosChoreographer(null, this);
    }
}
