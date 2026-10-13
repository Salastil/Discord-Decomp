package com.discord.client_info;

import android.content.Context;
import cc.i;
import com.facebook.react.modules.network.OkHttpClientProvider;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import okhttp3.Dispatcher;
import okhttp3.Interceptor;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\bÀ\u0002\u0018\u00002\u00020\u0001:\u0001\fB\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tJ\b\u0010\n\u001a\u00020\u000bH\u0002¨\u0006\r"}, d2 = {"Lcom/discord/client_info/ClientUserAgent;", "", "<init>", "()V", "init", "", "context", "Landroid/content/Context;", "userAgent", "", "createDispatcher", "Lokhttp3/Dispatcher;", "DiscordUserAgentInterceptor", "client_info_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ClientUserAgent {

    @NotNull
    public static final ClientUserAgent INSTANCE = new ClientUserAgent();

    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0002\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0010\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tH\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\n"}, d2 = {"Lcom/discord/client_info/ClientUserAgent$DiscordUserAgentInterceptor;", "Lokhttp3/Interceptor;", "userAgent", "", "<init>", "(Ljava/lang/String;)V", "intercept", "Lokhttp3/Response;", "chain", "Lokhttp3/Interceptor$Chain;", "client_info_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class DiscordUserAgentInterceptor implements Interceptor {

        @NotNull
        private final String userAgent;

        public DiscordUserAgentInterceptor(@NotNull String userAgent) {
            Intrinsics.checkNotNullParameter(userAgent, "userAgent");
            this.userAgent = userAgent;
        }

        @Override // okhttp3.Interceptor
        @NotNull
        public Response intercept(@NotNull Interceptor.Chain chain) {
            Intrinsics.checkNotNullParameter(chain, "chain");
            Request.Builder b10 = chain.i().b();
            b10.g("User-Agent");
            b10.a("User-Agent", this.userAgent);
            return chain.a(b10.b());
        }
    }

    private ClientUserAgent() {
    }

    private final Dispatcher createDispatcher() {
        int i5;
        int i6;
        Dispatcher dispatcher = new Dispatcher();
        synchronized (dispatcher) {
            i5 = dispatcher.a;
        }
        int i10 = i5 * 2;
        if (i10 < 1) {
            throw new IllegalArgumentException(Intrinsics.stringPlus("max < 1: ", Integer.valueOf(i10)).toString());
        }
        synchronized (dispatcher) {
            dispatcher.a = i10;
            Unit unit = Unit.a;
        }
        dispatcher.e();
        synchronized (dispatcher) {
            i6 = dispatcher.a;
        }
        if (i6 < 1) {
            throw new IllegalArgumentException(Intrinsics.stringPlus("max < 1: ", Integer.valueOf(i6)).toString());
        }
        synchronized (dispatcher) {
            dispatcher.f16026b = i6;
        }
        dispatcher.e();
        return dispatcher;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final OkHttpClient init$lambda$0(Context context, String str) {
        OkHttpClient.Builder createClientBuilder = OkHttpClientProvider.createClientBuilder(context);
        Dispatcher dispatcher = INSTANCE.createDispatcher();
        createClientBuilder.getClass();
        Intrinsics.checkNotNullParameter(dispatcher, "dispatcher");
        Intrinsics.checkNotNullParameter(dispatcher, "<set-?>");
        createClientBuilder.a = dispatcher;
        DiscordUserAgentInterceptor interceptor = new DiscordUserAgentInterceptor(str);
        Intrinsics.checkNotNullParameter(interceptor, "interceptor");
        createClientBuilder.f16054c.add(interceptor);
        return new OkHttpClient(createClientBuilder);
    }

    public final void init(@NotNull Context context, @NotNull String userAgent) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(userAgent, "userAgent");
        OkHttpClientProvider.setOkHttpClientFactory(new i(3, context, userAgent));
    }
}
