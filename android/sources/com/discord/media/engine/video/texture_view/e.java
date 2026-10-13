package com.discord.media.engine.video.texture_view;

import com.discord.media.engine.video.texture_view.StreamManager;
import java.lang.ref.WeakReference;
import java.util.Map;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class e implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4255d;

    public /* synthetic */ e(int i5) {
        this.f4255d = i5;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        boolean clearEmptyReferences$lambda$36$lambda$33$lambda$31;
        switch (this.f4255d) {
            case 0:
                clearEmptyReferences$lambda$36$lambda$33$lambda$31 = StreamManager.clearEmptyReferences$lambda$36$lambda$33$lambda$31((StreamManager.StreamConsumerData) obj);
                break;
            case 1:
                clearEmptyReferences$lambda$36$lambda$33$lambda$31 = StreamManager.clearEmptyReferences$lambda$36$lambda$29((Map.Entry) obj);
                break;
            case 2:
                clearEmptyReferences$lambda$36$lambda$33$lambda$31 = StreamManager.clearEmptyReferences$lambda$36$lambda$34((Map.Entry) obj);
                break;
            case 3:
                clearEmptyReferences$lambda$36$lambda$33$lambda$31 = StreamManager.pruneReleasedProducers$lambda$22$lambda$20((WeakReference) obj);
                break;
            case 4:
                clearEmptyReferences$lambda$36$lambda$33$lambda$31 = StreamManager.pruneReleasedProducers$lambda$23((Map.Entry) obj);
                break;
            case 5:
                clearEmptyReferences$lambda$36$lambda$33$lambda$31 = StreamManager.setActiveStreamConsumer$lambda$11$lambda$10$lambda$8((WeakReference) obj);
                break;
            default:
                clearEmptyReferences$lambda$36$lambda$33$lambda$31 = StreamManager.parkProducersOnPlaceholderSink$lambda$18((WeakReference) obj);
                break;
        }
        return Boolean.valueOf(clearEmptyReferences$lambda$36$lambda$33$lambda$31);
    }
}
