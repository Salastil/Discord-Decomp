package com.discord.chat.presentation.message.view;

import com.discord.portals.from_native.PortalFromNativeContextManager;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.chat.presentation.message.view.MediaView$onAttachedToWindow$1", f = "MediaView.kt", l = {163}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class MediaView$onAttachedToWindow$1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
    int label;
    final /* synthetic */ MediaView this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaView$onAttachedToWindow$1(MediaView mediaView, Continuation continuation) {
        super(2, continuation);
        this.this$0 = mediaView;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new MediaView$onAttachedToWindow$1(this.this$0, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            Flow portalContextIdsFlow = PortalFromNativeContextManager.INSTANCE.getPortalContextIdsFlow();
            final MediaView mediaView = this.this$0;
            FlowCollector flowCollector = new FlowCollector() { // from class: com.discord.chat.presentation.message.view.MediaView$onAttachedToWindow$1.1
                @Override // kotlinx.coroutines.flow.FlowCollector
                public final Object emit(PortalFromNativeContextManager.Event event, Continuation continuation) {
                    MediaView.setMediaData$default(MediaView.this, null, false, false, false, null, false, null, event, 0, false, false, false, 0, null, null, null, null, null, null, null, 1048447, null);
                    return Unit.a;
                }
            };
            this.label = 1;
            if (portalContextIdsFlow.collect(flowCollector, this) == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaView$onAttachedToWindow$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
