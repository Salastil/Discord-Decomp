package com.discord.chat.presentation.message.view.botuikit.components.checkpoint;

import android.content.Context;
import java.util.List;
import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import nr.g0;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000 \n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\u001a.\u0010\u0000\u001a\u0004\u0018\u00010\u00012\u0006\u0010\u0002\u001a\u00020\u00032\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u00052\u0006\u0010\u0007\u001a\u00020\bH\u0086@¢\u0006\u0002\u0010\t¨\u0006\n"}, d2 = {"compositeCheckpointCharacter", "Landroid/graphics/Bitmap;", "context", "Landroid/content/Context;", "layerUrls", "", "", "sizePx", "", "(Landroid/content/Context;Ljava/util/List;ILkotlin/coroutines/Continuation;)Ljava/lang/Object;", "chat_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class CheckpointCharacterCompositorKt {
    public static final Object compositeCheckpointCharacter(@NotNull Context context, @NotNull List<String> list, int i5, @NotNull Continuation continuation) {
        return x.A(g0.a, new CheckpointCharacterCompositorKt$compositeCheckpointCharacter$2(i5, list, context, null), continuation);
    }
}
