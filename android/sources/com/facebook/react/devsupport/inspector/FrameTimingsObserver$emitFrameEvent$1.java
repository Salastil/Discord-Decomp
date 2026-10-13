package com.facebook.react.devsupport.inspector;

import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.facebook.react.devsupport.inspector.FrameTimingsObserver$emitFrameEvent$1", f = "FrameTimingsObserver.kt", l = {}, m = "invokeSuspend")
/* loaded from: classes3.dex */
public final class FrameTimingsObserver$emitFrameEvent$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ long $beginTimestamp;
    final /* synthetic */ long $endTimestamp;
    final /* synthetic */ int $frameId;
    final /* synthetic */ byte[] $screenshot;
    final /* synthetic */ int $threadId;
    int label;
    final /* synthetic */ FrameTimingsObserver this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public FrameTimingsObserver$emitFrameEvent$1(FrameTimingsObserver frameTimingsObserver, int i5, int i6, long j, long j5, byte[] bArr, Continuation continuation) {
        super(2, continuation);
        this.this$0 = frameTimingsObserver;
        this.$frameId = i5;
        this.$threadId = i6;
        this.$beginTimestamp = j;
        this.$endTimestamp = j5;
        this.$screenshot = bArr;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new FrameTimingsObserver$emitFrameEvent$1(this.this$0, this.$frameId, this.$threadId, this.$beginTimestamp, this.$endTimestamp, this.$screenshot, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Function1 function1;
        ko.a aVar = ko.a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        ki.b.R(obj);
        function1 = this.this$0.onFrameTimingSequence;
        function1.invoke(new FrameTimingSequence(this.$frameId, this.$threadId, this.$beginTimestamp, this.$endTimestamp, this.$screenshot));
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((FrameTimingsObserver$emitFrameEvent$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
