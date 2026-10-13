package com.discord.media.engine.video.texture_view;

import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.media.engine.video.texture_view.VideoStreamTextureView$updateFrameDimensionsAndReportEvents$1", f = "VideoStreamTextureView.kt", l = {}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class VideoStreamTextureView$updateFrameDimensionsAndReportEvents$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ int $newHeight;
    final /* synthetic */ int $newRotation;
    final /* synthetic */ int $newWidth;
    int label;
    final /* synthetic */ VideoStreamTextureView this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public VideoStreamTextureView$updateFrameDimensionsAndReportEvents$1(VideoStreamTextureView videoStreamTextureView, int i5, int i6, int i10, Continuation continuation) {
        super(2, continuation);
        this.this$0 = videoStreamTextureView;
        this.$newWidth = i5;
        this.$newHeight = i6;
        this.$newRotation = i10;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new VideoStreamTextureView$updateFrameDimensionsAndReportEvents$1(this.this$0, this.$newWidth, this.$newHeight, this.$newRotation, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        ki.b.R(obj);
        this.this$0.rotatedFrameWidth = this.$newWidth;
        this.this$0.rotatedFrameHeight = this.$newHeight;
        this.this$0.rotatedFrameRotation = this.$newRotation;
        this.this$0.updateSurfaceSize();
        this.this$0.requestLayout();
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((VideoStreamTextureView$updateFrameDimensionsAndReportEvents$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
