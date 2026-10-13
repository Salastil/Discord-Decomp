package com.discord.chat.presentation.message.view.botuikit.components.checkpoint;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Rect;
import com.discord.image.fresco.FrescoFetchDecodedImageKt;
import com.discord.image.fresco.postprocessors.PostProcessor;
import java.util.Iterator;
import java.util.List;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Landroid/graphics/Bitmap;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.chat.presentation.message.view.botuikit.components.checkpoint.CheckpointCharacterCompositorKt$compositeCheckpointCharacter$2", f = "CheckpointCharacterCompositor.kt", l = {28}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nCheckpointCharacterCompositor.kt\nKotlin\n*S Kotlin\n*F\n+ 1 CheckpointCharacterCompositor.kt\ncom/discord/chat/presentation/message/view/botuikit/components/checkpoint/CheckpointCharacterCompositorKt$compositeCheckpointCharacter$2\n+ 2 Bitmap.kt\nandroidx/core/graphics/BitmapKt\n*L\n1#1,34:1\n83#2,6:35\n*S KotlinDebug\n*F\n+ 1 CheckpointCharacterCompositor.kt\ncom/discord/chat/presentation/message/view/botuikit/components/checkpoint/CheckpointCharacterCompositorKt$compositeCheckpointCharacter$2\n*L\n22#1:35,6\n*E\n"})
/* loaded from: classes.dex */
public final class CheckpointCharacterCompositorKt$compositeCheckpointCharacter$2 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Context $context;
    final /* synthetic */ List<String> $layerUrls;
    final /* synthetic */ int $sizePx;
    Object L$0;
    Object L$1;
    Object L$2;
    Object L$3;
    Object L$4;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public CheckpointCharacterCompositorKt$compositeCheckpointCharacter$2(int i5, List<String> list, Context context, Continuation continuation) {
        super(2, continuation);
        this.$sizePx = i5;
        this.$layerUrls = list;
        this.$context = context;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new CheckpointCharacterCompositorKt$compositeCheckpointCharacter$2(this.$sizePx, this.$layerUrls, this.$context, continuation);
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x005a  */
    /* JADX WARN: Removed duplicated region for block: B:15:0x0085 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:7:0x0080 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0081  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:13:0x0078 -> B:5:0x007b). Please report as a decompilation issue!!! */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        Canvas canvas;
        Iterator<String> it;
        Rect rect;
        Paint paint;
        Bitmap bitmap;
        a aVar = a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            int i6 = this.$sizePx;
            Bitmap createBitmap = Bitmap.createBitmap(i6, i6, Bitmap.Config.ARGB_8888);
            Canvas canvas2 = new Canvas(createBitmap);
            int i10 = this.$sizePx;
            Rect rect2 = new Rect(0, 0, i10, i10);
            Paint paint2 = new Paint(2);
            canvas = canvas2;
            it = this.$layerUrls.iterator();
            rect = rect2;
            paint = paint2;
            bitmap = createBitmap;
            if (it.hasNext()) {
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            it = (Iterator) this.L$4;
            paint = (Paint) this.L$3;
            rect = (Rect) this.L$2;
            canvas = (Canvas) this.L$1;
            bitmap = (Bitmap) this.L$0;
            b.R(obj);
            Bitmap bitmap2 = (Bitmap) obj;
            if (bitmap2 != null) {
                return null;
            }
            canvas.drawBitmap(bitmap2, (Rect) null, rect, paint);
            if (it.hasNext()) {
                return bitmap;
            }
            String next = it.next();
            Context context = this.$context;
            this.L$0 = bitmap;
            this.L$1 = canvas;
            this.L$2 = rect;
            this.L$3 = paint;
            this.L$4 = it;
            this.label = 1;
            obj = FrescoFetchDecodedImageKt.fetchDecodedImage$default(context, next, (PostProcessor) null, true, (Continuation) this, 2, (Object) null);
            if (obj == aVar) {
                return aVar;
            }
            Bitmap bitmap22 = (Bitmap) obj;
            if (bitmap22 != null) {
            }
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((CheckpointCharacterCompositorKt$compositeCheckpointCharacter$2) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
