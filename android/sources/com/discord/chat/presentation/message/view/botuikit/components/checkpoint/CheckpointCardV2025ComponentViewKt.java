package com.discord.chat.presentation.message.view.botuikit.components.checkpoint;

import android.view.View;
import androidx.core.view.e0;
import androidx.core.view.s0;
import com.discord.R;
import com.discord.chat.bridge.botuikit.CheckpointCardClickable;
import com.discord.chat.bridge.botuikit.CheckpointDataV2025;
import com.discord.chat.presentation.message.u;
import com.discord.chat.presentation.message.view.botuikit.ComponentContext;
import com.discord.primitives.UserId;
import java.util.WeakHashMap;
import kotlin.Metadata;

@Metadata(d1 = {"\u0000\u001e\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a&\u0010\u0000\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\b\u0010\u0007\u001a\u0004\u0018\u00010\bH\u0002¨\u0006\t"}, d2 = {"applyClickable", "", "Landroid/view/View;", "componentContext", "Lcom/discord/chat/presentation/message/view/botuikit/ComponentContext;", "checkpointData", "Lcom/discord/chat/bridge/botuikit/CheckpointDataV2025;", "clickable", "Lcom/discord/chat/bridge/botuikit/CheckpointCardClickable;", "chat_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class CheckpointCardV2025ComponentViewKt {
    /* JADX INFO: Access modifiers changed from: private */
    public static final void applyClickable(View view, ComponentContext componentContext, CheckpointDataV2025 checkpointDataV2025, CheckpointCardClickable checkpointCardClickable) {
        if (checkpointCardClickable == null) {
            view.setOnClickListener(null);
        } else {
            view.setContentDescription(checkpointCardClickable.getAriaDescription());
            view.setOnClickListener(new u(7, componentContext, checkpointDataV2025));
        }
        boolean z5 = checkpointCardClickable != null;
        WeakHashMap weakHashMap = s0.a;
        new e0(R.id.tag_screen_reader_focusable, Boolean.class, 0, 28, 0).f(view, Boolean.valueOf(z5));
        view.setClickable(z5);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void applyClickable$lambda$0(ComponentContext componentContext, CheckpointDataV2025 checkpointDataV2025, View view) {
        componentContext.getComponentActionEventHandlers().getOnTapCheckpointCard().invoke(UserId.m1241boximpl(checkpointDataV2025.m302getAuthorIdre6GcUE()));
    }
}
