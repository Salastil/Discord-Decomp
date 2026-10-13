package com.discord.media_player;

import com.google.android.exoplayer2.ext.okhttp.OkHttpDataSource$Factory;
import com.google.android.exoplayer2.upstream.DataSource;
import e4.r;
import java.util.concurrent.TimeUnit;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import okhttp3.OkHttpClient;
import org.jetbrains.annotations.NotNull;
import pc.a;

@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\b\u0010\n\u001a\u0004\u0018\u00010\u0007R\u0010\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0006\u001a\u0004\u0018\u00010\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u000b"}, d2 = {"Lcom/discord/media_player/OkHttpDataSourceProvider;", "", "<init>", "()V", "okHttpClient", "Lokhttp3/OkHttpClient;", "factory", "Lcom/google/android/exoplayer2/ext/okhttp/OkHttpDataSource$Factory;", "initAttempted", "", "getFactory", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class OkHttpDataSourceProvider {

    @NotNull
    public static final OkHttpDataSourceProvider INSTANCE = new OkHttpDataSourceProvider();
    private static OkHttpDataSource$Factory factory;
    private static boolean initAttempted;
    private static OkHttpClient okHttpClient;

    private OkHttpDataSourceProvider() {
    }

    /* JADX WARN: Type inference failed for: r0v5, types: [com.google.android.exoplayer2.ext.okhttp.OkHttpDataSource$Factory] */
    public final synchronized OkHttpDataSource$Factory getFactory() {
        if (!initAttempted) {
            initAttempted = true;
            try {
                OkHttpClient.Builder builder = new OkHttpClient.Builder();
                TimeUnit timeUnit = TimeUnit.SECONDS;
                builder.a(30L, timeUnit);
                builder.c(30L, timeUnit);
                final OkHttpClient okHttpClient2 = new OkHttpClient(builder);
                okHttpClient = okHttpClient2;
                Intrinsics.checkNotNull(okHttpClient2);
                factory = new DataSource.Factory(okHttpClient2) { // from class: com.google.android.exoplayer2.ext.okhttp.OkHttpDataSource$Factory

                    /* renamed from: d, reason: collision with root package name */
                    public final r f5414d = new r(11);

                    /* renamed from: e, reason: collision with root package name */
                    public final OkHttpClient f5415e;

                    {
                        this.f5415e = okHttpClient2;
                    }

                    @Override // com.google.android.exoplayer2.upstream.DataSource.Factory
                    public final DataSource createDataSource() {
                        return new a(this.f5415e, null, this.f5414d);
                    }
                };
            } catch (Exception unused) {
            }
        }
        return factory;
    }
}
