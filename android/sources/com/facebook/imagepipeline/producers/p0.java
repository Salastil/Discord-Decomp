package com.facebook.imagepipeline.producers;

import android.content.ContentResolver;
import android.graphics.Bitmap;
import android.media.ThumbnailUtils;
import android.os.CancellationSignal;
import android.util.Size;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.request.ImageRequest;
import java.io.File;
import java.util.Map;

/* loaded from: classes3.dex */
public final class p0 extends e1 {
    public final /* synthetic */ ImageRequest E;
    public final /* synthetic */ CancellationSignal F;
    public final /* synthetic */ q0 G;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ a1 f4789x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ ProducerContext f4790y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public p0(q0 q0Var, Consumer consumer, a1 a1Var, ProducerContext producerContext, a1 a1Var2, ProducerContext producerContext2, ImageRequest imageRequest, CancellationSignal cancellationSignal) {
        super(consumer, a1Var, producerContext, "LocalThumbnailBitmapSdk29Producer");
        this.G = q0Var;
        this.f4789x = a1Var2;
        this.f4790y = producerContext2;
        this.E = imageRequest;
        this.F = cancellationSignal;
    }

    @Override // com.facebook.imagepipeline.producers.e1
    public final void b(Object obj) {
        CloseableReference.l((CloseableReference) obj);
    }

    @Override // com.facebook.imagepipeline.producers.e1
    public final Map c(Object obj) {
        return o8.e.a("createdThumbnail", String.valueOf(((CloseableReference) obj) != null));
    }

    @Override // com.facebook.imagepipeline.producers.e1
    public final Object d() {
        String str;
        Bitmap bitmap;
        ContentResolver contentResolver = this.G.f4800c;
        ImageRequest imageRequest = this.E;
        Size size = new Size(imageRequest.getPreferredWidth(), imageRequest.getPreferredHeight());
        try {
            str = w8.a.a(contentResolver, imageRequest.getSourceUri());
        } catch (IllegalArgumentException unused) {
            str = null;
        }
        CancellationSignal cancellationSignal = this.F;
        if (str != null) {
            String a = q8.a.a(str);
            bitmap = a != null ? kotlin.text.x.o(a, "video/", false) : false ? ThumbnailUtils.createVideoThumbnail(new File(str), size, cancellationSignal) : ThumbnailUtils.createImageThumbnail(new File(str), size, cancellationSignal);
        } else {
            bitmap = null;
        }
        if (bitmap == null) {
            bitmap = contentResolver.loadThumbnail(imageRequest.getSourceUri(), size, cancellationSignal);
        }
        if (bitmap == null) {
            return null;
        }
        lh.f g6 = lh.f.g();
        oa.j jVar = oa.j.f15814d;
        int i5 = oa.g.F;
        oa.g gVar = new oa.g(bitmap, g6, jVar);
        ProducerContext producerContext = this.f4790y;
        producerContext.A("thumbnail", "image_format");
        gVar.q(producerContext.getExtras());
        return CloseableReference.A(gVar);
    }

    @Override // com.facebook.imagepipeline.producers.e1
    public final void e() {
        super.e();
        this.F.cancel();
    }

    @Override // com.facebook.imagepipeline.producers.e1
    public final void f(Exception exc) {
        super.f(exc);
        a1 a1Var = this.f4789x;
        ProducerContext producerContext = this.f4790y;
        a1Var.b(producerContext, "LocalThumbnailBitmapSdk29Producer", false);
        producerContext.o("local", "thumbnail_bitmap");
    }

    @Override // com.facebook.imagepipeline.producers.e1
    public final void g(Object obj) {
        CloseableReference closeableReference = (CloseableReference) obj;
        super.g(closeableReference);
        boolean z5 = closeableReference != null;
        a1 a1Var = this.f4789x;
        ProducerContext producerContext = this.f4790y;
        a1Var.b(producerContext, "LocalThumbnailBitmapSdk29Producer", z5);
        producerContext.o("local", "thumbnail_bitmap");
    }
}
