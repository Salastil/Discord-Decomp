package app.rive;

import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import lo.c;
import lo.d;
import org.jetbrains.annotations.NotNull;

@Metadata(k = 3, mv = {1, 9, 0}, xi = 48)
@d(c = "app.rive.RiveCanvasSession", f = "RiveCanvasSession.kt", l = {342}, m = "beginPlaying")
/* loaded from: classes.dex */
public final class RiveCanvasSession$beginPlaying$1 extends c {
    Object L$0;
    int label;
    /* synthetic */ Object result;
    final /* synthetic */ RiveCanvasSession this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RiveCanvasSession$beginPlaying$1(RiveCanvasSession riveCanvasSession, Continuation continuation) {
        super(continuation);
        this.this$0 = riveCanvasSession;
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        this.result = obj;
        this.label |= Integer.MIN_VALUE;
        return this.this$0.beginPlaying(null, null, this);
    }
}
