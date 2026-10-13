package com.facebook.imagepipeline.producers;

import android.content.ContentResolver;
import com.facebook.imagepipeline.common.ResizeOptions;
import com.facebook.imagepipeline.request.ImageRequest;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public final class m0 implements l1 {
    public final Executor a;

    /* renamed from: b, reason: collision with root package name */
    public final e4.c f4775b;

    /* renamed from: c, reason: collision with root package name */
    public final ContentResolver f4776c;

    public m0(Executor executor, e4.c cVar, ContentResolver contentResolver) {
        this.a = executor;
        this.f4775b = cVar;
        this.f4776c = contentResolver;
    }

    @Override // com.facebook.imagepipeline.producers.l1
    public final boolean a(ResizeOptions resizeOptions) {
        return a5.k0.E(IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING, IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING, resizeOptions);
    }

    @Override // com.facebook.imagepipeline.producers.z0
    public final void b(Consumer consumer, ProducerContext producerContext) {
        a1 C = producerContext.C();
        ImageRequest g6 = producerContext.g();
        producerContext.o("local", "exif");
        l0 l0Var = new l0(this, consumer, C, producerContext, g6);
        producerContext.i(new o(2, l0Var));
        this.a.execute(l0Var);
    }
}
