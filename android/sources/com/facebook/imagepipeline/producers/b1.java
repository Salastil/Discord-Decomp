package com.facebook.imagepipeline.producers;

import com.facebook.imagepipeline.common.ResizeOptions;
import com.facebook.imagepipeline.common.RotationOptions;
import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.imagepipeline.request.ImageRequest;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class b1 extends r {

    /* renamed from: c, reason: collision with root package name */
    public final boolean f4701c;

    /* renamed from: d, reason: collision with root package name */
    public final ua.b f4702d;

    /* renamed from: e, reason: collision with root package name */
    public final ProducerContext f4703e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f4704f;

    /* renamed from: g, reason: collision with root package name */
    public final h0 f4705g;

    /* renamed from: h, reason: collision with root package name */
    public final /* synthetic */ c1 f4706h;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b1(c1 c1Var, Consumer consumer, ProducerContext producerContext, boolean z5, ua.b bVar) {
        super(consumer);
        this.f4706h = c1Var;
        this.f4704f = false;
        this.f4703e = producerContext;
        Boolean resizingAllowedOverride = producerContext.g().getResizingAllowedOverride();
        this.f4701c = resizingAllowedOverride != null ? resizingAllowedOverride.booleanValue() : z5;
        this.f4702d = bVar;
        this.f4705g = new h0(c1Var.a, new u4.b(7, this));
        producerContext.i(new r0(1, this, consumer));
    }

    /* JADX WARN: Code restructure failed: missing block: B:64:0x0070, code lost:
    
        if (r7 != false) goto L28;
     */
    /* JADX WARN: Removed duplicated region for block: B:72:0x008b  */
    @Override // com.facebook.imagepipeline.producers.c
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void h(int i5, Object obj) {
        char c6;
        boolean z5;
        boolean z6;
        EncodedImage encodedImage = (EncodedImage) obj;
        if (this.f4704f) {
            return;
        }
        boolean d6 = c.d(i5);
        Consumer consumer = this.f4801b;
        if (encodedImage == null) {
            if (d6) {
                consumer.b(1, null);
                return;
            }
            return;
        }
        aa.c imageFormat = encodedImage.getImageFormat();
        ProducerContext producerContext = this.f4703e;
        ImageRequest g6 = producerContext.g();
        ua.a createImageTranscoder = this.f4702d.createImageTranscoder(imageFormat, this.f4701c);
        createImageTranscoder.getClass();
        if (encodedImage.getImageFormat() == aa.c.f275c) {
            c6 = 3;
        } else {
            c6 = 2;
            if (createImageTranscoder.d(encodedImage.getImageFormat())) {
                RotationOptions rotationOptions = g6.getRotationOptions();
                if (!rotationOptions.f4588b) {
                    if (ua.c.b(rotationOptions, encodedImage) == 0) {
                        if (rotationOptions.a == -2 || rotationOptions.f4588b) {
                            encodedImage.setExifOrientation(0);
                            z6 = false;
                        } else {
                            z6 = ua.c.a.contains(Integer.valueOf(encodedImage.getExifOrientation()));
                        }
                    }
                    z5 = true;
                    if (!z5 || createImageTranscoder.c(encodedImage, g6.getRotationOptions(), g6.getResizeOptions())) {
                        c6 = 1;
                    }
                }
                z5 = false;
                if (!z5 || createImageTranscoder.c(encodedImage, g6.getRotationOptions(), g6.getResizeOptions())) {
                }
            }
        }
        if (d6 || c6 != 3) {
            if (c6 == 1) {
                h0 h0Var = this.f4705g;
                if (h0Var.e(encodedImage, i5)) {
                    if (d6 || producerContext.P()) {
                        h0Var.c();
                        return;
                    }
                    return;
                }
                return;
            }
            if (imageFormat != aa.b.a && imageFormat != aa.b.k) {
                RotationOptions rotationOptions2 = producerContext.g().getRotationOptions();
                boolean a = rotationOptions2.a();
                int i6 = rotationOptions2.a;
                if (!a) {
                    if (i6 != -2) {
                        if (rotationOptions2.a()) {
                            throw new IllegalStateException("Rotation is set to use EXIF");
                        }
                        encodedImage = EncodedImage.cloneOrNull(encodedImage);
                        if (encodedImage != null) {
                            encodedImage.setRotationAngle(i6);
                        }
                    }
                }
            } else if (!producerContext.g().getRotationOptions().f4588b && encodedImage.getRotationAngle() != 0 && encodedImage.getRotationAngle() != -1 && (encodedImage = EncodedImage.cloneOrNull(encodedImage)) != null) {
                encodedImage.setRotationAngle(0);
            }
            consumer.b(i5, encodedImage);
        }
    }

    public final o8.e l(EncodedImage encodedImage, ResizeOptions resizeOptions, p9.d dVar, String str) {
        String str2;
        long j;
        ProducerContext producerContext = this.f4703e;
        if (!producerContext.C().f(producerContext, "ResizeAndRotateProducer")) {
            return null;
        }
        String str3 = encodedImage.getWidth() + "x" + encodedImage.getHeight();
        if (resizeOptions != null) {
            str2 = resizeOptions.a + "x" + resizeOptions.f4584b;
        } else {
            str2 = "Unspecified";
        }
        HashMap hashMap = new HashMap();
        hashMap.put("Image format", String.valueOf(encodedImage.getImageFormat()));
        hashMap.put("Original size", str3);
        hashMap.put("Requested size", str2);
        h0 h0Var = this.f4705g;
        synchronized (h0Var) {
            j = h0Var.f4744i - h0Var.f4743h;
        }
        hashMap.put("queueTime", String.valueOf(j));
        hashMap.put("Transcoder id", str);
        hashMap.put("Transcoding result", String.valueOf(dVar));
        return new o8.e(hashMap);
    }
}
