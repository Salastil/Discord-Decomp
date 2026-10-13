package com.discord.media.engine.video.texture_view;

import com.discord.media.engine.video.texture_view.StreamManager;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class f implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4256d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f4257e;

    public /* synthetic */ f(int i5, Object obj) {
        this.f4256d = i5;
        this.f4257e = obj;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        boolean releaseIfActiveStreamConsumer$lambda$17$lambda$15;
        switch (this.f4256d) {
            case 0:
                releaseIfActiveStreamConsumer$lambda$17$lambda$15 = StreamManager.releaseIfActiveStreamConsumer$lambda$17$lambda$15((String) this.f4257e, (StreamManager.StreamConsumerData) obj);
                break;
            default:
                releaseIfActiveStreamConsumer$lambda$17$lambda$15 = StreamManager.pruneReleasedProducers$lambda$25((StreamManager) this.f4257e, (String) obj);
                break;
        }
        return Boolean.valueOf(releaseIfActiveStreamConsumer$lambda$17$lambda$15);
    }
}
