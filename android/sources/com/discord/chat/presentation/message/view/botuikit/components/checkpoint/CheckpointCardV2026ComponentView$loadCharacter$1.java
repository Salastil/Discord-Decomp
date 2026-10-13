package com.discord.chat.presentation.message.view.botuikit.components.checkpoint;

import android.content.Context;
import android.graphics.Bitmap;
import java.util.List;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.chat.presentation.message.view.botuikit.components.checkpoint.CheckpointCardV2026ComponentView$loadCharacter$1", f = "CheckpointCardV2026ComponentView.kt", l = {93}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class CheckpointCardV2026ComponentView$loadCharacter$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ List<String> $urls;
    int label;
    final /* synthetic */ CheckpointCardV2026ComponentView this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public CheckpointCardV2026ComponentView$loadCharacter$1(CheckpointCardV2026ComponentView checkpointCardV2026ComponentView, List<String> list, Continuation continuation) {
        super(2, continuation);
        this.this$0 = checkpointCardV2026ComponentView;
        this.$urls = list;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new CheckpointCardV2026ComponentView$loadCharacter$1(this.this$0, this.$urls, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        int i5;
        a aVar = a.f13464d;
        int i6 = this.label;
        if (i6 == 0) {
            b.R(obj);
            Context context = this.this$0.getContext();
            Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
            List<String> list = this.$urls;
            i5 = this.this$0.characterSizePx;
            this.label = 1;
            obj = CheckpointCharacterCompositorKt.compositeCheckpointCharacter(context, list, i5, this);
            if (obj == aVar) {
                return aVar;
            }
        } else {
            if (i6 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            b.R(obj);
        }
        Bitmap bitmap = (Bitmap) obj;
        if (bitmap == null) {
            return Unit.a;
        }
        this.this$0.showCharacter(bitmap);
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((CheckpointCardV2026ComponentView$loadCharacter$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
