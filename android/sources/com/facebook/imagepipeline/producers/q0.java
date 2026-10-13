package com.facebook.imagepipeline.producers;

import android.content.ContentResolver;
import android.os.CancellationSignal;
import com.facebook.imagepipeline.request.ImageRequest;
import java.util.concurrent.Executor;
import org.webrtc.MediaStreamTrack;

/* loaded from: classes3.dex */
public final class q0 implements z0 {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final Executor f4799b;

    /* renamed from: c, reason: collision with root package name */
    public final ContentResolver f4800c;

    public /* synthetic */ q0(Executor executor, ContentResolver contentResolver, int i5) {
        this.a = i5;
        this.f4799b = executor;
        this.f4800c = contentResolver;
    }

    @Override // com.facebook.imagepipeline.producers.z0
    public final void b(Consumer consumer, ProducerContext producerContext) {
        switch (this.a) {
            case 0:
                a1 C = producerContext.C();
                ImageRequest g6 = producerContext.g();
                producerContext.o("local", "thumbnail_bitmap");
                p0 p0Var = new p0(this, consumer, C, producerContext, C, producerContext, g6, new CancellationSignal());
                producerContext.i(new o(4, p0Var));
                this.f4799b.execute(p0Var);
                break;
            default:
                a1 C2 = producerContext.C();
                ImageRequest g10 = producerContext.g();
                producerContext.o("local", MediaStreamTrack.VIDEO_TRACK_KIND);
                n0 n0Var = new n0(this, consumer, C2, producerContext, C2, producerContext, g10);
                producerContext.i(new o(5, n0Var));
                this.f4799b.execute(n0Var);
                break;
        }
    }
}
