package com.discord.socialrpc;

import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import lo.d;
import org.jetbrains.annotations.NotNull;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.socialrpc.SocialRpcSessionManager", f = "SocialRpcSessionManager.kt", l = {136, 143}, m = "runConnection")
/* loaded from: classes.dex */
public final class SocialRpcSessionManager$runConnection$1 extends lo.c {
    long J$0;
    Object L$0;
    Object L$1;
    Object L$2;
    Object L$3;
    Object L$4;
    int label;
    /* synthetic */ Object result;
    final /* synthetic */ SocialRpcSessionManager this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public SocialRpcSessionManager$runConnection$1(SocialRpcSessionManager socialRpcSessionManager, Continuation continuation) {
        super(continuation);
        this.this$0 = socialRpcSessionManager;
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        Object runConnection;
        this.result = obj;
        this.label |= Integer.MIN_VALUE;
        runConnection = this.this$0.runConnection(null, null, this);
        return runConnection;
    }
}
