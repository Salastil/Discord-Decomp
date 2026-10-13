package com.discord.avatar.react;

import android.content.Context;
import com.discord.media.engine.video.AttachedVideoSinks;
import com.discord.media_player.HttpEngineFactoryResolver;
import com.google.android.exoplayer2.upstream.DataSource;
import java.util.function.Function;
import kotlinx.coroutines.Deferred;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f3767b;

    public /* synthetic */ a(int i5, Object obj) {
        this.a = i5;
        this.f3767b = obj;
    }

    @Override // java.util.function.Function
    public final Object apply(Object obj) {
        Deferred orStartDownload$lambda$1;
        AttachedVideoSinks.VideoOutputSinks addSink$lambda$2;
        DataSource.Factory init$lambda$0;
        switch (this.a) {
            case 0:
                orStartDownload$lambda$1 = APNGPreloadModule.getOrStartDownload$lambda$1((b7.a) this.f3767b, obj);
                return orStartDownload$lambda$1;
            case 1:
                addSink$lambda$2 = AttachedVideoSinks.addSink$lambda$2((com.discord.media.engine.video.a) this.f3767b, obj);
                return addSink$lambda$2;
            default:
                init$lambda$0 = HttpEngineFactoryResolver.init$lambda$0((Context) this.f3767b, (String) obj);
                return init$lambda$0;
        }
    }
}
