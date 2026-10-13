package com.discord.media.engine.video.texture_view;

import java.util.function.Predicate;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class d implements Predicate {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Function1 f4254b;

    public /* synthetic */ d(Function1 function1, int i5) {
        this.a = i5;
        this.f4254b = function1;
    }

    @Override // java.util.function.Predicate
    public final boolean test(Object obj) {
        boolean clearEmptyReferences$lambda$36$lambda$30;
        boolean clearEmptyReferences$lambda$36$lambda$33$lambda$32;
        boolean clearEmptyReferences$lambda$36$lambda$35;
        boolean pruneReleasedProducers$lambda$22$lambda$21;
        boolean pruneReleasedProducers$lambda$24;
        boolean releaseIfActiveStreamConsumer$lambda$17$lambda$16;
        switch (this.a) {
            case 0:
                clearEmptyReferences$lambda$36$lambda$30 = StreamManager.clearEmptyReferences$lambda$36$lambda$30((e) this.f4254b, obj);
                return clearEmptyReferences$lambda$36$lambda$30;
            case 1:
                clearEmptyReferences$lambda$36$lambda$33$lambda$32 = StreamManager.clearEmptyReferences$lambda$36$lambda$33$lambda$32((e) this.f4254b, obj);
                return clearEmptyReferences$lambda$36$lambda$33$lambda$32;
            case 2:
                clearEmptyReferences$lambda$36$lambda$35 = StreamManager.clearEmptyReferences$lambda$36$lambda$35((e) this.f4254b, obj);
                return clearEmptyReferences$lambda$36$lambda$35;
            case 3:
                pruneReleasedProducers$lambda$22$lambda$21 = StreamManager.pruneReleasedProducers$lambda$22$lambda$21((e) this.f4254b, obj);
                return pruneReleasedProducers$lambda$22$lambda$21;
            case 4:
                pruneReleasedProducers$lambda$24 = StreamManager.pruneReleasedProducers$lambda$24((e) this.f4254b, obj);
                return pruneReleasedProducers$lambda$24;
            default:
                releaseIfActiveStreamConsumer$lambda$17$lambda$16 = StreamManager.releaseIfActiveStreamConsumer$lambda$17$lambda$16((f) this.f4254b, obj);
                return releaseIfActiveStreamConsumer$lambda$17$lambda$16;
        }
    }
}
