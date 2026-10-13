package com.discord.socialrpc;

import com.discord.socialrpc.SocialRpcSessionManager;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.socialrpc.SocialRpcSessionManager$onConnect$1", f = "SocialRpcSessionManager.kt", l = {105}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class SocialRpcSessionManager$onConnect$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ SocialRpcSessionManager.Connection $connection;
    final /* synthetic */ String $connectionId;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public SocialRpcSessionManager$onConnect$1(String str, SocialRpcSessionManager.Connection connection, Continuation continuation) {
        super(2, continuation);
        this.$connectionId = str;
        this.$connection = connection;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new SocialRpcSessionManager$onConnect$1(this.$connectionId, this.$connection, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Object runConnection;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            SocialRpcSessionManager socialRpcSessionManager = SocialRpcSessionManager.INSTANCE;
            String str = this.$connectionId;
            SocialRpcSessionManager.Connection connection = this.$connection;
            this.label = 1;
            runConnection = socialRpcSessionManager.runConnection(str, connection, this);
            if (runConnection == aVar) {
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
        return ((SocialRpcSessionManager$onConnect$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
