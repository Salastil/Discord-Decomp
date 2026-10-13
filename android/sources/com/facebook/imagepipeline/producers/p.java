package com.facebook.imagepipeline.producers;

import android.graphics.Bitmap;
import com.facebook.imagepipeline.common.ImageDecodeOptions;
import com.facebook.imagepipeline.core.ImagePipelineConfig;
import com.facebook.imagepipeline.image.EncodedImage;
import java.util.HashMap;
import java.util.concurrent.Executor;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class p extends r {

    /* renamed from: c, reason: collision with root package name */
    public final ProducerContext f4782c;

    /* renamed from: d, reason: collision with root package name */
    public final String f4783d;

    /* renamed from: e, reason: collision with root package name */
    public final a1 f4784e;

    /* renamed from: f, reason: collision with root package name */
    public final ImageDecodeOptions f4785f;

    /* renamed from: g, reason: collision with root package name */
    public boolean f4786g;

    /* renamed from: h, reason: collision with root package name */
    public final h0 f4787h;

    /* renamed from: i, reason: collision with root package name */
    public int f4788i;
    public final /* synthetic */ q j;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public p(q qVar, Consumer consumer, ProducerContext producerContext, int i5) {
        super(consumer);
        Intrinsics.checkNotNullParameter(consumer, "consumer");
        Intrinsics.checkNotNullParameter(producerContext, "producerContext");
        this.j = qVar;
        this.f4782c = producerContext;
        this.f4783d = "ProgressiveDecoder";
        this.f4784e = producerContext.C();
        ImageDecodeOptions imageDecodeOptions = producerContext.g().getImageDecodeOptions();
        Intrinsics.checkNotNullExpressionValue(imageDecodeOptions, "getImageDecodeOptions(...)");
        this.f4785f = imageDecodeOptions;
        cc.f fVar = new cc.f(this, qVar, i5, 1);
        Executor executor = qVar.f4791b;
        imageDecodeOptions.getClass();
        this.f4787h = new h0(executor, fVar);
        producerContext.i(new o(0, this));
    }

    @Override // com.facebook.imagepipeline.producers.r, com.facebook.imagepipeline.producers.c
    public final void f() {
        o(true);
        this.f4801b.a();
    }

    @Override // com.facebook.imagepipeline.producers.r, com.facebook.imagepipeline.producers.c
    public final void g(Throwable t5) {
        Intrinsics.checkNotNullParameter(t5, "t");
        o(true);
        this.f4801b.onFailure(t5);
    }

    @Override // com.facebook.imagepipeline.producers.c
    public final void h(int i5, Object obj) {
        EncodedImage encodedImage = (EncodedImage) obj;
        ta.a.D();
        boolean d6 = c.d(i5);
        ProducerContext producerContext = this.f4782c;
        if (d6) {
            Consumer consumer = this.f4801b;
            if (encodedImage == null) {
                Intrinsics.areEqual(producerContext.t("cached_value_found"), Boolean.TRUE);
                ((ImagePipelineConfig) producerContext.l()).f4622u.getClass();
                ap.a aVar = new ap.a("Encoded image is null.", 7);
                o(true);
                consumer.onFailure(aVar);
                return;
            }
            if (!encodedImage.isValid()) {
                ap.a aVar2 = new ap.a("Encoded image is not valid.", 7);
                o(true);
                consumer.onFailure(aVar2);
                return;
            }
        }
        if (q(encodedImage, i5)) {
            boolean k = c.k(i5, 4);
            if (d6 || k || producerContext.P()) {
                this.f4787h.c();
            }
        }
    }

    @Override // com.facebook.imagepipeline.producers.r, com.facebook.imagepipeline.producers.c
    public final void i(float f2) {
        super.i(f2 * 0.99f);
    }

    public final o8.e l(oa.c cVar, long j, oa.k kVar, boolean z5, String str, String str2, String str3, String str4) {
        HashMap hashMap;
        Object obj;
        String str5 = null;
        if (!this.f4784e.f(this.f4782c, "DecodeProducer")) {
            return null;
        }
        String valueOf = String.valueOf(j);
        String valueOf2 = String.valueOf(((oa.j) kVar).f15815b);
        String valueOf3 = String.valueOf(z5);
        if (cVar != null && (hashMap = ((oa.a) cVar).f15801d) != null && (obj = hashMap.get("non_fatal_decode_error")) != null) {
            str5 = obj.toString();
        }
        if (!(cVar instanceof oa.d)) {
            String str6 = str5;
            HashMap hashMap2 = new HashMap(7);
            hashMap2.put("queueTime", valueOf);
            hashMap2.put("hasGoodQuality", valueOf2);
            hashMap2.put("isFinal", valueOf3);
            hashMap2.put("encodedImageSize", str2);
            hashMap2.put("imageFormat", str);
            hashMap2.put("requestedImageSize", str3);
            hashMap2.put("sampleSize", str4);
            if (str6 != null) {
                hashMap2.put("non_fatal_decode_error", str6);
            }
            return new o8.e(hashMap2);
        }
        String str7 = str5;
        Bitmap bitmap = ((oa.g) ((oa.d) cVar)).f15806w;
        Intrinsics.checkNotNullExpressionValue(bitmap, "getUnderlyingBitmap(...)");
        String str8 = bitmap.getWidth() + "x" + bitmap.getHeight();
        HashMap hashMap3 = new HashMap(8);
        hashMap3.put("bitmapSize", str8);
        hashMap3.put("queueTime", valueOf);
        hashMap3.put("hasGoodQuality", valueOf2);
        hashMap3.put("isFinal", valueOf3);
        hashMap3.put("encodedImageSize", str2);
        hashMap3.put("imageFormat", str);
        hashMap3.put("requestedImageSize", str3);
        hashMap3.put("sampleSize", str4);
        int byteCount = bitmap.getByteCount();
        StringBuilder sb2 = new StringBuilder();
        sb2.append(byteCount);
        hashMap3.put("byteCount", sb2.toString());
        if (str7 != null) {
            hashMap3.put("non_fatal_decode_error", str7);
        }
        return new o8.e(hashMap3);
    }

    public abstract int m(EncodedImage encodedImage);

    public abstract oa.j n();

    public final void o(boolean z5) {
        EncodedImage encodedImage;
        synchronized (this) {
            if (z5) {
                if (!this.f4786g) {
                    this.f4801b.c(1.0f);
                    this.f4786g = true;
                    Unit unit = Unit.a;
                    h0 h0Var = this.f4787h;
                    synchronized (h0Var) {
                        encodedImage = h0Var.f4740e;
                        h0Var.f4740e = null;
                        h0Var.f4741f = 0;
                    }
                    EncodedImage.closeSafely(encodedImage);
                }
            }
        }
    }

    public final void p(EncodedImage encodedImage, oa.c cVar, int i5) {
        this.f4782c.A(Integer.valueOf(encodedImage.getWidth()), "encoded_width");
        this.f4782c.A(Integer.valueOf(encodedImage.getHeight()), "encoded_height");
        this.f4782c.A(Integer.valueOf(encodedImage.getSize()), "encoded_size");
        this.f4782c.A(encodedImage.getColorSpace(), "image_color_space");
        if (cVar instanceof oa.d) {
            this.f4782c.A(String.valueOf(((oa.g) ((oa.d) cVar)).f15806w.getConfig()), "bitmap_config");
        }
        if (cVar != null) {
            ((oa.a) cVar).q(this.f4782c.getExtras());
        }
        this.f4782c.A(Integer.valueOf(i5), "last_scan_num");
    }

    public abstract boolean q(EncodedImage encodedImage, int i5);
}
