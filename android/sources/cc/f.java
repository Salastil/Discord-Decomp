package cc;

import android.graphics.Bitmap;
import android.net.Uri;
import com.discord.jank_stats.JankScreenContext;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.common.ImageDecodeOptions;
import com.facebook.imagepipeline.common.ResizeOptions;
import com.facebook.imagepipeline.common.RotationOptions;
import com.facebook.imagepipeline.core.DownsampleMode;
import com.facebook.imagepipeline.core.ImagePipelineConfig;
import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.imagepipeline.producers.ProducerContext;
import com.facebook.imagepipeline.producers.a1;
import com.facebook.imagepipeline.producers.g0;
import com.facebook.imagepipeline.producers.h0;
import com.facebook.imagepipeline.producers.p;
import com.facebook.imagepipeline.producers.q;
import com.facebook.imagepipeline.request.ImageRequest;
import com.facebook.imageutils.BitmapUtil;
import com.google.android.exoplayer2.MediaItem;
import com.google.android.exoplayer2.Player;
import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;
import e4.m;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class f implements ec.b, g0, ke.j {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3379d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f3380e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f3381i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f3382v;

    public /* synthetic */ f(Player.PositionInfo positionInfo, Player.PositionInfo positionInfo2, int i5) {
        this.f3379d = 2;
        this.f3380e = i5;
        this.f3381i = positionInfo;
        this.f3382v = positionInfo2;
    }

    /* JADX WARN: Can't wrap try/catch for region: R(13:38|39|16b|46|(3:(16:(25:50|(23:54|55|56|57|58|59|60|61|62|64|65|66|67|68|(1:70)(1:86)|71|72|(1:74)(2:84|85)|75|76|77|78|79)|116|55|56|57|58|59|60|61|62|64|65|66|67|68|(0)(0)|71|72|(0)(0)|75|76|77|78|79)|(23:54|55|56|57|58|59|60|61|62|64|65|66|67|68|(0)(0)|71|72|(0)(0)|75|76|77|78|79)|64|65|66|67|68|(0)(0)|71|72|(0)(0)|75|76|77|78|79)|61|62)|117|116|55|56|57|58|59|60) */
    /* JADX WARN: Can't wrap try/catch for region: R(19:24|(2:26|(2:28|29))|30|(1:126)(1:34)|35|(1:37)|38|39|16b|46|(3:(16:(25:50|(23:54|55|56|57|58|59|60|61|62|64|65|66|67|68|(1:70)(1:86)|71|72|(1:74)(2:84|85)|75|76|77|78|79)|116|55|56|57|58|59|60|61|62|64|65|66|67|68|(0)(0)|71|72|(0)(0)|75|76|77|78|79)|(23:54|55|56|57|58|59|60|61|62|64|65|66|67|68|(0)(0)|71|72|(0)(0)|75|76|77|78|79)|64|65|66|67|68|(0)(0)|71|72|(0)(0)|75|76|77|78|79)|61|62)|117|116|55|56|57|58|59|60) */
    /* JADX WARN: Can't wrap try/catch for region: R(21:24|(2:26|(2:28|29))|30|(1:126)(1:34)|35|(1:37)|38|39|16b|46|(16:(25:50|(23:54|55|56|57|58|59|60|61|62|64|65|66|67|68|(1:70)(1:86)|71|72|(1:74)(2:84|85)|75|76|77|78|79)|116|55|56|57|58|59|60|61|62|64|65|66|67|68|(0)(0)|71|72|(0)(0)|75|76|77|78|79)|(23:54|55|56|57|58|59|60|61|62|64|65|66|67|68|(0)(0)|71|72|(0)(0)|75|76|77|78|79)|64|65|66|67|68|(0)(0)|71|72|(0)(0)|75|76|77|78|79)|117|116|55|56|57|58|59|60|61|62) */
    /* JADX WARN: Can't wrap try/catch for region: R(3:(16:(25:50|(23:54|55|56|57|58|59|60|61|62|64|65|66|67|68|(1:70)(1:86)|71|72|(1:74)(2:84|85)|75|76|77|78|79)|116|55|56|57|58|59|60|61|62|64|65|66|67|68|(0)(0)|71|72|(0)(0)|75|76|77|78|79)|(23:54|55|56|57|58|59|60|61|62|64|65|66|67|68|(0)(0)|71|72|(0)(0)|75|76|77|78|79)|64|65|66|67|68|(0)(0)|71|72|(0)(0)|75|76|77|78|79)|61|62) */
    /* JADX WARN: Code restructure failed: missing block: B:100:0x021c, code lost:
    
        r3 = r9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:109:0x021e, code lost:
    
        r0 = e;
     */
    /* JADX WARN: Code restructure failed: missing block: B:110:0x021f, code lost:
    
        r18 = r5;
        r15 = "DecodeProducer";
        r3 = r9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:112:0x0234, code lost:
    
        r0 = e;
     */
    /* JADX WARN: Code restructure failed: missing block: B:113:0x0235, code lost:
    
        r18 = r5;
     */
    /* JADX WARN: Code restructure failed: missing block: B:114:0x0227, code lost:
    
        r0 = e;
     */
    /* JADX WARN: Code restructure failed: missing block: B:115:0x0228, code lost:
    
        r18 = r5;
        r15 = "DecodeProducer";
        r3 = r9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:99:0x021b, code lost:
    
        r0 = e;
     */
    /* JADX WARN: Removed duplicated region for block: B:70:0x01be  */
    /* JADX WARN: Removed duplicated region for block: B:74:0x01e1  */
    /* JADX WARN: Removed duplicated region for block: B:84:0x01e3 A[Catch: all -> 0x0192, TRY_LEAVE, TryCatch #1 {all -> 0x0192, blocks: (B:39:0x0169, B:40:0x016b, B:45:0x0176, B:46:0x0177, B:50:0x018d, B:54:0x019e, B:55:0x01a5, B:57:0x01a8, B:59:0x01ab, B:62:0x01b1, B:65:0x01b3, B:67:0x01b7, B:72:0x01cc, B:77:0x01fd, B:82:0x0205, B:83:0x0208, B:84:0x01e3, B:90:0x0264, B:104:0x0240, B:105:0x0261, B:116:0x01a3, B:117:0x0195, B:121:0x027f, B:76:0x01f1, B:43:0x016e), top: B:38:0x0169, inners: #3, #9 }] */
    /* JADX WARN: Removed duplicated region for block: B:86:0x01c9  */
    @Override // com.facebook.imagepipeline.producers.g0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void b(EncodedImage encodedImage, int i5) {
        String str;
        long j;
        int size;
        oa.j jVar;
        long j5;
        String str2;
        a1 a1Var;
        oa.j jVar2;
        String str3;
        oa.c cVar;
        boolean z5;
        oa.c cVar2;
        s8.b bVar;
        p this$0 = (p) this.f3381i;
        q this$1 = (q) this.f3382v;
        int i6 = this.f3380e;
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(this$1, "this$1");
        if (encodedImage == null) {
            return;
        }
        ProducerContext producerContext = this$0.f4782c;
        ImageRequest g6 = producerContext.g();
        producerContext.A(encodedImage.getImageFormat().a, "image_format");
        Uri sourceUri = g6.getSourceUri();
        encodedImage.setSource(sourceUri != null ? sourceUri.toString() : null);
        DownsampleMode downsampleOverride = g6.getDownsampleOverride();
        if (downsampleOverride == null) {
            downsampleOverride = this$1.f4794e;
        }
        boolean k = com.facebook.imagepipeline.producers.c.k(i5, 16);
        if ((downsampleOverride == DownsampleMode.f4592d || (downsampleOverride == DownsampleMode.f4593e && !k)) && (this$1.f4795f || !w8.a.c(g6.getSourceUri()))) {
            RotationOptions rotationOptions = g6.getRotationOptions();
            Intrinsics.checkNotNullExpressionValue(rotationOptions, "getRotationOptions(...)");
            encodedImage.setSampleSize(ys.d.F(rotationOptions, g6.getResizeOptions(), encodedImage, i6));
        }
        ((ImagePipelineConfig) producerContext.l()).f4622u.getClass();
        int i10 = this$0.f4788i;
        String str4 = JankScreenContext.UNKNOWN_SCREEN;
        ImageDecodeOptions imageDecodeOptions = this$0.f4785f;
        a1 a1Var2 = this$0.f4784e;
        if ((encodedImage.getImageFormat() != aa.b.a && com.facebook.imagepipeline.producers.c.e(i5)) || this$0.f4786g || !EncodedImage.isValid(encodedImage)) {
            return;
        }
        if (Intrinsics.areEqual(encodedImage.getImageFormat(), aa.b.f264c)) {
            if (encodedImage.getWidth() * encodedImage.getHeight() * BitmapUtil.getPixelSizeForBitmapConfig(imageDecodeOptions.a) > 104857600) {
                int width = encodedImage.getWidth();
                int height = encodedImage.getHeight();
                Bitmap.Config config = imageDecodeOptions.a;
                StringBuilder q5 = a3.e.q(width, "Image is too big to attempt decoding: w = ", height, ", h = ", ", pixel config = ");
                q5.append(config);
                q5.append(", max bitmap size = 104857600");
                IllegalStateException illegalStateException = new IllegalStateException(q5.toString());
                a1Var2.k(producerContext, "DecodeProducer", illegalStateException, null);
                this$0.o(true);
                this$0.f4801b.onFailure(illegalStateException);
                return;
            }
        }
        aa.c imageFormat = encodedImage.getImageFormat();
        Intrinsics.checkNotNullExpressionValue(imageFormat, "getImageFormat(...)");
        String str5 = imageFormat.a;
        String str6 = encodedImage.getWidth() + "x" + encodedImage.getHeight();
        String valueOf = String.valueOf(encodedImage.getSampleSize());
        boolean d6 = com.facebook.imagepipeline.producers.c.d(i5);
        boolean z6 = d6 && !com.facebook.imagepipeline.producers.c.k(i5, 8);
        boolean k5 = com.facebook.imagepipeline.producers.c.k(i5, 4);
        ResizeOptions resizeOptions = producerContext.g().getResizeOptions();
        if (resizeOptions != null) {
            str4 = resizeOptions.a + "x" + resizeOptions.f4584b;
        }
        try {
            h0 h0Var = this$0.f4787h;
            synchronized (h0Var) {
                str = str4;
                j = h0Var.f4744i - h0Var.f4743h;
            }
            String uri = producerContext.g().getSourceUri().toString();
            Intrinsics.checkNotNullExpressionValue(uri, "toString(...)");
            try {
                try {
                    try {
                        try {
                            if (!z6 && !k5) {
                                size = this$0.m(encodedImage);
                                if (!z6 && !k5) {
                                    jVar = this$0.n();
                                    a1Var2.c(producerContext, "DecodeProducer");
                                    Intrinsics.checkNotNull(jVar);
                                    j5 = j;
                                    cVar2 = this$0.j.f4792c.p(encodedImage, size, jVar, this$0.f4785f);
                                    int i11 = encodedImage.getSampleSize() == 1 ? i5 | 16 : i5;
                                    a1Var2.i(producerContext, "DecodeProducer", this$0.l(cVar2, j5, jVar, d6, str5, str6, str, valueOf));
                                    this$0.p(encodedImage, cVar2, i10);
                                    gj.c cVar3 = (gj.c) this$0.j.f4798i.f9613d;
                                    if (cVar2 != null) {
                                        bVar = null;
                                    } else {
                                        io.sentry.hints.j jVar3 = CloseableReference.f4406w;
                                        cVar3.l();
                                        bVar = new s8.b(cVar2, jVar3, cVar3, null, true);
                                    }
                                    this$0.o(com.facebook.imagepipeline.producers.c.d(i11));
                                    this$0.f4801b.b(i11, bVar);
                                    EncodedImage.closeSafely(encodedImage);
                                    return;
                                }
                                jVar = oa.j.f15814d;
                                a1Var2.c(producerContext, "DecodeProducer");
                                Intrinsics.checkNotNull(jVar);
                                j5 = j;
                                cVar2 = this$0.j.f4792c.p(encodedImage, size, jVar, this$0.f4785f);
                                if (encodedImage.getSampleSize() == 1) {
                                }
                                a1Var2.i(producerContext, "DecodeProducer", this$0.l(cVar2, j5, jVar, d6, str5, str6, str, valueOf));
                                this$0.p(encodedImage, cVar2, i10);
                                gj.c cVar32 = (gj.c) this$0.j.f4798i.f9613d;
                                if (cVar2 != null) {
                                }
                                this$0.o(com.facebook.imagepipeline.producers.c.d(i11));
                                this$0.f4801b.b(i11, bVar);
                                EncodedImage.closeSafely(encodedImage);
                                return;
                            }
                            if (!z6) {
                                jVar = this$0.n();
                                a1Var2.c(producerContext, "DecodeProducer");
                                Intrinsics.checkNotNull(jVar);
                                j5 = j;
                                cVar2 = this$0.j.f4792c.p(encodedImage, size, jVar, this$0.f4785f);
                                if (encodedImage.getSampleSize() == 1) {
                                }
                                a1Var2.i(producerContext, "DecodeProducer", this$0.l(cVar2, j5, jVar, d6, str5, str6, str, valueOf));
                                this$0.p(encodedImage, cVar2, i10);
                                gj.c cVar322 = (gj.c) this$0.j.f4798i.f9613d;
                                if (cVar2 != null) {
                                }
                                this$0.o(com.facebook.imagepipeline.producers.c.d(i11));
                                this$0.f4801b.b(i11, bVar);
                                EncodedImage.closeSafely(encodedImage);
                                return;
                            }
                            this$0.o(com.facebook.imagepipeline.producers.c.d(i11));
                            this$0.f4801b.b(i11, bVar);
                            EncodedImage.closeSafely(encodedImage);
                            return;
                        } finally {
                            CloseableReference.l(bVar);
                        }
                        if (encodedImage.getSampleSize() == 1) {
                        }
                        a1Var2.i(producerContext, "DecodeProducer", this$0.l(cVar2, j5, jVar, d6, str5, str6, str, valueOf));
                        this$0.p(encodedImage, cVar2, i10);
                        gj.c cVar3222 = (gj.c) this$0.j.f4798i.f9613d;
                        if (cVar2 != null) {
                        }
                    } catch (Exception e9) {
                        e = e9;
                        str2 = "DecodeProducer";
                        jVar2 = jVar;
                        str3 = str;
                        z5 = d6;
                        a1Var = a1Var2;
                        Intrinsics.checkNotNull(jVar2);
                        a1Var.k(producerContext, str2, e, this$0.l(cVar2, j5, jVar2, z5, str5, str6, str3, valueOf));
                        this$0.o(true);
                        this$0.f4801b.onFailure(e);
                        EncodedImage.closeSafely(encodedImage);
                        return;
                    }
                    cVar2 = this$0.j.f4792c.p(encodedImage, size, jVar, this$0.f4785f);
                } catch (Exception e10) {
                    e = e10;
                    a1Var = a1Var2;
                    str2 = "DecodeProducer";
                    jVar2 = jVar;
                    str3 = str;
                    cVar = null;
                    z5 = d6;
                    cVar2 = cVar;
                    Intrinsics.checkNotNull(jVar2);
                    a1Var.k(producerContext, str2, e, this$0.l(cVar2, j5, jVar2, z5, str5, str6, str3, valueOf));
                    this$0.o(true);
                    this$0.f4801b.onFailure(e);
                    EncodedImage.closeSafely(encodedImage);
                    return;
                }
            } catch (ma.a e11) {
                e = e11;
                str2 = "DecodeProducer";
                a1Var = a1Var2;
                jVar2 = jVar;
                str3 = str;
                cVar = null;
                z5 = d6;
                try {
                    EncodedImage encodedImage2 = e.f14417d;
                    ma.a aVar = e;
                    p8.a.x(this$0.f4783d, "%s, {uri: %s, firstEncodedBytes: %s, length: %d}", aVar.getMessage(), uri, encodedImage2.getFirstBytesAsHexString(10), Integer.valueOf(encodedImage2.getSize()));
                    throw aVar;
                } catch (Exception e12) {
                    e = e12;
                    cVar2 = cVar;
                    Intrinsics.checkNotNull(jVar2);
                    a1Var.k(producerContext, str2, e, this$0.l(cVar2, j5, jVar2, z5, str5, str6, str3, valueOf));
                    this$0.o(true);
                    this$0.f4801b.onFailure(e);
                    EncodedImage.closeSafely(encodedImage);
                    return;
                }
            }
            size = encodedImage.getSize();
            jVar = oa.j.f15814d;
            a1Var2.c(producerContext, "DecodeProducer");
            Intrinsics.checkNotNull(jVar);
            j5 = j;
        } catch (Throwable th2) {
            EncodedImage.closeSafely(encodedImage);
            throw th2;
        }
    }

    @Override // ec.b
    public Object execute() {
        k kVar = (k) this.f3381i;
        ((m) kVar.f3401w).g0((wb.i) this.f3382v, this.f3380e + 1, false);
        return null;
    }

    @Override // ke.j
    public void invoke(Object obj) {
        switch (this.f3379d) {
            case 2:
                Player.PositionInfo positionInfo = (Player.PositionInfo) this.f3381i;
                Player.PositionInfo positionInfo2 = (Player.PositionInfo) this.f3382v;
                com.google.android.exoplayer2.h hVar = (com.google.android.exoplayer2.h) obj;
                int i5 = this.f3380e;
                hVar.onPositionDiscontinuity(i5);
                hVar.onPositionDiscontinuity(positionInfo, positionInfo2, i5);
                break;
            default:
                ((ic.b) obj).onMediaItemTransition((AnalyticsListener$EventTime) this.f3381i, (MediaItem) this.f3382v, this.f3380e);
                break;
        }
    }

    public /* synthetic */ f(Object obj, Object obj2, int i5, int i6) {
        this.f3379d = i6;
        this.f3381i = obj;
        this.f3382v = obj2;
        this.f3380e = i5;
    }
}
