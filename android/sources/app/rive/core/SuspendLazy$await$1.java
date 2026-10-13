package app.rive.core;

import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import lo.c;
import lo.d;
import org.jetbrains.annotations.NotNull;

@Metadata(k = 3, mv = {1, 9, 0}, xi = 48)
@d(c = "app.rive.core.SuspendLazy", f = "SuspendLazy.kt", l = {ChatViewRecyclerTypes.GIFT_INTENT, ChatViewRecyclerTypes.FORWARD_HEADER}, m = "await")
/* loaded from: classes.dex */
public final class SuspendLazy$await$1 extends c {
    Object L$0;
    Object L$1;
    int label;
    /* synthetic */ Object result;
    final /* synthetic */ SuspendLazy<T> this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public SuspendLazy$await$1(SuspendLazy<T> suspendLazy, Continuation continuation) {
        super(continuation);
        this.this$0 = suspendLazy;
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        this.result = obj;
        this.label |= Integer.MIN_VALUE;
        return this.this$0.await(this);
    }
}
