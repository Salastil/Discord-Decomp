package com.facebook.imagepipeline.producers;

import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.image.EncodedImage;

/* loaded from: classes3.dex */
public final class a extends r {

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ int f4695c;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ a(Consumer consumer, int i5) {
        super(consumer);
        this.f4695c = i5;
    }

    @Override // com.facebook.imagepipeline.producers.c
    public final void h(int i5, Object obj) {
        switch (this.f4695c) {
            case 0:
                EncodedImage encodedImage = (EncodedImage) obj;
                Consumer consumer = this.f4801b;
                if (encodedImage == null) {
                    consumer.b(i5, null);
                    return;
                }
                if (!EncodedImage.isMetaDataAvailable(encodedImage)) {
                    encodedImage.parseMetaData();
                }
                consumer.b(i5, encodedImage);
                return;
            case 1:
                CloseableReference closeableReference = (CloseableReference) obj;
                if (c.e(i5)) {
                    return;
                }
                this.f4801b.b(i5, closeableReference);
                return;
            case 2:
                EncodedImage encodedImage2 = (EncodedImage) obj;
                CloseableReference closeableReference2 = null;
                try {
                    if (EncodedImage.isValid(encodedImage2) && encodedImage2 != null) {
                        closeableReference2 = encodedImage2.getByteBufferRef();
                    }
                    this.f4801b.b(i5, closeableReference2);
                    CloseableReference.l(closeableReference2);
                    return;
                } catch (Throwable th2) {
                    CloseableReference.l(closeableReference2);
                    throw th2;
                }
            default:
                if (c.d(i5)) {
                    this.f4801b.b(i5, null);
                    return;
                }
                return;
        }
    }
}
