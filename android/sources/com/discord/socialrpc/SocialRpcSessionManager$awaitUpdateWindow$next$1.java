package com.discord.socialrpc;

import com.discord.socialrpc.SocialRpcSessionManager;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.channels.Channel;
import lo.d;
import lo.h;
import pr.n;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u000e\n\u0002\u0018\u0002\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.socialrpc.SocialRpcSessionManager$awaitUpdateWindow$next$1", f = "SocialRpcSessionManager.kt", l = {185}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class SocialRpcSessionManager$awaitUpdateWindow$next$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ SocialRpcSessionManager.Connection $connection;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public SocialRpcSessionManager$awaitUpdateWindow$next$1(SocialRpcSessionManager.Connection connection, Continuation continuation) {
        super(2, continuation);
        this.$connection = connection;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new SocialRpcSessionManager$awaitUpdateWindow$next$1(this.$connection, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Object a;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            Channel channel = this.$connection.getChannel();
            this.label = 1;
            a = channel.a(this);
            if (a == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
            a = ((n) obj).a;
        }
        return n.a(a);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((SocialRpcSessionManager$awaitUpdateWindow$next$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
