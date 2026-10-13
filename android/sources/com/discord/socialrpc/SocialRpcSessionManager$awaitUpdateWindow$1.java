package com.discord.socialrpc;

import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import lo.d;
import org.jetbrains.annotations.NotNull;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.socialrpc.SocialRpcSessionManager", f = "SocialRpcSessionManager.kt", l = {184}, m = "awaitUpdateWindow")
/* loaded from: classes.dex */
public final class SocialRpcSessionManager$awaitUpdateWindow$1 extends lo.c {
    long J$0;
    Object L$0;
    Object L$1;
    int label;
    /* synthetic */ Object result;
    final /* synthetic */ SocialRpcSessionManager this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public SocialRpcSessionManager$awaitUpdateWindow$1(SocialRpcSessionManager socialRpcSessionManager, Continuation continuation) {
        super(continuation);
        this.this$0 = socialRpcSessionManager;
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        Object awaitUpdateWindow;
        this.result = obj;
        this.label |= Integer.MIN_VALUE;
        awaitUpdateWindow = this.this$0.awaitUpdateWindow(null, null, 0L, this);
        return awaitUpdateWindow;
    }
}
