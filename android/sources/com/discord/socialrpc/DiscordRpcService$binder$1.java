package com.discord.socialrpc;

import android.os.IBinder;
import com.discord.socialsdk.rpc.IDiscordRpcCallback;
import com.discord.socialsdk.rpc.IDiscordRpcConnection;
import com.discord.socialsdk.rpc.IDiscordRpcService;
import fo.q;
import fo.r;
import java.util.UUID;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;

@Metadata(d1 = {"\u0000#\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000*\u0001\u0000\b\n\u0018\u00002\u00020\u0001J\"\u0010\u0002\u001a\u0004\u0018\u00010\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tH\u0016¨\u0006\n"}, d2 = {"com/discord/socialrpc/DiscordRpcService$binder$1", "Lcom/discord/socialsdk/rpc/IDiscordRpcService$Stub;", "connect", "Lcom/discord/socialsdk/rpc/IDiscordRpcConnection;", "applicationId", "", "version", "", "callback", "Lcom/discord/socialsdk/rpc/IDiscordRpcCallback;", "social_rpc_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nDiscordRpcService.kt\nKotlin\n*S Kotlin\n*F\n+ 1 DiscordRpcService.kt\ncom/discord/socialrpc/DiscordRpcService$binder$1\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,65:1\n1#2:66\n*E\n"})
/* loaded from: classes.dex */
public final class DiscordRpcService$binder$1 extends IDiscordRpcService.Stub {
    /* JADX INFO: Access modifiers changed from: private */
    public static final void connect$lambda$0(String str) {
        SocialRpcSessionManager.INSTANCE.onDisconnect(str);
    }

    @Override // com.discord.socialsdk.rpc.IDiscordRpcService
    public IDiscordRpcConnection connect(long applicationId, String version, final IDiscordRpcCallback callback) {
        Object i5;
        Intrinsics.checkNotNullParameter(version, "version");
        Intrinsics.checkNotNullParameter(callback, "callback");
        final String uuid = UUID.randomUUID().toString();
        Intrinsics.checkNotNullExpressionValue(uuid, "toString(...)");
        if (!SocialRpcSessionManager.INSTANCE.onConnect(uuid, applicationId, version, callback)) {
            return null;
        }
        final IBinder.DeathRecipient deathRecipient = new IBinder.DeathRecipient() { // from class: com.discord.socialrpc.a
            @Override // android.os.IBinder.DeathRecipient
            public final void binderDied() {
                DiscordRpcService$binder$1.connect$lambda$0(uuid);
            }
        };
        try {
            q qVar = Result.f13476e;
            callback.asBinder().linkToDeath(deathRecipient, 0);
            i5 = Unit.a;
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = ki.b.i(th2);
        }
        if (!(i5 instanceof r)) {
            return new IDiscordRpcConnection.Stub() { // from class: com.discord.socialrpc.DiscordRpcService$binder$1$connect$1
                @Override // com.discord.socialsdk.rpc.IDiscordRpcConnection
                public void disconnect() {
                    IDiscordRpcCallback iDiscordRpcCallback = callback;
                    IBinder.DeathRecipient deathRecipient2 = deathRecipient;
                    try {
                        q qVar3 = Result.f13476e;
                        iDiscordRpcCallback.asBinder().unlinkToDeath(deathRecipient2, 0);
                    } catch (Throwable th3) {
                        q qVar4 = Result.f13476e;
                        ki.b.i(th3);
                    }
                    SocialRpcSessionManager.INSTANCE.onDisconnect(uuid);
                }

                @Override // com.discord.socialsdk.rpc.IDiscordRpcConnection
                public void sendFrame(String frame) {
                    Intrinsics.checkNotNullParameter(frame, "frame");
                    SocialRpcSessionManager.INSTANCE.onFrame(uuid, frame);
                }
            };
        }
        SocialRpcSessionManager.INSTANCE.onDisconnect(uuid);
        return null;
    }
}
