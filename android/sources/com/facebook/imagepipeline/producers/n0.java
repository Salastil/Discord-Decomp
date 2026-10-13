package com.facebook.imagepipeline.producers;

import android.content.ContentResolver;
import android.graphics.Bitmap;
import android.media.MediaMetadataRetriever;
import android.media.ThumbnailUtils;
import android.os.ParcelFileDescriptor;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.imagepipeline.request.ImageRequest;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Map;
import org.webrtc.MediaStreamTrack;

/* loaded from: classes3.dex */
public final class n0 extends e1 {
    public final /* synthetic */ ProducerContext E;
    public final /* synthetic */ Object F;
    public final /* synthetic */ z0 G;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ int f4778x = 2;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ a1 f4779y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public n0(Consumer consumer, a1 a1Var, ProducerContext producerContext, f1 f1Var) {
        super(consumer, a1Var, producerContext, "BackgroundThreadHandoffProducer");
        this.F = consumer;
        this.f4779y = a1Var;
        this.E = producerContext;
        this.G = f1Var;
    }

    @Override // com.facebook.imagepipeline.producers.e1
    public final void b(Object obj) {
        switch (this.f4778x) {
            case 0:
                EncodedImage.closeSafely((EncodedImage) obj);
                break;
            case 1:
                CloseableReference.l((CloseableReference) obj);
                break;
        }
    }

    @Override // com.facebook.imagepipeline.producers.e1
    public Map c(Object obj) {
        switch (this.f4778x) {
            case 1:
                return o8.e.a("createdThumbnail", String.valueOf(((CloseableReference) obj) != null));
            default:
                return super.c(obj);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:46:0x0073  */
    /* JADX WARN: Removed duplicated region for block: B:48:? A[RETURN, SYNTHETIC] */
    @Override // com.facebook.imagepipeline.producers.e1
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object d() {
        String str;
        Bitmap bitmap;
        MediaMetadataRetriever mediaMetadataRetriever;
        Bitmap bitmap2;
        ParcelFileDescriptor openFileDescriptor;
        int i5 = this.f4778x;
        int i6 = 1;
        Object obj = this.F;
        z0 z0Var = this.G;
        ProducerContext producerContext = this.E;
        MediaMetadataRetriever mediaMetadataRetriever2 = null;
        switch (i5) {
            case 0:
                o0 o0Var = (o0) z0Var;
                EncodedImage d6 = o0Var.d((ImageRequest) obj);
                a1 a1Var = this.f4779y;
                if (d6 == null) {
                    a1Var.b(producerContext, o0Var.e(), false);
                    producerContext.o("local", "fetch");
                    return null;
                }
                d6.parseMetaData();
                a1Var.b(producerContext, o0Var.e(), true);
                producerContext.o("local", "fetch");
                producerContext.A(d6.getColorSpace(), "image_color_space");
                return d6;
            case 1:
                ContentResolver contentResolver = ((q0) z0Var).f4800c;
                ImageRequest imageRequest = (ImageRequest) obj;
                try {
                    str = w8.a.a(contentResolver, imageRequest.getSourceUri());
                } catch (IllegalArgumentException unused) {
                    str = null;
                }
                if (str != null) {
                    if (imageRequest.getPreferredWidth() <= 96 && imageRequest.getPreferredHeight() <= 96) {
                        i6 = 3;
                    }
                    bitmap = ThumbnailUtils.createVideoThumbnail(str, i6);
                } else {
                    bitmap = null;
                }
                if (bitmap == null) {
                    try {
                        openFileDescriptor = contentResolver.openFileDescriptor(imageRequest.getSourceUri(), "r");
                        openFileDescriptor.getClass();
                        mediaMetadataRetriever = new MediaMetadataRetriever();
                    } catch (FileNotFoundException unused2) {
                        mediaMetadataRetriever = null;
                    } catch (Throwable th2) {
                        th = th2;
                    }
                    try {
                        mediaMetadataRetriever.setDataSource(openFileDescriptor.getFileDescriptor());
                        bitmap2 = mediaMetadataRetriever.getFrameAtTime(-1L);
                        try {
                            mediaMetadataRetriever.release();
                        } catch (IOException unused3) {
                        }
                    } catch (FileNotFoundException unused4) {
                        if (mediaMetadataRetriever != null) {
                            try {
                                mediaMetadataRetriever.release();
                            } catch (IOException unused5) {
                            }
                        }
                        bitmap2 = null;
                        bitmap = bitmap2;
                        if (bitmap != null) {
                        }
                    } catch (Throwable th3) {
                        th = th3;
                        mediaMetadataRetriever2 = mediaMetadataRetriever;
                        if (mediaMetadataRetriever2 != null) {
                            try {
                                mediaMetadataRetriever2.release();
                            } catch (IOException unused6) {
                            }
                        }
                        throw th;
                    }
                    bitmap = bitmap2;
                }
                if (bitmap != null) {
                    return null;
                }
                lh.f g6 = lh.f.g();
                oa.j jVar = oa.j.f15814d;
                int i10 = oa.g.F;
                oa.g gVar = new oa.g(bitmap, g6, jVar);
                producerContext.A("thumbnail", "image_format");
                gVar.q(producerContext.getExtras());
                return CloseableReference.A(gVar);
            default:
                return null;
        }
    }

    @Override // com.facebook.imagepipeline.producers.e1
    public void f(Exception exc) {
        switch (this.f4778x) {
            case 1:
                super.f(exc);
                a1 a1Var = this.f4779y;
                ProducerContext producerContext = this.E;
                a1Var.b(producerContext, "VideoThumbnailProducer", false);
                producerContext.o("local", MediaStreamTrack.VIDEO_TRACK_KIND);
                break;
            default:
                super.f(exc);
                break;
        }
    }

    @Override // com.facebook.imagepipeline.producers.e1
    public void g(Object obj) {
        switch (this.f4778x) {
            case 1:
                CloseableReference closeableReference = (CloseableReference) obj;
                super.g(closeableReference);
                boolean z5 = closeableReference != null;
                a1 a1Var = this.f4779y;
                ProducerContext producerContext = this.E;
                a1Var.b(producerContext, "VideoThumbnailProducer", z5);
                producerContext.o("local", MediaStreamTrack.VIDEO_TRACK_KIND);
                break;
            case 2:
                a1 a1Var2 = this.f4779y;
                ProducerContext producerContext2 = this.E;
                a1Var2.i(producerContext2, "BackgroundThreadHandoffProducer", null);
                ((f1) this.G).f4733b.b((Consumer) this.F, producerContext2);
                break;
            default:
                super.g(obj);
                break;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public n0(o0 o0Var, Consumer consumer, a1 a1Var, ProducerContext producerContext, String str, ImageRequest imageRequest, a1 a1Var2, ProducerContext producerContext2) {
        super(consumer, a1Var, producerContext, str);
        this.G = o0Var;
        this.F = imageRequest;
        this.f4779y = a1Var2;
        this.E = producerContext2;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public n0(q0 q0Var, Consumer consumer, a1 a1Var, ProducerContext producerContext, a1 a1Var2, ProducerContext producerContext2, ImageRequest imageRequest) {
        super(consumer, a1Var, producerContext, "VideoThumbnailProducer");
        this.G = q0Var;
        this.f4779y = a1Var2;
        this.E = producerContext2;
        this.F = imageRequest;
    }

    private final void h(Object obj) {
    }
}
